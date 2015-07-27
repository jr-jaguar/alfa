<?php
/**
 * Implements of hook_views_data().
 */
function five_task_views_data() {
  return array(
    'node' => array(
      'my_custom_filter' => array(
        'group' => t('Custom'),
        'title' => t('My custom filter'),
        'help' => t('My custom filter'),
        'filter' => array('handler' => 'five_task_handler_filter_my_custom_filter'),
      )
    )
  );
}