<?php
/**
 * @file
 * rga_project.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function rga_project_taxonomy_default_vocabularies() {
  return array(
    'project_type' => array(
      'name' => 'Project Type',
      'machine_name' => 'project_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
