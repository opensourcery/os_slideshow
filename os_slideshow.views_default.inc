<?php
/**
 * @file
 * os_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os_slideshow_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'slideshow';
  $view->description = 'Powers Slideshow blocks.';
  $view->tag = 'OpenSourcery';
  $view->base_table = 'bean';
  $view->human_name = 'Slideshow';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['style_options']['class'] = 'slideshow-container';
  $handler->display->display_options['style_options']['wrapper_class'] = 'slideshow-wrapper';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'bid' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'bid' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '8000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Relationship: Block: Slides (field_slideshow_slides) */
  $handler->display->display_options['relationships']['field_slideshow_slides_value']['id'] = 'field_slideshow_slides_value';
  $handler->display->display_options['relationships']['field_slideshow_slides_value']['table'] = 'field_data_field_slideshow_slides';
  $handler->display->display_options['relationships']['field_slideshow_slides_value']['field'] = 'field_slideshow_slides_value';
  $handler->display->display_options['relationships']['field_slideshow_slides_value']['label'] = 'Slides';
  $handler->display->display_options['relationships']['field_slideshow_slides_value']['required'] = 1;
  /* Field: Field-collection item: Slide image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['relationship'] = 'field_slideshow_slides_value';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['type'] = 'styles_file_slideshow_default';
  $handler->display->display_options['fields']['field_slide_image']['field_api_classes'] = 0;
  /* Field: Field-collection item: Headline */
  $handler->display->display_options['fields']['field_slide_headline']['id'] = 'field_slide_headline';
  $handler->display->display_options['fields']['field_slide_headline']['table'] = 'field_data_field_slide_headline';
  $handler->display->display_options['fields']['field_slide_headline']['field'] = 'field_slide_headline';
  $handler->display->display_options['fields']['field_slide_headline']['relationship'] = 'field_slideshow_slides_value';
  $handler->display->display_options['fields']['field_slide_headline']['label'] = '';
  $handler->display->display_options['fields']['field_slide_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_headline']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_headline']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_headline']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_headline']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_headline']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_headline']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_headline']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_headline']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_headline']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_headline']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_headline']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_headline']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_headline']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide_headline']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_headline']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_headline']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_headline']['field_api_classes'] = 0;
  /* Field: Field-collection item: Teaser */
  $handler->display->display_options['fields']['field_slide_teaser']['id'] = 'field_slide_teaser';
  $handler->display->display_options['fields']['field_slide_teaser']['table'] = 'field_data_field_slide_teaser';
  $handler->display->display_options['fields']['field_slide_teaser']['field'] = 'field_slide_teaser';
  $handler->display->display_options['fields']['field_slide_teaser']['relationship'] = 'field_slideshow_slides_value';
  $handler->display->display_options['fields']['field_slide_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_slide_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_teaser']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide_teaser']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_teaser']['field_api_classes'] = 0;
  /* Field: Field-collection item: Link */
  $handler->display->display_options['fields']['field_slide_link']['id'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['table'] = 'field_data_field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['field'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['relationship'] = 'field_slideshow_slides_value';
  $handler->display->display_options['fields']['field_slide_link']['label'] = '';
  $handler->display->display_options['fields']['field_slide_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slide_link']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3 class="title">[field_slide_headline]</h3><div class="teaser">[field_slide_teaser]<div class="link">[field_slide_link]</div></div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'caption';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Contextual filter: Block: Block ID */
  $handler->display->display_options['arguments']['bid']['id'] = 'bid';
  $handler->display->display_options['arguments']['bid']['table'] = 'bean';
  $handler->display->display_options['arguments']['bid']['field'] = 'bid';
  $handler->display->display_options['arguments']['bid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['bid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['bid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['bid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['bid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['bid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['bid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['bid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['bid']['not'] = 0;
  $export['slideshow'] = $view;

  return $export;
}
