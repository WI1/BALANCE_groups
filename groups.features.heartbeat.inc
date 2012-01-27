<?php

/**
 * Implementation of hook_heartbeat_message_info().
 */
function groups_heartbeat_message_info() {
  $messages = array();

  // Exported heartbeat message: og_become_co_admin
  $messages[] = array (
    'message' => '!user is now a coadministrator of !group.',
    'message_concat' => '%user% is now a coadministrator of !group.',
    'message_id' => 'og_become_co_admin',
    'concat_args' => 
    array (
      'type' => 'summary',
      'group_by' => 'node',
      'group_target' => 'user',
      'group_by_target' => '',
      'group_num_max' => '2',
      'merge_separator' => ', ',
      'merge_end_separator' => ' and ',
      'roles' => 
      array (
        0 => '0',
        1 => '0',
        2 => '0',
        3 => '0',
        4 => '0',
      ),
    ),
    'description' => 'Become a coadministrator of a group',
    'perms' => '1',
    'custom' => 1,
    'variables' => 
    array (
    ),
  );


  return $messages;
}
