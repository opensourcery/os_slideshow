<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function os_slideshow_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'slideshow';
  $context->description = 'Context for setting the slideshow';
  $context->tag = 'Slideshow';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-homepage_slideshow-block_1' => array(
          'module' => 'views',
          'delta' => 'homepage_slideshow-block_1',
          'region' => 'navigation',
          'weight' => 0,
        ),
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'os-slideshow',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for setting the slideshow');
  t('Slideshow');

  $export['slideshow'] = $context;
  return $export;
}
