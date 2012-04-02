<?php

/**
 * Form constructor for the module's system settings form.
 */
function empty_page_extras_settings_form() {

  // Optionally add access-control settings to the callback-edit form.
  $form['callback_settings'] = array(
    '#type' => 'fieldset', 
    '#title' => t('Settings'),
  );
  $form['callback_settings']['empty_page_access_control'] = array(
    '#type' => 'checkbox', 
    '#title' => t('Enable role-based access control'),
    '#description' => t('Gives you the option to deny access to callbacks according to the user\'s role. Different permissions can be assigned to each callback.'),
    '#default_value' => variable_get('empty_page_access_control', 0),
  );

  $form['#submit'][] = 'empty_page_extras_settings_form_submit';

  return system_settings_form($form);
}

/**
 * Form submission handler for the module's system settings form.
 */
function empty_page_extras_settings_form_submit($form, &$form_state) {

  // Remove rid data from the database if role-based access control is disabled.
  if (empty($form_state['values']['empty_page_access_control'])) {
    // TODO:: run this handler after system_settings_form_submit to remove the
    // follwing redundant variable_set(), or just build form ourself without
    // system_settings_form...
    variable_set('empty_page_access_control', 0);

    module_load_include('install', 'empty_page_extras');
    empty_page_extras_unset_access_control_data();
  }
}