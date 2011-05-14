<?php

/**
 * Implementation of hook_node_info().
 */
function charity_drive_event_node_info() {
  $items = array(
    'charity_event' => array(
      'name' => t('Charity Drive Event'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
