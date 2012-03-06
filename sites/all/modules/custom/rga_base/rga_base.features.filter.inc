<?php
/**
 * @file
 * rga_base.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function rga_base_filter_default_formats() {
  $formats = array();

  // Exported format: Default
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Default',
    'cache' => '1',
    'status' => '1',
    'weight' => '10',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-48',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <br> <p> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => '-47',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
