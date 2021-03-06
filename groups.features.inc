<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function groups_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function groups_imagecache_default_presets() {
  $items = array(
    'projectlogo_9c' => array(
      'presetname' => 'projectlogo_9c',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '',
            'height' => '135',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '790',
            'height' => '0',
            'upscale' => 0,
          ),
        ),
        '2' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_definecanvas',
          'data' => array(
            'RGB' => array(
              'HEX' => 'ffffff',
            ),
            'under' => 1,
            'exact' => array(
              'width' => '790',
              'height' => '135',
              'xpos' => 'center',
              'ypos' => 'center',
            ),
            'relative' => array(
              'leftdiff' => '',
              'rightdiff' => '',
              'topdiff' => '',
              'bottomdiff' => '',
            ),
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function groups_node_info() {
  $items = array(
    'download' => array(
      'name' => t('Download'),
      'module' => 'features',
      'description' => t('Dateien für das Download Center'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'focusgroup' => array(
      'name' => t('Fokusgruppe'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Kurzbeschreibung'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'project' => array(
      'name' => t('Projekt'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Projektname'),
      'has_body' => '1',
      'body_label' => t('Kurzbeschreibung'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function groups_views_api() {
  return array(
    'api' => '3.0',
  );
}
