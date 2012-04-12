<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ft_video_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ft_video_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Video'),
      'module' => 'features',
      'description' => t('Stream a video from a site such as YouTube.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '1',
      'help' => '',
    ),
  );
  return $items;
}
