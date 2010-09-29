<?php

/**
 * Implementation of hook_strongarm().
 */
function os_slideshow_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_slide';
  $strongarm->value = '0';

  $export['comment_slide'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_slide';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-3',
    'revision_information' => '0',
    'author' => '1',
    'options' => '2',
    'comment_settings' => '5',
    'menu' => '-1',
    'path' => '4',
    'attachments' => '3',
  );

  $export['content_extra_weights_slide'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_slide';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_slide'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodequeue_view_per_queue';
  $strongarm->value = '0';

  $export['nodequeue_view_per_queue'] = $strongarm;
  return $export;
}
