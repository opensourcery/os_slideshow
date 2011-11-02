<?php
/**
 * @file
 * os_slideshow.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function os_slideshow_user_default_permissions() {
  $permissions = array();

  // Exported permission: view any slideshow bean
  $permissions['view any slideshow bean'] = array(
    'name' => 'view any slideshow bean',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
