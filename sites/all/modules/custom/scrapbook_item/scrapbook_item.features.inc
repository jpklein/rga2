<?php
/**
 * @file
 * scrapbook_item.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function scrapbook_item_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function scrapbook_item_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function scrapbook_item_node_info() {
  $items = array(
    'scrapbook' => array(
      'name' => t('Scrapbook Item'),
      'base' => 'node_content',
      'description' => t('Photos, dates, and descriptions displayed in the "Scrapbook" section.'),
      'has_title' => '1',
      'title_label' => t('Caption'),
      'help' => '',
    ),
  );
  return $items;
}
