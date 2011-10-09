<?php

/**
 * @file
 * Slideshow bean plugin.
 */

class slideshow_bean extends bean_plugin {

  /**
   * Declares default block settings.
   */
  public function values() {
    return array(
      'file_style' => 'styles_file_slideshow_default',
      'effect' => 'fade',
      'timeout' => 8000,
    );
  }

  /**
   * Builds extra settings for the block edit form.
   */
  public function form($bean) {
    $form = array();

    // Gather file field formatters
    $file_styles = array();
    foreach (field_info_formatter_types() as $formatter => $info) {
      if (in_array('file', $info['field types'])) {
        $file_styles[$formatter] = $info['label'];
      }
    }
    $form['file_style'] = array(
      '#type' => 'select',
      '#title' => t('File/image style'),
      '#options' => $file_styles,
      '#default_value' => $bean->file_style,
    );
    // TODO: Enumerate all possible effects from Views Slideshow
    $form['effect'] = array(
      '#type' => 'select',
      '#title' => t('Transition effect'),
      '#options' => array('fade' => 'Fade'),
      '#default_value' => $bean->transition,
    );
    $form['timeout'] = array(
      '#type' => 'textfield',
      '#title' => t('Timeout'),
      '#description' => t('The time between slides, in milliseconds.'),
      '#default_value' => $bean->timeout,
    );
    return $form;
  }

  /**
   * Displays the bean using our Views Slideshow view.
   */
  public function view($bean, $content, $view_mode = 'full', $langcode = NULL) {
    $view = views_get_view('slideshow');
    if (!$view || !$view->access('default')) {
      return;
    }
    $options = &$view->display_handler->options;
    $options['style_options']['views_slideshow_cycle']['timeout'] = $bean->timeout;
    $options['style_options']['views_slideshow_cycle']['effect'] = $bean->effect;
    $options['fields']['field_slide_image']['type'] = $bean->file_style;
    return array(
      '#markup' => $view->preview('default', array($bean->bid)),
    );
  }
}