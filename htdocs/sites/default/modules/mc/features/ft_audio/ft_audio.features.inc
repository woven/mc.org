<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ft_audio_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ft_audio_node_info() {
  $items = array(
    'audio' => array(
      'name' => t('Audio'),
      'module' => 'features',
      'description' => t('Content type to add audio items'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '1',
      'help' => '',
    ),
  );
  return $items;
}
