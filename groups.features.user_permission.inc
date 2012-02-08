<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function groups_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit field_focusgroup_speaker
  $permissions['edit field_focusgroup_speaker'] = array(
    'name' => 'edit field_focusgroup_speaker',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: edit field_wiki_relatedgroups
  $permissions['edit field_wiki_relatedgroups'] = array(
    'name' => 'edit field_wiki_relatedgroups',
    'roles' => array(
      '0' => 'Site Administrators',
    ),
  );

  // Exported permission: view field_focusgroup_speaker
  $permissions['view field_focusgroup_speaker'] = array(
    'name' => 'view field_focusgroup_speaker',
    'roles' => array(
      '0' => 'Project Members',
      '1' => 'Site Administrators',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_wiki_relatedgroups
  $permissions['view field_wiki_relatedgroups'] = array(
    'name' => 'view field_wiki_relatedgroups',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'authenticated user',
    ),
  );

  // Exported permission: view focus group colors
  $permissions['view focus group colors'] = array(
    'name' => 'view focus group colors',
    'roles' => array(
      '0' => 'Project Administrators',
      '1' => 'Project Members',
      '2' => 'Site Administrators',
      '3' => 'authenticated user',
    ),
  );

  return $permissions;
}
