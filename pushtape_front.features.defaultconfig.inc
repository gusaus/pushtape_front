<?php
/**
 * @file
 * pushtape_front.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function pushtape_front_defaultconfig_features() {
  return array(
    'pushtape_front' => array(
      'user_default_permissions' => 'user_default_permissions',
      'user_default_roles' => 'user_default_roles',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function pushtape_front_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create album content'.
  $permissions['create album content'] = array(
    'name' => 'create album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any album content'.
  $permissions['delete any album content'] = array(
    'name' => 'delete any album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own album content'.
  $permissions['delete own album content'] = array(
    'name' => 'delete own album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any album content'.
  $permissions['edit any album content'] = array(
    'name' => 'edit any album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own album content'.
  $permissions['edit own album content'] = array(
    'name' => 'edit own album content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}

/**
 * Implements hook_defaultconfig_user_default_roles().
 */
function pushtape_front_defaultconfig_user_default_roles() {
  $roles = array();

  // Exported role: artist.
  $roles['artist'] = array(
    'name' => 'artist',
    'weight' => 2,
  );

  return $roles;
}
