<?php
/**
 * @file
 * page_copy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function page_copy_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function page_copy_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function page_copy_node_info() {
  $items = array(
    'page_copy' => array(
      'name' => t('Page Copy'),
      'base' => 'node_content',
      'description' => t('Wysiwyg-enabled sections of text for output in panels.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
