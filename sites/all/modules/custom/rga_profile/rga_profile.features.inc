<?php
/**
 * @file
 * rga_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rga_profile_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function rga_profile_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function rga_profile_node_info() {
  $items = array(
    'profile' => array(
      'name' => t('Profile'),
      'base' => 'node_content',
      'description' => t('Employee pictures and bios appearing in the "Studio" section.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
