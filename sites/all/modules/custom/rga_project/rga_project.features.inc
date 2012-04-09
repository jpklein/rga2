<?php
/**
 * @file
 * rga_project.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rga_project_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function rga_project_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function rga_project_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => t('Photos and descriptions of completed architectural projects displayed in the "Projects" section.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
