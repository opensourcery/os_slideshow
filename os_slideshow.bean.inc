<?php
/**
 * @file
 * os_slideshow.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function os_slideshow_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass;
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 1;
  $bean_type->name = 'slideshow';
  $bean_type->label = 'Slideshow';
  $bean_type->options = '';
  $export['slideshow'] = $bean_type;

  return $export;
}
