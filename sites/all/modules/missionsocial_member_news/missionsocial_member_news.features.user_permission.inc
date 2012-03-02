<?php
/**
 * @file
 * missionsocial_member_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function missionsocial_member_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: create member_news content
  $permissions['create member_news content'] = array(
    'name' => 'create member_news content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own member_news content
  $permissions['delete own member_news content'] = array(
    'name' => 'delete own member_news content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own member_news content
  $permissions['edit own member_news content'] = array(
    'name' => 'edit own member_news content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
