<?php
/**
 * @file
 * observations.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function observations_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create observation content'.
  $permissions['create observation content'] = array(
    'name' => 'create observation content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'get own binary files'.
  $permissions['get own binary files'] = array(
    'name' => 'get own binary files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'services',
  );

  // Exported permission: 'save file information'.
  $permissions['save file information'] = array(
    'name' => 'save file information',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'services',
  );

  return $permissions;
}
