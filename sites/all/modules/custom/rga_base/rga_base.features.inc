<?php
/**
 * @file
 * rga_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rga_base_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function rga_base_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_themekey_features_rule_chain_import().
 */
function rga_base_themekey_features_rule_chain_import() {
if (!defined('THEMEKEY_PAGECACHE_UNSUPPORTED')) {
    define('THEMEKEY_PAGECACHE_UNSUPPORTED', 0);
    define('THEMEKEY_PAGECACHE_SUPPORTED', 1);
    define('THEMEKEY_PAGECACHE_TIMEBASED', 2);
  }
$rules = array(
  0 => array(
    'rule' => array(
      'property' => 'drupal:is_front_page',
      'operator' => '=',
      'value' => 'true',
      'theme' => 'rga12home',
      'enabled' => '1',
      'wildcards' => array(),
    ),
    'string' => '"drupal:is_front_page = true >>> rga12home"',
    'childs' => array(),
  ),
  1 => array(
    'rule' => array(
      'property' => 'user:role',
      'operator' => '=',
      'value' => 'anonymous user',
      'theme' => 'default',
      'enabled' => '1',
      'wildcards' => array(),
    ),
    'string' => '"user:role = anonymous user >>> default"',
    'childs' => array(),
  ),
  2 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'edit/%',
      'theme' => 'ThemeKeyAdminTheme',
      'enabled' => '1',
      'wildcards' => array(),
    ),
    'string' => '"drupal:path = edit/% >>> ThemeKeyAdminTheme"',
    'childs' => array(),
  ),
);

return $rules;
}
