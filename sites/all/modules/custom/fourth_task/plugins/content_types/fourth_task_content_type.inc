<?php
/**
 * @file
 */

$plugin = array(
  'title' => t('Fourth task plugin'),
  'description' => t('Form for panels'),
  'render callback' => 'fourth_task_content_type_render',
  'edit form' => 'fourth_task_edit_form',
  'category' => t('Custom panes'),
  'single' => TRUE,
);


/**
 * Returns an edit form for custom type settings.
 */

function fourth_task_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Submit callback for the example_text_edit_form().
 */
function fourth_task_edit_form_submit($form, &$form_state) {
}

/**
 * Render the custom content type.
 */
function fourth_task_content_type_render($subtype, $conf, $args, $context) {

  $block = new stdClass();
  $block->delta = 'form';
  $block->title = t('Fourth Task');
  $block->content = drupal_get_form('fourth_task_form');
  return $block;
}