<?php

/**
 *
 * @file
 * Administrative functionality for Empty Page module.
 *
 */

/**
 * Container for the callback management interface.
 *
 * @return string $output (rendered html)
 */
function empty_page_admin_overview() {
  $output = theme('fieldset', array('element' => array('#title' => t('Manage'), '#children' => theme('empty_page_callbacks_manage_render'))));

  return $output;
}

/**
 * Theme function to render the callback management admin interface.
 *
 * @return string $output (rendered html)
 */
function theme_empty_page_callbacks_manage_render() {
  $edit_access = user_access(EMPTY_PAGE_PERM_ADMIN_CALLBACKS);

  // TODO:: Create header with sortable columns
  $header = array(
    array('data' => t('Internal Path'), /*'field' => 'path', 'sort' => 'asc'*/),
    array('data' => t('Page Title'), /*'field' => 'page_title'*/),
  );
  if ($edit_access) {
    $header[] = array('data' => t('Storage'));
    $header[] = array('data' => t('Actions'), 'colspan' => 2);
  }

  // TODO:: Get current sort and order parameters from the url
  // $order = tablesort_get_order($header);
  // $sort = tablesort_get_sort($header);

  // Create sorted rows
  $rows = array();
  // TODO:: write sort handling!
  $callbacks = empty_page_get_callbacks(/*$order['sql'], $sort*/);
  foreach ($callbacks as $cb) {
    // Determine callback's storage state (from ctools exportables).
    if ($edit_access) {
      switch ($cb->export_type) {
        case EXPORT_IN_DATABASE | EXPORT_IN_CODE:
          $storage = t('Overridden');
          $delete = l(t('Revert'), 'admin/structure/empty-page/' . $cb->callback_id . '/delete');
          break;
        case EXPORT_IN_DATABASE:
          $storage = t('Normal');
          $delete = l(t('Delete'), 'admin/structure/empty-page/' . $cb->callback_id . '/delete');
          break;
        case EXPORT_IN_CODE:
          $storage = t('Default');
          $delete = '';
          break;
      }
    }
    // Append row data.
    $path = check_plain($cb->path);
    $row = array(
      array('data' => l($path, $path)),
      array('data' => check_plain($cb->page_title)),
    );
    if ($edit_access) {
      $row[] = array('data' => $storage);
      $row[] = array('data' => l(t('Edit'), 'admin/structure/empty-page/'. $cb->callback_id .'/edit'));
      /* TODO:: implement export and clone? */
      // $row[] = array('data' => l(t('Export'), 'admin/structure/empty-page/'. $cb->callback_id .'/export'));
      // $row[] = array('data' => l(t('Clone'), 'admin/structure/empty-page/'. $cb->callback_id .'/clone'));
      $row[] = array('data' => $delete);
    }
    $rows[] = $row;
  }

  // Or generate empty-set message if no callbacks defined.
  if (empty($rows)) {
    $edit = $edit_access ? ' ' . t('<a href="@url">Add one now!</a>', array('@url' => url('admin/structure/empty-page/add'))) : '';
    $span = $edit_access ? 5 : 2;
    $rows[] = array(
      array('data' => t('No callbacks exist yet.') . $edit, 'colspan' => $span)
    );
  }

  // TODO:: Return pre-render array for other modules to modify?
  // $build = array(
  //   '#theme' => 'table',
  //   '#header' => $header,
  //   '#rows' => $rows,
  //   '#attributes' => array('id' => 'empty-page'),
  // );
  return theme('table', array('header' => $header, 'rows' => $rows));
}


/**
 * The Empty Page callback delete confirmation form.
 *
 * @param array $form_state
 * @param object $callback
 * @return array $form
 */
function empty_page_callback_delete_form($form, &$form_state, $callback) {
  if (!$callback) {
    drupal_goto('admin/structure/empty-page');
  }

  drupal_set_title('Delete callback');

  $form = confirm_form(
    array(
      'callback_id' => array(
        '#type' => 'value',
        '#value' => $callback->callback_id,
      ),
    ),
    t('Are you sure you want to delete the callback for <em>!path</em>?', array('!path' => $callback->path)),
    'admin/structure/empty-page',
    t('This action cannot be undone.'),
    t('Delete callback'),
    t('Cancel')
  );

  return $form;
}

/**
 * Form submit handler for deleting an Empty Page callback.
 *
 * @param array $form
 * @param array $form_state
 */
function empty_page_callback_delete_form_submit($form, &$form_state) {
  empty_page_delete_callback($form_state['values']['callback_id']);

  drupal_set_message(t('Callback <em>!path</em> deleted.', array('!path' => $form_state['values']['callback_id'])));

  drupal_goto('admin/structure/empty-page');
}

/**
 * The Empty Page callback add / edit form.
 *
 * @param array $form
 * @param array $form_state
 * @param object $callback
 * @return array $form
 */
function empty_page_callback_edit_form($form, &$form_state, $callback = NULL) {
  $is_new = (empty($callback));

  // Wrap form in fieldset to indicate add/edit
  $form['empty_page_edit'] = array(
    '#type' => 'fieldset',
    '#title' => $is_new ? t('Create a new callback') : t('Edit callback'),
    '#description' => '',
    '#collapsible' => TRUE
  );

  $form['empty_page_edit']['path'] = array(
    '#type' => 'textfield',
    '#title' => t('Internal path'),
    '#description' => '',
    '#required' => TRUE,
    '#default_value' => $is_new ? '' : $callback->path,
    '#weight' => -9,
  );

  $form['empty_page_edit']['callback_id'] = array(
    '#type' => 'machine_name',
    '#title' => t('Callback ID'),
    '#maxlength' => 32,
    '#machine_name' => array(
      'exists' => 'empty_page_callback_exists',
      'source' => array('empty_page_edit', 'path'),
      'label' => t('Callback ID'),
      'replace_pattern' => '[^a-z0-9-]+',
      'replace' => '-',
    ),
    '#description' => t('A unique, machine-readable identifier for this Empty Page callback. It must only contain lowercase letters, numbers, and underscores. This name is autogenerated from the internal path and will be used internally by the Empty Page module.'),
    '#weight' => -8,
  );
   if (!$is_new) {
    $form['empty_page_edit']['callback_id']['#value'] = $callback->callback_id;
    $form['empty_page_edit']['callback_id']['#default_value'] = $callback->callback_id;
    $form['empty_page_edit']['callback_id']['#disabled'] = TRUE;
  }

  $form['empty_page_edit']['page_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Page title'),
    '#description' => '',
    '#default_value' => $is_new ? '' : $callback->page_title,
    '#weight' => -7,
  );
  $form['empty_page_edit']['buttons']['submit'] = array(
    '#type' => 'submit',
    '#value' => $is_new ? t('Add') : t('Save'),
  );

  return $form;
}

/**
 * Form validate handler for adding / editing an Empty Page callback.
 *
 * @param array $form
 * @param array $form_state
 */
function empty_page_callback_edit_form_validate($form, &$form_state) {
  if (empty($form_state['values']['path'])) {
    form_set_error('path', t('You must provide an <em>Internal path</em> for your callback.'));
  }
}

/**
 * Form submit handler for adding / editing an Empty Page callback.
 *
 * @param array $form
 * @param array $form_state
 */
function empty_page_callback_edit_form_submit($form, &$form_state) {

  // Create new object from form values. Timestamps are set during save routine.
  $callback = new stdClass();
  $callback->callback_id = $form_state['values']['callback_id'];
  $callback->path = $form_state['values']['path'];
  $callback->page_title = $form_state['values']['page_title'];

  // Compare form object to existing records and save/update as necessary.
  switch (empty_page_save_callback($callback)) {
    case SAVED_NEW:
      drupal_set_message(t('Callback created.'));
      break;
    case SAVED_UPDATED:
      drupal_set_message(t('Callback updated.'));
      break;
    default:
      drupal_set_message(t('Error saving callback.'));
      break;
  }

  drupal_goto('admin/structure/empty-page');
}

