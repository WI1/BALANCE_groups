<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function groups_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-projekte:node/76
  $menu_links['menu-projekte:node/76'] = array(
    'menu_name' => 'menu-projekte',
    'link_path' => 'node/76',
    'router_path' => 'node/%',
    'link_title' => 'Interne und externe Vertrauensbeziehungen',
    'options' => array(
      'attributes' => array(
        'title' => 'Interne und externe Vertrauensbeziehungen',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'projects_fg',
  );
  // Exported menu link: navigation:node/add/blog
  $menu_links['navigation:node/add/blog'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/blog',
    'router_path' => 'node/add',
    'link_title' => 'Blog entry',
    'options' => array(
      'attributes' => array(
        'title' => 'A <em>blog entry</em> is a single post to an online journal, or <em>blog</em>.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:og/my
  $menu_links['navigation:og/my'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'og/my',
    'router_path' => 'og/my',
    'link_title' => 'Gruppen',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: primary-links:projekte
  $menu_links['primary-links:projekte'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'projekte',
    'router_path' => 'projekte',
    'link_title' => 'Projekte',
    'options' => array(
      'attributes' => array(
        'id' => 'menu-projekte',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blog entry');
  t('Gruppen');
  t('Interne und externe Vertrauensbeziehungen');
  t('Projekte');


  return $menu_links;
}
