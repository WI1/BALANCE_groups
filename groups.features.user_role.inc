<?php

/**
 * Implementation of hook_user_default_roles().
 */
function groups_user_default_roles() {
  $roles = array();

  // Exported role: Project Administrators
  $roles['Project Administrators'] = array(
    'name' => 'Project Administrators',
  );

  // Exported role: Project Members
  $roles['Project Members'] = array(
    'name' => 'Project Members',
  );

  return $roles;
}
