<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _os_slideshow_node_info() {
  $items = array(
    'slide' => array(
      'name' => t('Slide'),
      'module' => 'features',
      'description' => t('An image to be used in the homepage slideshow.'),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
