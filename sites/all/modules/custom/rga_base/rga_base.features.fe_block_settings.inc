<?php
/**
 * @file
 * rga_base.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function rga_base_default_fe_block_settings() {
  $export = array();

  // rga12
  $theme = array();

  $theme['quicktabs-edit_home_page'] = array(
    'module' => 'quicktabs',
    'delta' => 'edit_home_page',
    'theme' => 'rga12',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'edit/home',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['quicktabs-edit_scrapbook'] = array(
    'module' => 'quicktabs',
    'delta' => 'edit_scrapbook',
    'theme' => 'rga12',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'edit/scrapbook',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'rga12',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'rga12',
    'status' => 0,
    'weight' => '-5',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'rga12',
    'status' => 0,
    'weight' => '-3',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'rga12',
    'status' => 0,
    'weight' => '-2',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'rga12',
    'status' => 0,
    'weight' => '3',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-footer_block-block'] = array(
    'module' => 'views',
    'delta' => 'footer_block-block',
    'theme' => 'rga12',
    'status' => '1',
    'weight' => '-6',
    'region' => 'footer',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['rga12'] = $theme;

  // rga12home
  $theme = array();

  $theme['quicktabs-edit_home_page'] = array(
    'module' => 'quicktabs',
    'delta' => 'edit_home_page',
    'theme' => 'rga12home',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'edit/home',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['quicktabs-edit_scrapbook'] = array(
    'module' => 'quicktabs',
    'delta' => 'edit_scrapbook',
    'theme' => 'rga12home',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'edit/scrapbook',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'rga12home',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'rga12home',
    'status' => 0,
    'weight' => '-5',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'rga12home',
    'status' => 0,
    'weight' => '-3',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'rga12home',
    'status' => 0,
    'weight' => '-2',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'rga12home',
    'status' => 0,
    'weight' => '3',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-footer_block-block'] = array(
    'module' => 'views',
    'delta' => 'footer_block-block',
    'theme' => 'rga12home',
    'status' => '1',
    'weight' => '0',
    'region' => 'footer',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['rga12home'] = $theme;

  // rgaseven
  $theme = array();

  $theme['quicktabs-edit_home_page'] = array(
    'module' => 'quicktabs',
    'delta' => 'edit_home_page',
    'theme' => 'rgaseven',
    'status' => '1',
    'weight' => '-13',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'edit/home',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['quicktabs-edit_scrapbook'] = array(
    'module' => 'quicktabs',
    'delta' => 'edit_scrapbook',
    'theme' => 'rgaseven',
    'status' => '1',
    'weight' => '-12',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'edit/scrapbook',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'rgaseven',
    'status' => '1',
    'weight' => '-11',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'rgaseven',
    'status' => 0,
    'weight' => '-5',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'rgaseven',
    'status' => 0,
    'weight' => '-3',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'rgaseven',
    'status' => 0,
    'weight' => '-2',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'rgaseven',
    'status' => 0,
    'weight' => '3',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-footer_block-block'] = array(
    'module' => 'views',
    'delta' => 'footer_block-block',
    'theme' => 'rgaseven',
    'status' => 0,
    'weight' => '-6',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['rgaseven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
