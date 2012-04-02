<?php
/**
 * @file
 * rga_base.callbacks_default.inc
 */

/**
 * Implements hook_default_empty_page().
 */
function rga_base_default_empty_page() {
  $export = array();

  $callback = new stdClass;
  $callback->disabled = FALSE; /* Edit this to true to make a default callback disabled initially */
  $callback->api_version = 1;
  $callback->callback_id = 'edit-home';
  $callback->path = 'edit/home';
  $callback->page_title = 'Edit Home Page Content';
  $callback->data = array(
    'rids' => array(
      0 => 2,
    ),
  );
  $callback->changed = 1333325232;
  $callback->created = 1333325214;
  $export['edit-home'] = $callback;

  $callback = new stdClass;
  $callback->disabled = FALSE; /* Edit this to true to make a default callback disabled initially */
  $callback->api_version = 1;
  $callback->callback_id = 'edit-scrapbook';
  $callback->path = 'edit/scrapbook';
  $callback->page_title = 'Edit Scrapbook Content';
  $callback->data = array(
    'rids' => array(
      0 => 2,
    ),
  );
  $callback->changed = 1333326466;
  $callback->created = 1333326466;
  $export['edit-scrapbook'] = $callback;

  return $export;
}
