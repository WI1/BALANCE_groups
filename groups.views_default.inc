<?php

/**
 * Implementation of hook_views_default_views().
 */
function groups_views_default_views() {
  $views = array();

  // Exported view: ProjekteSchlagworte
  $view = new view;
  $view->name = 'ProjekteSchlagworte';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Standards */
  $handler = $view->new_display('default', 'Standards', 'default');
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Projektkürzel (field_projectident) */
  $handler->display->display_options['fields']['field_projectident_value']['id'] = 'field_projectident_value';
  $handler->display->display_options['fields']['field_projectident_value']['table'] = 'node_data_field_projectident';
  $handler->display->display_options['fields']['field_projectident_value']['field'] = 'field_projectident_value';
  /* Field: Content: Projektlogo (field_projectlogo) */
  $handler->display->display_options['fields']['field_projectlogo_fid']['id'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['table'] = 'node_data_field_projectlogo';
  $handler->display->display_options['fields']['field_projectlogo_fid']['field'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['format'] = 'image_plain';
  /* Field: Taxonomy: All terms */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'term_node';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['tid']['limit'] = 1;
  $handler->display->display_options['fields']['tid']['vids'] = array(
    2 => 2,
    5 => 0,
    7 => 0,
    6 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Newsfeed */
  $handler = $view->new_display('feed', 'Newsfeed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['mission_description'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'projectsfeed1';

  $views[$view->name] = $view;

  // Exported view: bo_admin_organisation_projects
  $view = new view;
  $view->name = 'bo_admin_organisation_projects';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Standards */
  $handler = $view->new_display('default', 'Standards', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
    'nid_2' => 'nid_2',
  );
  $handler->display->display_options['style_options']['default'] = 'nid_1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'nid' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'nid_1' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'nid_2' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_org_project_vp_nid']['id'] = 'field_org_project_vp_nid';
  $handler->display->display_options['relationships']['field_org_project_vp_nid']['table'] = 'node_data_field_org_project_vp';
  $handler->display->display_options['relationships']['field_org_project_vp_nid']['field'] = 'field_org_project_vp_nid';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_org_project_nid']['id'] = 'field_org_project_nid';
  $handler->display->display_options['relationships']['field_org_project_nid']['table'] = 'node_data_field_org_project';
  $handler->display->display_options['relationships']['field_org_project_nid']['field'] = 'field_org_project_nid';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_org_project_vp_nid';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid_1']['link_to_node'] = 0;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['relationship'] = 'field_org_project_nid';
  $handler->display->display_options['fields']['nid_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid_2']['link_to_node'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organisation' => 'organisation',
  );

  /* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['path'] = 'admin/revorgaproj';

  $views[$view->name] = $view;

  // Exported view: bo_admin_projects_fg
  $view = new view;
  $view->name = 'bo_admin_projects_fg';
  $view->description = 'Lists all Projects and their node relationships to Focusgroups';
  $view->tag = 'bo';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Standards */
  $handler = $view->new_display('default', 'Standards', 'default');
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    10 => 10,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_project_fg_membership_nid' => 'field_project_fg_membership_nid',
    'tid' => 'tid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'field_project_fg_membership_nid' => array(
      'align' => '',
      'separator' => '',
    ),
    'tid' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Relationship: Content: Mitglied in Fokusgruppe (field_project_fg_membership) */
  $handler->display->display_options['relationships']['field_project_fg_membership_nid']['id'] = 'field_project_fg_membership_nid';
  $handler->display->display_options['relationships']['field_project_fg_membership_nid']['table'] = 'node_data_field_project_fg_membership';
  $handler->display->display_options['relationships']['field_project_fg_membership_nid']['field'] = 'field_project_fg_membership_nid';
  $handler->display->display_options['relationships']['field_project_fg_membership_nid']['required'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Mitglied in Fokusgruppe (field_project_fg_membership) */
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['id'] = 'field_project_fg_membership_nid';
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['table'] = 'node_data_field_project_fg_membership';
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['field'] = 'field_project_fg_membership_nid';
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['link_to_node'] = 0;
  /* Field: Taxonomy: All terms */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'term_node';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['tid']['limit'] = 1;
  $handler->display->display_options['fields']['tid']['vids'] = array(
    1 => 1,
    8 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    2 => 0,
    3 => 0,
    4 => 0,
  );
  /* Field: Content: Farbcode (field_color_hex) */
  $handler->display->display_options['fields']['field_color_hex_value']['id'] = 'field_color_hex_value';
  $handler->display->display_options['fields']['field_color_hex_value']['table'] = 'node_data_field_color_hex';
  $handler->display->display_options['fields']['field_color_hex_value']['field'] = 'field_color_hex_value';
  $handler->display->display_options['fields']['field_color_hex_value']['relationship'] = 'field_project_fg_membership_nid';
  $handler->display->display_options['fields']['field_color_hex_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_color_hex_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_color_hex_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_color_hex_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_color_hex_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_color_hex_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_color_hex_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_color_hex_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_color_hex_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_color_hex_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_color_hex_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_color_hex_value']['format'] = 'editable_html';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['path'] = 'admin/projects_fg';

  $views[$view->name] = $view;

  // Exported view: bo_admin_publications_projects
  $view = new view;
  $view->name = 'bo_admin_publications_projects';
  $view->description = 'Batch view für die Zuweisung einer Publikation zu einem Projekt';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Publikationen Projekt zuweisen';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Standards */
  $handler = $view->new_display('default', 'Standards', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'bulk';
  $handler->display->display_options['style_options']['operations'] = array(
    'og_add_group_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'label' => '',
    ),
    'nodequeue_add_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-c4d3b28efb86fd703619a50b74d43794' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-14de7d028b4bffdf2b4a266562ca18ac' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_make_sticky_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_promote_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'og_remove_groups_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_make_unsticky_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_save_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_publish_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_unpromote_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_unpublish_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_delete_node_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'system_message_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'og_make_private_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'og_make_public_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'system_send_email_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_ruleset_action_rules_set_1' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_script_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_export_node_bulk-a8cf63fecab3eb3edf6760bc02f258a6' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'flag_nodes-25a5b3a7cad27429d07584047716d910' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'flag_nodes-8008039c24f81b51fcebfa627066391b' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_fields_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
      'settings' => array(
        'php_code' => 0,
        'show_tokens' => 0,
        'display_fields' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'views_bulk_operations_taxonomy_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-8ce21b08bb8e773d10018b484fe4815e' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-a27b9efabcd054685a549378b174ad11' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'image_operations_rebuild' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'emfield_operations_reload' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'nodequeue_remove_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'og_remove_group_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'auto_nodetitle_operations_update' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'pathauto_node_update_alias_multiple-0d56f9c10fbb36ec3264abea71b6f416' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-9c585624b9b3af0b4687d5f97f35e047' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-0ccad85c1ebe4c9ceada1aa64293b080' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'system_goto_action-f71b1b9b8c8769ea12735419cc8919e2' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'system_goto_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_assign_owner_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['style_options']['execution_type'] = '2';
  $handler->display->display_options['style_options']['display_type'] = '0';
  $handler->display->display_options['style_options']['display_result'] = 1;
  $handler->display->display_options['style_options']['merge_single_action'] = 1;
  /* Relationship: Gruppe */
  $handler->display->display_options['relationships']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['relationships']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['relationships']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['relationships']['group_nid']['ui_name'] = 'Gruppe';
  $handler->display->display_options['relationships']['group_nid']['required'] = 0;
  /* Field: Biblio: Biblio Citation */
  $handler->display->display_options['fields']['citation']['id'] = 'citation';
  $handler->display->display_options['fields']['citation']['table'] = 'biblio';
  $handler->display->display_options['fields']['citation']['field'] = 'citation';
  $handler->display->display_options['fields']['citation']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['external'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['citation']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['citation']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['html'] = 0;
  $handler->display->display_options['fields']['citation']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['citation']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['citation']['hide_empty'] = 0;
  $handler->display->display_options['fields']['citation']['empty_zero'] = 0;
  $handler->display->display_options['fields']['citation']['style_name'] = 'wi1';
  /* Field: Content: Projektlogo (field_projectlogo) */
  $handler->display->display_options['fields']['field_projectlogo_fid']['id'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['table'] = 'node_data_field_projectlogo';
  $handler->display->display_options['fields']['field_projectlogo_fid']['field'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['relationship'] = 'group_nid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['label_type'] = 'custom';
  $handler->display->display_options['fields']['field_projectlogo_fid']['format'] = 'pic-1c-square_default';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'biblio' => 'biblio',
  );
  /* Filter: Taxonomy: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'term_node';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = '';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['vid'] = '2';
  $handler->display->display_options['filters']['tid']['error_message'] = 0;

  /* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'bulk';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_projectlogo_fid' => 'field_projectlogo_fid',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_projectlogo_fid' => array(
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['style_options']['operations'] = array(
    'og_add_group_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'label' => '',
    ),
    'nodequeue_add_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-c4d3b28efb86fd703619a50b74d43794' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-14de7d028b4bffdf2b4a266562ca18ac' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_make_sticky_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_promote_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'og_remove_groups_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_make_unsticky_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_save_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_publish_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_unpromote_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_unpublish_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_delete_node_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'system_message_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'og_make_private_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'og_make_public_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'system_send_email_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_ruleset_action_rules_set_1' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_script_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_export_node_bulk-a8cf63fecab3eb3edf6760bc02f258a6' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'flag_nodes-25a5b3a7cad27429d07584047716d910' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'flag_nodes-8008039c24f81b51fcebfa627066391b' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_fields_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
      'settings' => array(
        'php_code' => 0,
        'show_tokens' => 0,
        'display_fields' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'views_bulk_operations_taxonomy_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-8ce21b08bb8e773d10018b484fe4815e' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-a27b9efabcd054685a549378b174ad11' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'image_operations_rebuild' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'emfield_operations_reload' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'nodequeue_remove_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'og_remove_group_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'auto_nodetitle_operations_update' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'pathauto_node_update_alias_multiple-0d56f9c10fbb36ec3264abea71b6f416' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-9c585624b9b3af0b4687d5f97f35e047' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_mass_update-0ccad85c1ebe4c9ceada1aa64293b080' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'system_goto_action-f71b1b9b8c8769ea12735419cc8919e2' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'system_goto_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
    'node_assign_owner_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['style_options']['execution_type'] = '2';
  $handler->display->display_options['style_options']['display_type'] = '0';
  $handler->display->display_options['style_options']['display_result'] = 1;
  $handler->display->display_options['style_options']['merge_single_action'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy: All terms */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'term_node';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['tid']['limit'] = 1;
  $handler->display->display_options['fields']['tid']['vids'] = array(
    2 => 2,
    8 => 0,
    1 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    3 => 0,
    4 => 0,
  );
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Projektlogo (field_projectlogo) */
  $handler->display->display_options['fields']['field_projectlogo_fid']['id'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['table'] = 'node_data_field_projectlogo';
  $handler->display->display_options['fields']['field_projectlogo_fid']['field'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['relationship'] = 'group_nid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['format'] = 'pic-1c-square_default';
  $handler->display->display_options['path'] = 'admin/publikationen/ogzuweisen';

  $views[$view->name] = $view;

  // Exported view: bo_all_project_documentlisting
  $view = new view;
  $view->name = 'bo_all_project_documentlisting';
  $view->description = 'All documents from all projects';
  $view->tag = 'bo_all_project_documentlisting';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Standards */
  $handler = $view->new_display('default', 'Standards', 'default');
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Projektexposé (field_synopsis) */
  $handler->display->display_options['fields']['field_synopsis_fid']['id'] = 'field_synopsis_fid';
  $handler->display->display_options['fields']['field_synopsis_fid']['table'] = 'node_data_field_synopsis';
  $handler->display->display_options['fields']['field_synopsis_fid']['field'] = 'field_synopsis_fid';
  $handler->display->display_options['fields']['field_synopsis_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_synopsis_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_synopsis_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_synopsis_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_synopsis_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_synopsis_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_synopsis_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_synopsis_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_synopsis_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_synopsis_fid']['link_to_node'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Node Hierarchy: Parent Node */
  $handler->display->display_options['fields']['parent']['id'] = 'parent';
  $handler->display->display_options['fields']['parent']['table'] = 'nodehierarchy';
  $handler->display->display_options['fields']['parent']['field'] = 'parent';
  /* Sort criterion: Node Hierarchy: Child Sort Order */
  $handler->display->display_options['sorts']['order_by']['id'] = 'order_by';
  $handler->display->display_options['sorts']['order_by']['table'] = 'nodehierarchy';
  $handler->display->display_options['sorts']['order_by']['field'] = 'order_by';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['path'] = 'all_docs_test';

  $views[$view->name] = $view;

  // Exported view: bo_organisation_select
  $view = new view;
  $view->name = 'bo_organisation_select';
  $view->description = 'View for the selection of organisations on project edit';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Standards */
  $handler = $view->new_display('default', 'Standards', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_companylogo_fid' => 'field_companylogo_fid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'field_companylogo_fid' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_companylogo_fid']['id'] = 'field_companylogo_fid';
  $handler->display->display_options['fields']['field_companylogo_fid']['table'] = 'node_data_field_companylogo';
  $handler->display->display_options['fields']['field_companylogo_fid']['field'] = 'field_companylogo_fid';
  $handler->display->display_options['fields']['field_companylogo_fid']['label'] = '';
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['empty_zero'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organisation' => 'organisation',
  );

  $views[$view->name] = $view;

  // Exported view: bo_project_memberorgs
  $view = new view;
  $view->name = 'bo_project_memberorgs';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Standards */
  $handler = $view->new_display('default', 'Standards', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Beteiligte Institutionen (field_ref_projectinstitutions) */
  $handler->display->display_options['relationships']['field_ref_projectinstitutions_nid']['id'] = 'field_ref_projectinstitutions_nid';
  $handler->display->display_options['relationships']['field_ref_projectinstitutions_nid']['table'] = 'node_data_field_ref_projectinstitutions';
  $handler->display->display_options['relationships']['field_ref_projectinstitutions_nid']['field'] = 'field_ref_projectinstitutions_nid';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_companylogo_fid']['id'] = 'field_companylogo_fid';
  $handler->display->display_options['fields']['field_companylogo_fid']['table'] = 'node_data_field_companylogo';
  $handler->display->display_options['fields']['field_companylogo_fid']['field'] = 'field_companylogo_fid';
  $handler->display->display_options['fields']['field_companylogo_fid']['relationship'] = 'field_ref_projectinstitutions_nid';
  $handler->display->display_options['fields']['field_companylogo_fid']['label'] = '';
  $handler->display->display_options['fields']['field_companylogo_fid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['empty_zero'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_ref_projectinstitutions_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Argument: Node: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;

  $views[$view->name] = $view;

  // Exported view: bo_projectmembersbox
  $view = new view;
  $view->name = 'bo_projectmembersbox';
  $view->description = 'Shows the profile pictures of the members of a certain node';
  $view->tag = 'users, projects, avatar, list';
  $view->base_table = 'users';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['output_lifespan'] = '60';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = 6;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['label'] = '';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = '1';
  /* Field: Profile: Benutzerinformation: Vorname */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_values_profile_firstname';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value']['link_to_user'] = 1;
  /* Field: Profile: Benutzerinformation: Nachname */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_values_profile_lastname';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = '';
  $handler->display->display_options['fields']['value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value_1']['link_to_user'] = 1;
  /* Sort criterion: Profile: Benutzerinformation: Nachname */
  $handler->display->display_options['sorts']['value']['id'] = 'value';
  $handler->display->display_options['sorts']['value']['table'] = 'profile_values_profile_lastname';
  $handler->display->display_options['sorts']['value']['field'] = 'value';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Argument: Organic groups: Group node */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'og_uid';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'focusgroup' => 'focusgroup',
    'project' => 'project',
    'blog' => 0,
    'faq' => 0,
    'image' => 0,
    'download' => 0,
    'headerimage' => 0,
    'page' => 0,
    'story' => 0,
    'teststefan' => 0,
  );
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter: Organic groups: OG: Is membership approved */
  $handler->display->display_options['filters']['is_active']['id'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['table'] = 'og_uid';
  $handler->display->display_options['filters']['is_active']['field'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['value'] = '1';
  $handler->display->display_options['filters']['is_active']['expose']['operator'] = FALSE;
  /* Filter: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    10 => '10',
  );

  /* Display: All */
  $handler = $view->new_display('block', 'All', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Benutzerinformation: Vorname */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_values_profile_firstname';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value']['alter']['html'] = 0;
  /* Field: Profile: Benutzerinformation: Nachname */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_values_profile_lastname';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['html'] = 0;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = '1';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Recent */
  $handler = $view->new_display('block', 'Recent', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['path'] = 'node/%/team';
  $handler->display->display_options['menu']['title'] = 'Mitglieder';
  $handler->display->display_options['menu']['weight'] = '0';

  $views[$view->name] = $view;

  // Exported view: bo_ur_contacts_pictures
  $view = new view;
  $view->name = 'bo_ur_contacts_pictures';
  $view->description = 'Shows someone\'s related users';
  $view->tag = '';
  $view->base_table = 'user_relationships';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['output_lifespan'] = '300';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = 30;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name_1' => 'name_1',
  );
  $handler->display->display_options['row_options']['separator'] = ', ';
  /* Relationship: User relationships: Requestee user */
  $handler->display->display_options['relationships']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['relationships']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['relationships']['requestee_id']['required'] = 0;
  /* Relationship: User relationships: Requester user */
  $handler->display->display_options['relationships']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['relationships']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['relationships']['requester_id']['required'] = 0;
  /* Relationship: User relationships: RTID */
  $handler->display->display_options['relationships']['rtid']['id'] = 'rtid';
  $handler->display->display_options['relationships']['rtid']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['rtid']['field'] = 'rtid';
  $handler->display->display_options['relationships']['rtid']['required'] = 0;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  /* Field: User relationships: Status link */
  $handler->display->display_options['fields']['status_link']['id'] = 'status_link';
  $handler->display->display_options['fields']['status_link']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['status_link']['field'] = 'status_link';
  /* Sort criterion: User: Last access */
  $handler->display->display_options['sorts']['access']['id'] = 'access';
  $handler->display->display_options['sorts']['access']['table'] = 'users';
  $handler->display->display_options['sorts']['access']['field'] = 'access';
  $handler->display->display_options['sorts']['access']['relationship'] = 'requestee_id';
  $handler->display->display_options['sorts']['access']['order'] = 'DESC';
  /* Argument: User relationships: Requester user */
  $handler->display->display_options['arguments']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['arguments']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['arguments']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['arguments']['requester_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['requester_id']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['requester_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['requester_id']['default_argument_options']['user'] = TRUE;
  $handler->display->display_options['arguments']['requester_id']['validate_type'] = 'numeric';
  $handler->display->display_options['arguments']['requester_id']['validate_fail'] = 'ignore';
  $handler->display->display_options['arguments']['requester_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['requester_id']['not'] = 0;
  /* Filter: User relationships: Relationship status */
  $handler->display->display_options['filters']['approved']['id'] = 'approved';
  $handler->display->display_options['filters']['approved']['table'] = 'user_relationships';
  $handler->display->display_options['filters']['approved']['field'] = 'approved';
  $handler->display->display_options['filters']['approved']['value'] = '1';
  $handler->display->display_options['filters']['approved']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  /* Field: User relationships: Status link */
  $handler->display->display_options['fields']['status_link']['id'] = 'status_link';
  $handler->display->display_options['fields']['status_link']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['status_link']['field'] = 'status_link';
  $handler->display->display_options['fields']['status_link']['label'] = '';
  $handler->display->display_options['fields']['status_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status_link']['hide_empty'] = 1;
  $handler->display->display_options['fields']['status_link']['empty_zero'] = 0;
  $handler->display->display_options['path'] = 'users/%/kontakte';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'All Relationships';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Kontakte';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Block by type */
  $handler = $view->new_display('block', 'Block by type', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;

  /* Display: Block by user */
  $handler = $view->new_display('block', 'Block by user', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'picture' => 'picture',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;

  $views[$view->name] = $view;

  // Exported view: fg_projects
  $view = new view;
  $view->name = 'fg_projects';
  $view->description = 'Attribuierter View über alle Projekte zur anzeige auf der jeweiligen Fokusgruppenseite';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy: Term */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  /* Field: Content: Projektlogo (field_projectlogo) */
  $handler->display->display_options['fields']['field_projectlogo_fid']['id'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['table'] = 'node_data_field_projectlogo';
  $handler->display->display_options['fields']['field_projectlogo_fid']['field'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_projectlogo_fid']['format'] = 'pic-1c-square_linked';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Node: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  /* Field: Taxonomy: Term */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = 0;
  /* Sort criterion: Taxonomy: Term */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Sort criterion: Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Argument: Taxonomy: Term */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['name']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['glossary'] = 0;
  $handler->display->display_options['arguments']['name']['ignorecase'] = 0;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['name']['add_table'] = 0;
  $handler->display->display_options['arguments']['name']['require_value'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Taxonomy: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['vid']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_caching'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'projekte';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Projects';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'primary-links';

  $views[$view->name] = $view;

  // Exported view: og_open_member_requests
  $view = new view;
  $view->name = 'og_open_member_requests';
  $view->description = 'Listet alle offenen Gruppenanfragen auf';
  $view->tag = 'og';
  $view->base_table = 'users';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 90;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'managelink' => 'managelink',
    'managelinkadmin' => 'managelinkadmin',
    'is_manager' => 'name',
    'is_admin' => 'name',
    'is_active' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'separator' => '&nbsp;',
    ),
    'managelink' => array(
      'separator' => '',
    ),
    'managelinkadmin' => array(
      'separator' => '',
    ),
    'is_manager' => array(
      'separator' => '',
    ),
    'is_admin' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'is_active' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  /* Field: Organic groups: OG: Approve/Deny/Remove membership link */
  $handler->display->display_options['fields']['managelink']['id'] = 'managelink';
  $handler->display->display_options['fields']['managelink']['table'] = 'og_uid';
  $handler->display->display_options['fields']['managelink']['field'] = 'managelink';
  /* Field: Organic groups: OG: Admin manage link */
  $handler->display->display_options['fields']['managelinkadmin']['id'] = 'managelinkadmin';
  $handler->display->display_options['fields']['managelinkadmin']['table'] = 'og_uid';
  $handler->display->display_options['fields']['managelinkadmin']['field'] = 'managelinkadmin';
  /* Field: Organic groups: OG: Is the group manager */
  $handler->display->display_options['fields']['is_manager']['id'] = 'is_manager';
  $handler->display->display_options['fields']['is_manager']['table'] = 'og_uid';
  $handler->display->display_options['fields']['is_manager']['field'] = 'is_manager';
  $handler->display->display_options['fields']['is_manager']['label'] = '';
  $handler->display->display_options['fields']['is_manager']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['is_manager']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['is_manager']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['is_manager']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['is_manager']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['is_manager']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['is_manager']['alter']['html'] = 0;
  /* Field: Organic groups: OG: Is member an admin in a group */
  $handler->display->display_options['fields']['is_admin']['id'] = 'is_admin';
  $handler->display->display_options['fields']['is_admin']['table'] = 'og_uid';
  $handler->display->display_options['fields']['is_admin']['field'] = 'is_admin';
  $handler->display->display_options['fields']['is_admin']['label'] = '';
  /* Field: Organic groups: OG: Is membership approved */
  $handler->display->display_options['fields']['is_active']['id'] = 'is_active';
  $handler->display->display_options['fields']['is_active']['table'] = 'og_uid';
  $handler->display->display_options['fields']['is_active']['field'] = 'is_active';
  $handler->display->display_options['fields']['is_active']['label'] = '';
  /* Sort criterion: Organic groups: OG: Is member an admin in a group */
  $handler->display->display_options['sorts']['is_admin']['id'] = 'is_admin';
  $handler->display->display_options['sorts']['is_admin']['table'] = 'og_uid';
  $handler->display->display_options['sorts']['is_admin']['field'] = 'is_admin';
  $handler->display->display_options['sorts']['is_admin']['order'] = 'DESC';
  /* Sort criterion: Organic groups: OG: Is membership approved */
  $handler->display->display_options['sorts']['is_active']['id'] = 'is_active';
  $handler->display->display_options['sorts']['is_active']['table'] = 'og_uid';
  $handler->display->display_options['sorts']['is_active']['field'] = 'is_active';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Argument: Organic groups: Group node */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'og_uid';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['validate_type'] = 'og_group_types';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Organic groups: OG: Is membership approved */
  $handler->display->display_options['filters']['is_active']['id'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['table'] = 'og_uid';
  $handler->display->display_options['filters']['is_active']['field'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['value'] = '0';
  $handler->display->display_options['filters']['is_active']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'og/users/%/list';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'List';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'List';
  $handler->display->display_options['tab_options']['weight'] = '0';

  $views[$view->name] = $view;

  // Exported view: og_open_requests
  $view = new view;
  $view->name = 'og_open_requests';
  $view->description = 'SH: Listet seitenweit alle offenen Anfragen für Gruppen auf';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Standards */
  $handler = $view->new_display('default', 'Standards', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'managelink' => 'managelink',
    'is_active' => 'is_active',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'managelink' => array(
      'separator' => '',
    ),
    'is_active' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: Organic groups: OG: Approve/Deny/Remove membership link */
  $handler->display->display_options['fields']['managelink']['id'] = 'managelink';
  $handler->display->display_options['fields']['managelink']['table'] = 'og_uid';
  $handler->display->display_options['fields']['managelink']['field'] = 'managelink';
  $handler->display->display_options['fields']['managelink']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['managelink']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['managelink']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['managelink']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['managelink']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['managelink']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['managelink']['alter']['html'] = 0;
  $handler->display->display_options['fields']['managelink']['hide_empty'] = 0;
  $handler->display->display_options['fields']['managelink']['empty_zero'] = 0;
  /* Field: Organic groups: OG: Admin manage link */
  $handler->display->display_options['fields']['managelinkadmin']['id'] = 'managelinkadmin';
  $handler->display->display_options['fields']['managelinkadmin']['table'] = 'og_uid';
  $handler->display->display_options['fields']['managelinkadmin']['field'] = 'managelinkadmin';
  $handler->display->display_options['fields']['managelinkadmin']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['managelinkadmin']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['managelinkadmin']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['managelinkadmin']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['managelinkadmin']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['managelinkadmin']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['managelinkadmin']['alter']['html'] = 0;
  $handler->display->display_options['fields']['managelinkadmin']['hide_empty'] = 0;
  $handler->display->display_options['fields']['managelinkadmin']['empty_zero'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Organic groups: OG: Is membership approved */
  $handler->display->display_options['filters']['is_active']['id'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['table'] = 'og_uid';
  $handler->display->display_options['filters']['is_active']['field'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['value'] = '0';
  $handler->display->display_options['filters']['is_active']['expose']['operator'] = FALSE;

  /* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['path'] = 'og/open_requests';

  $views[$view->name] = $view;

  // Exported view: projects
  $view = new view;
  $view->name = 'projects';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = 'name_1';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Verweis Forschungslandkarte */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['ui_name'] = 'Verweis Forschungslandkarte';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['format'] = '1';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* Field: Taxonomy: Term */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  /* Field: Content: Projektlogo (field_projectlogo) */
  $handler->display->display_options['fields']['field_projectlogo_fid']['id'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['table'] = 'node_data_field_projectlogo';
  $handler->display->display_options['fields']['field_projectlogo_fid']['field'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_projectlogo_fid']['format'] = 'pic-1c-square_linked';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Node: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  /* Field: Taxonomy: Term */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = 0;
  /* Sort criterion: Taxonomy: Term */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Sort criterion: Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Taxonomy: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['vid']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_caching'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'projekte';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Projects';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'primary-links';

  $views[$view->name] = $view;

  // Exported view: recent_posts_in_active_group
  $view = new view;
  $view->name = 'recent_posts_in_active_group';
  $view->description = 'Recent Posts In Active Group';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['output_lifespan'] = '300';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'title' => 'title',
    'teaser' => 'teaser',
  );
  $handler->display->display_options['row_options']['separator'] = '&nbsp;';
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['label'] = '';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Relationship: Organic groups: Group node (post) */
  $handler->display->display_options['relationships']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['relationships']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['relationships']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['relationships']['group_nid']['required'] = 1;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = '1';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Node: Teaser */
  $handler->display->display_options['fields']['teaser']['id'] = 'teaser';
  $handler->display->display_options['fields']['teaser']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['teaser']['field'] = 'teaser';
  $handler->display->display_options['fields']['teaser']['label'] = '';
  $handler->display->display_options['fields']['teaser']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['teaser']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['teaser']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['teaser']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['teaser']['alter']['html'] = 0;
  /* Field: Node: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  /* Sort criterion: Node: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter: Organic groups: OG: Posts in current group */
  $handler->display->display_options['filters']['picg']['id'] = 'picg';
  $handler->display->display_options['filters']['picg']['table'] = 'og_ancestry';
  $handler->display->display_options['filters']['picg']['field'] = 'picg';
  $handler->display->display_options['filters']['picg']['expose']['operator'] = FALSE;

  /* Display: Recent Posts in Active Group Sidebar */
  $handler = $view->new_display('block', 'Recent Posts in Active Group Sidebar', 'block_1');

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Organic groups: Group node (post) */
  $handler->display->display_options['relationships']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['relationships']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['relationships']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['relationships']['group_nid']['required'] = 0;

  $views[$view->name] = $view;

  return $views;
}
