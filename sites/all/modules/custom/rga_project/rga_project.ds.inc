<?php
/**
 * @file
 * rga_project.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function rga_project_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|project|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'project';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'project-name',
      ),
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'body' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'field_location' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => '-',
        'lb-el' => 'span',
        'lb-col' => TRUE,
        'fi' => TRUE,
        'fi-el' => 'span',
        'fi-cl' => 'project-location',
      ),
    ),
  );
  $export['node|project|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|project|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'project';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'project-name',
      ),
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'body' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'field_location' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => '-',
        'lb-el' => 'span',
        'lb-col' => TRUE,
        'fi' => TRUE,
        'fi-el' => 'span',
        'fi-cl' => 'project-location',
      ),
    ),
  );
  $export['node|project|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function rga_project_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|project|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'project';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_project_image',
        1 => 'title',
        2 => 'field_location',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_project_image' => 'ds_content',
      'title' => 'ds_content',
      'field_location' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|project|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|project|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'project';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'rga_project';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'gallery' => array(
        0 => 'field_project_image',
      ),
      'description' => array(
        0 => 'title',
        1 => 'field_location',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_project_image' => 'gallery',
      'title' => 'description',
      'field_location' => 'description',
      'body' => 'description',
    ),
    'classes' => array(),
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|project|full'] = $ds_layout;

  return $export;
}
