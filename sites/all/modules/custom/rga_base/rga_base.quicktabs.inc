<?php
/**
 * @file
 * rga_base.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function rga_base_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'edit_home_page';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Edit Home Page Content';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'random_splash_image',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Splash Images',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'bid' => 'page_copy_delta_page_copy_6',
      'hide_title' => 1,
      'title' => 'Welcome Message',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'featured_content_delta_nodequeue_edit_1',
      'hide_title' => 1,
      'title' => 'Recent News/Projects',
      'weight' => '-97',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'page_copy_delta_page_copy_7',
      'hide_title' => 1,
      'title' => 'Site Footer',
      'weight' => '-96',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Seven';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Edit Home Page Content');
  t('Recent News/Projects');
  t('Site Footer');
  t('Splash Images');
  t('Welcome Message');

  $export['edit_home_page'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'edit_projects';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Edit Projects Content';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'edit_projects',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Project Galleries',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'bid' => 'page_copy_delta_page_copy_7',
      'hide_title' => 1,
      'title' => 'Site Footer',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Seven';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Edit Projects Content');
  t('Project Galleries');
  t('Site Footer');

  $export['edit_projects'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'edit_scrapbook';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Edit Scrapbook Content';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'edit_scrapbook_items',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Scrapbook Photos',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'bid' => 'page_copy_delta_page_copy_7',
      'hide_title' => 1,
      'title' => 'Site Footer',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Seven';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Edit Scrapbook Content');
  t('Scrapbook Photos');
  t('Site Footer');

  $export['edit_scrapbook'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'edit_studio_content';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Edit Studio Content';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'edit_profiles',
      'display' => 'block',
      'args' => '',
      'title' => 'Profiles',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'bid' => 'page_copy_delta_page_copy_12',
      'hide_title' => 1,
      'title' => 'About Us',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'page_copy_delta_page_copy_7',
      'hide_title' => 1,
      'title' => 'Site Footer',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Seven';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Edit Studio Content');
  t('Profiles');
  t('Site Footer');

  $export['edit_studio_content'] = $quicktabs;

  return $export;
}
