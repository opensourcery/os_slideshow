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
  public function form($bean, $form, &$form_state) {
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
      '#default_value' => $bean->effect,
    );
    $form['timeout'] = array(
      '#type' => 'textfield',
      '#title' => t('Timeout'),
      '#description' => t('The time between slides, in milliseconds.'),
      '#default_value' => $bean->timeout,
    );
    // Add some admin CSS and JS from Beanslide
    $path = drupal_get_path('module', 'os_slideshow');
    drupal_add_js($path . '/os_slideshow.admin.js');
    drupal_add_css($path . '/os_slideshow.admin.css');
    return $form;
  }

  /**
   * Displays the bean using our Views Slideshow view.
   */
  public function view($bean, $content, $view_mode = 'full', $langcode = NULL, $page = NULL) {
    $view = views_get_view('slideshow');
    if (!$view || !$view->access('default')) {
      return;
    }

    // Turn off Views's contextual links; the user wants to edit the block, not
    // the view itself, and Views's links clobber Bean's.
    $view->hide_admin_links = TRUE;

    // Manipulate the view to set slideshow options.
    $options = &$view->display_handler->options;
    $options['style_options']['views_slideshow_cycle']['timeout'] = $bean->timeout;
    $options['style_options']['views_slideshow_cycle']['effect'] = $bean->effect;
    $options['fields']['field_slide_image']['type'] = $bean->file_style;

    return array(
      '#markup' => $view->preview('default', array($bean->bid)),
    );
  }
}
