<?php

/**
 * Implementation of hook_user_default_roles().
 */
function mt_access_user_default_roles() {
  $roles = array();

  // Exported role: Publisher
  $roles['Publisher'] = array(
    'name' => 'Publisher',
  );

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
  );

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  // Exported role: group manager
  $roles['group manager'] = array(
    'name' => 'group manager',
  );

  return $roles;
}
