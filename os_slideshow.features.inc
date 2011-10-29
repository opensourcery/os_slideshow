<?php
/**
 * @file
 * os_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os_slideshow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os_slideshow_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function os_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: slideshow-default
  $styles['slideshow-default'] = array(
    'name' => 'slideshow-default',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '960',
          'height' => '400',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_styles_default_styles().
 */
function os_slideshow_styles_default_styles() {
  $styles = array();

  // Exported style: slideshow_default

  $styles['file']['styles']['slideshow_default'] = array(
    'label' => 'slideshow_default',
    'description' => '',
    'preset_info' => array(
      'image' => array(
        'slideshow_default' => array(
          'default preset' => 'original',
          'preset' => 'slideshow-default',
        ),
      ),
      'audio' => array(
        'slideshow_default' => array(
          'default preset' => 'original',
        ),
      ),
      'video' => array(
        'slideshow_default' => array(
          'default preset' => 'original',
        ),
      ),
      'default' => array(
        'slideshow_default' => array(
          'default preset' => 'original',
        ),
      ),
      'media_vimeo' => array(
        'slideshow_default' => array(
          'default preset' => 'unlinked_thumbnail',
        ),
      ),
      'media_youtube' => array(
        'slideshow_default' => array(
          'default preset' => 'unlinked_thumbnail',
        ),
      ),
    ),
  );
  return $styles;
}

/**
 * Implements hook_styles_default_presets_alter().
 */
function os_slideshow_styles_default_presets_alter(&$presets) {
  $styles = styles_default_styles();
  if ($styles['file']['styles']['slideshow_default']['storage'] == STYLES_STORAGE_DEFAULT) {
    $presets['file']['containers']['image']['styles']['slideshow_default'] = array(
      'default preset' => 'original',
      'preset' => 'slideshow-default',
    );

    $presets['file']['containers']['audio']['styles']['slideshow_default'] = array(
      'default preset' => 'original',
    );

    $presets['file']['containers']['video']['styles']['slideshow_default'] = array(
      'default preset' => 'original',
    );

    $presets['file']['containers']['default']['styles']['slideshow_default'] = array(
      'default preset' => 'original',
    );

    $presets['file']['containers']['media_vimeo']['styles']['slideshow_default'] = array(
      'default preset' => 'unlinked_thumbnail',
    );

    $presets['file']['containers']['media_youtube']['styles']['slideshow_default'] = array(
      'default preset' => 'unlinked_thumbnail',
    );

  }
}
