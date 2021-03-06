<?php
/**
 * @file
 * page_copy.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function page_copy_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_page_copy';
  $strongarm->value = 0;
  $export['enable_revisions_page_page_copy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_page_copy';
  $strongarm->value = array();
  $export['menu_options_page_copy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_page_copy';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_page_copy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page_copy';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page_copy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page_copy';
  $strongarm->value = '0';
  $export['node_preview_page_copy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page_copy';
  $strongarm->value = 0;
  $export['node_submitted_page_copy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_page_copy';
  $strongarm->value = 0;
  $export['show_diff_inline_page_copy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_page_copy';
  $strongarm->value = 0;
  $export['show_preview_changes_page_copy'] = $strongarm;

  return $export;
}
