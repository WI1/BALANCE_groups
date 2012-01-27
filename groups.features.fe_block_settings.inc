<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function groups_default_fe_block_settings() {
  $export = array();

  // balance
  $theme = array();

  $theme['balanceonline_og_like-0'] = array(
    'module' => 'balanceonline_og_like',
    'delta' => '0',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-88',
    'region' => 'project_sidebar',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['balanceonline_og_like-1'] = array(
    'module' => 'balanceonline_og_like',
    'delta' => '1',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-86',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['focus_groups-0'] = array(
    'module' => 'focus_groups',
    'delta' => '0',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-88',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => '1',
  );

  $theme['heartbeat-groupsactivity'] = array(
    'module' => 'heartbeat',
    'delta' => 'groupsactivity',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-33',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '6',
  );

  $theme['heartbeat-membersactivity'] = array(
    'module' => 'heartbeat',
    'delta' => 'membersactivity',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-2',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '6',
  );

  $theme['heartbeat-ogheartbeat'] = array(
    'module' => 'heartbeat',
    'delta' => 'ogheartbeat',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-34',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '6',
  );

  $theme['menu-menu-fgtop'] = array(
    'module' => 'menu',
    'delta' => 'menu-fgtop',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-88',
    'region' => 'balance_bar',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu-menu-group-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-group-menu',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-88',
    'region' => 'project_sidebar',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-menu-projekte'] = array(
    'module' => 'menu',
    'delta' => 'menu-projekte',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '46',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['og-0'] = array(
    'module' => 'og',
    'delta' => '0',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-88',
    'region' => 'project_sidebar',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
node/add/*',
    'title' => '',
    'cache' => '-1',
  );

  $theme['og-3'] = array(
    'module' => 'og',
    'delta' => '3',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '48',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '2',
  );

  $theme['og_user_roles-0'] = array(
    'module' => 'og_user_roles',
    'delta' => '0',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['og_user_roles-1'] = array(
    'module' => 'og_user_roles',
    'delta' => '1',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['og_views-0'] = array(
    'module' => 'og_views',
    'delta' => '0',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-66',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['og_views-1'] = array(
    'module' => 'og_views',
    'delta' => '1',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-67',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['projecttabs-0'] = array(
    'module' => 'projecttabs',
    'delta' => '0',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-88',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => '1',
  );

  $theme['projecttabs-1'] = array(
    'module' => 'projecttabs',
    'delta' => '1',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-88',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => '1',
  );

  $theme['projecttabs-2'] = array(
    'module' => 'projecttabs',
    'delta' => '2',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-87',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => '1',
  );

  $theme['user_relationship_blocks-actions'] = array(
    'module' => 'user_relationship_blocks',
    'delta' => 'actions',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-22',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user_relationship_blocks-my-1'] = array(
    'module' => 'user_relationship_blocks',
    'delta' => 'my-1',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-10',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user_relationship_blocks-my-all'] = array(
    'module' => 'user_relationship_blocks',
    'delta' => 'my-all',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-11',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user_relationship_blocks-pending'] = array(
    'module' => 'user_relationship_blocks',
    'delta' => 'pending',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-4',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user_relationship_blocks-user-1'] = array(
    'module' => 'user_relationship_blocks',
    'delta' => 'user-1',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-20',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user_relationship_blocks-user-all'] = array(
    'module' => 'user_relationship_blocks',
    'delta' => 'user-all',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-21',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-14309ac2cc3ce817f2f8d998c5855cbe'] = array(
    'module' => 'views',
    'delta' => '14309ac2cc3ce817f2f8d998c5855cbe',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '47',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-42e444a63ac6d5ea96dbe276a95f3e9a'] = array(
    'module' => 'views',
    'delta' => '42e444a63ac6d5ea96dbe276a95f3e9a',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-17',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-5ccbaaf5f955b62d9cae0308418e4047'] = array(
    'module' => 'views',
    'delta' => '5ccbaaf5f955b62d9cae0308418e4047',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-16',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-811dd875e0e1e44782d288ae407b4b1d'] = array(
    'module' => 'views',
    'delta' => '811dd875e0e1e44782d288ae407b4b1d',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-80',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => 'projekte/*
fokusgruppen/*',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-88475539e51c633c7f20b81dba75fd50'] = array(
    'module' => 'views',
    'delta' => '88475539e51c633c7f20b81dba75fd50',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '12',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-bo_projectmembersbox-block_1'] = array(
    'module' => 'views',
    'delta' => 'bo_projectmembersbox-block_1',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-87',
    'region' => 'project_sidebar',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*',
    'title' => '',
    'cache' => '8',
  );

  $theme['views-bo_projectmembersbox-block_2'] = array(
    'module' => 'views',
    'delta' => 'bo_projectmembersbox-block_2',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-74',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => 'node/*/info',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-bo_ur_contacts_pictures-block_1'] = array(
    'module' => 'views',
    'delta' => 'bo_ur_contacts_pictures-block_1',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '21',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-bo_ur_contacts_pictures-block_2'] = array(
    'module' => 'views',
    'delta' => 'bo_ur_contacts_pictures-block_2',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-85',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => 'users/*',
    'title' => 'Freunde',
    'cache' => '-1',
  );

  $theme['views-fg_projects-block_1'] = array(
    'module' => 'views',
    'delta' => 'fg_projects-block_1',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-25',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['views-nodehierarchy_downloads-block_1'] = array(
    'module' => 'views',
    'delta' => 'nodehierarchy_downloads-block_1',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '44',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-og_files-block_1'] = array(
    'module' => 'views',
    'delta' => 'og_files-block_1',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-58',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-og_members_block-block'] = array(
    'module' => 'views',
    'delta' => 'og_members_block-block',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-57',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-og_members_block-block_1'] = array(
    'module' => 'views',
    'delta' => 'og_members_block-block_1',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-56',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-og_members_block-block_2'] = array(
    'module' => 'views',
    'delta' => 'og_members_block-block_2',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-78',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => 'Mitglieder die Sie kennen könnten',
    'cache' => '-1',
  );

  $export['balance'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
