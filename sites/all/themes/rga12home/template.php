<?php
/**
 * Implements theme_css_alter().
 *
 * Remove all unneeded core css files.
 */
function rga12home_css_alter(&$css) {
  $exclude = array(
    'misc/vertical-tabs.css' => FALSE,
    'modules/aggregator/aggregator.css' => FALSE,
    'modules/block/block.css' => FALSE,
    'modules/book/book.css' => FALSE,
    'modules/comment/comment.css' => FALSE,
    'modules/dblog/dblog.css' => FALSE,
    'modules/file/file.css' => FALSE,
    'modules/filter/filter.css' => FALSE,
    'modules/forum/forum.css' => FALSE,
    'modules/help/help.css' => FALSE,
    'modules/menu/menu.css' => FALSE,
    'modules/node/node.css' => FALSE,
    'modules/openid/openid.css' => FALSE,
    'modules/poll/poll.css' => FALSE,
    'modules/profile/profile.css' => FALSE,
    'modules/search/search.css' => FALSE,
    'modules/statistics/statistics.css' => FALSE,
    'modules/syslog/syslog.css' => FALSE,
    'modules/system/admin.css' => FALSE,
    'modules/system/maintenance.css' => FALSE,
    'modules/system/system.css' => FALSE,
    'modules/system/system.admin.css' => FALSE,
    'modules/system/system.base.css' => FALSE,
    'modules/system/system.maintenance.css' => FALSE,
    'modules/system/system.menus.css' => FALSE,
    'modules/system/system.messages.css' => FALSE,
    'modules/system/system.theme.css' => FALSE,
    'modules/taxonomy/taxonomy.css' => FALSE,
    'modules/tracker/tracker.css' => FALSE,
    'modules/update/update.css' => FALSE,
    'modules/user/user.css' => FALSE,
  );
  $css = array_diff_key($css, $exclude);
}

/**
 * Implements theme_preprocess_html().
 */
function rga12home_preprocess_html(&$variables) {
  // Add reset css
  drupal_add_css(path_to_theme() . '/css/reset.css', array('group' => CSS_SYSTEM-1, 'preprocess' => FALSE));
  // Add Dialog API components
  drupal_add_library('dialog', 'dialog', TRUE);
}

/**
 * Implements theme_menu_link().
 *
 * Add unique class (mlid) to all menu items.
 * with Menu title as class
 */
function rga12home_menu_link($variables) {
  $element = $variables['element'];
  $sub_menu = '';
  $name_id = strtolower(strip_tags($element['#title']));
  // remove colons and anything past colons
  if (strpos($name_id, ':')) {
    $name_id = substr($name_id, 0, strpos($name_id, ':'));
  }
  // preserve alphanumerics, everything else goes away
  $pattern = '/[^a-z]+/';
  $name_id = preg_replace($pattern, '', $name_id);
  $element['#attributes']['class'][] = 'menu-'. $element['#original_link']['mlid'] .' '. $name_id;
  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li'. drupal_attributes($element['#attributes']) .'>'. $output . $sub_menu ."</li>\n";
}
