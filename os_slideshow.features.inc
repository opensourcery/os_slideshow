<?php

/**
 * Implementation of hook_content_default_fields().
 */
function os_slideshow_content_default_fields() {
  module_load_include('inc', 'os_slideshow', 'os_slideshow.defaults');
  $args = func_get_args();
  return call_user_func_array('_os_slideshow_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function os_slideshow_context_default_contexts() {
  module_load_include('inc', 'os_slideshow', 'os_slideshow.defaults');
  $args = func_get_args();
  return call_user_func_array('_os_slideshow_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function os_slideshow_ctools_plugin_api() {
  module_load_include('inc', 'os_slideshow', 'os_slideshow.defaults');
  $args = func_get_args();
  return call_user_func_array('_os_slideshow_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function os_slideshow_imagecache_default_presets() {
  module_load_include('inc', 'os_slideshow', 'os_slideshow.defaults');
  $args = func_get_args();
  return call_user_func_array('_os_slideshow_imagecache_default_presets', $args);
}

/**
 * Implementation of hook_node_info().
 */
function os_slideshow_node_info() {
  module_load_include('inc', 'os_slideshow', 'os_slideshow.features.node');
  $args = func_get_args();
  return call_user_func_array('_os_slideshow_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function os_slideshow_strongarm() {
  module_load_include('inc', 'os_slideshow', 'os_slideshow.defaults');
  $args = func_get_args();
  return call_user_func_array('_os_slideshow_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function os_slideshow_views_default_views() {
  module_load_include('inc', 'os_slideshow', 'os_slideshow.features.views');
  $args = func_get_args();
  return call_user_func_array('_os_slideshow_views_default_views', $args);
}
