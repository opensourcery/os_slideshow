<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function os_slideshow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function os_slideshow_imagecache_default_presets() {
  $items = array(
    'slideshow-front' => array(
      'presetname' => 'slideshow-front',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '670',
            'height' => '265',
          ),
        ),
      ),
    ),
    'slideshow-front-thumbnail' => array(
      'presetname' => 'slideshow-front-thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '100',
            'height' => '80',
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
function os_slideshow_node_info() {
  $items = array(
    'slide' => array(
      'name' => t('Slide'),
      'module' => 'features',
      'description' => t('Image (and other data) to be used as one slide in a <em>Slideshow</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'slideshow' => array(
      'name' => t('Slideshow'),
      'module' => 'features',
      'description' => t('Container for a set of slideshow slides.'),
      'has_title' => '1',
      'title_label' => t('Administrative Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function os_slideshow_views_api() {
  return array(
    'api' => '2',
  );
}
