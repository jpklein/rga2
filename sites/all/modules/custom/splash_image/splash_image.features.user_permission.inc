<?php
/**
 * @file
 * splash_image.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function splash_image_user_default_permissions() {
  $permissions = array();

  // Exported permission: create splash content
  $permissions['create splash content'] = array(
    'name' => 'create splash content',
    'roles' => array(),
  );

  // Exported permission: delete any splash content
  $permissions['delete any splash content'] = array(
    'name' => 'delete any splash content',
    'roles' => array(),
  );

  // Exported permission: edit any splash content
  $permissions['edit any splash content'] = array(
    'name' => 'edit any splash content',
    'roles' => array(),
  );

  return $permissions;
}
