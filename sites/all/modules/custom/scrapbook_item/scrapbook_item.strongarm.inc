<?php
/**
 * @file
 * scrapbook_item.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function scrapbook_item_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_scrapbook';
  $strongarm->value = 0;
  $export['enable_revisions_page_scrapbook'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_scrapbook';
  $strongarm->value = array();
  $export['menu_options_scrapbook'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_scrapbook';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_scrapbook'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_scrapbook';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_scrapbook'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_scrapbook';
  $strongarm->value = '0';
  $export['node_preview_scrapbook'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_scrapbook';
  $strongarm->value = 0;
  $export['node_submitted_scrapbook'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_scrapbook';
  $strongarm->value = 0;
  $export['show_diff_inline_scrapbook'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_scrapbook';
  $strongarm->value = 0;
  $export['show_preview_changes_scrapbook'] = $strongarm;

  return $export;
}
