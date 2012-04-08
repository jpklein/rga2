<?php
/**
 * @file
 * featured_content.features.inc
 */

/**
 * Implements hook_views_api().
 */
function featured_content_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function featured_content_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: featured_content
  $nodequeues['featured_content'] = array(
    'qid' => '1',
    'name' => 'featured_content',
    'title' => 'Featured Content',
    'subqueue_title' => '',
    'size' => '3',
    'link' => 'Add project',
    'link_remove' => 'Remove project',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '1',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'project',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
