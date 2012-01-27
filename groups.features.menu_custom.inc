<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function groups_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-fgtop
  $menus['menu-fgtop'] = array(
    'menu_name' => 'menu-fgtop',
    'title' => 'Fokusgruppen',
    'description' => '',
  );
  // Exported menu: menu-group-menu
  $menus['menu-group-menu'] = array(
    'menu_name' => 'menu-group-menu',
    'title' => 'Group Menu',
    'description' => 'Menu for the tabs on organic group homepages. To navigate in the organic groups content',
  );
  // Exported menu: menu-projekte
  $menus['menu-projekte'] = array(
    'menu_name' => 'menu-projekte',
    'title' => 'Projekte',
    'description' => 'Alle Projekte gruppiert nach Fokusgruppen. Für die Balance Bar.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Alle Projekte gruppiert nach Fokusgruppen. Für die Balance Bar.');
  t('Fokusgruppen');
  t('Group Menu');
  t('Menu for the tabs on organic group homepages. To navigate in the organic groups content');
  t('Projekte');


  return $menus;
}
