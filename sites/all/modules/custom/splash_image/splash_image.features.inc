<?php
/**
 * @file
 * splash_image.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function splash_image_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function splash_image_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function splash_image_node_info() {
  $items = array(
    'splash' => array(
      'name' => t('Splash Image'),
      'base' => 'node_content',
      'description' => t('Photos that appear on the left side of the home page.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
