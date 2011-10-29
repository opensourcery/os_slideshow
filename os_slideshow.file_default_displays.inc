<?php
/**
 * @file
 * os_slideshow.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function os_slideshow_file_default_displays() {
  $export = array();

  $file_display = new stdClass;
  $file_display->api_version = 1;
  $file_display->name = 'default__file_styles_slideshow_default__file_field_styles_file_slideshow_default';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['default__file_styles_slideshow_default__file_field_styles_file_slideshow_default'] = $file_display;

  $file_display = new stdClass;
  $file_display->api_version = 1;
  $file_display->name = 'image__file_styles_slideshow_default__file_field_styles_file_slideshow_default';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['image__file_styles_slideshow_default__file_field_styles_file_slideshow_default'] = $file_display;

  return $export;
}
