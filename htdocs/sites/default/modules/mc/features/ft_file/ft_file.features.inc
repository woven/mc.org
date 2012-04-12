<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ft_file_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ft_file_node_info() {
  $items = array(
    'file' => array(
      'name' => t('File'),
      'module' => 'features',
      'description' => t('Upload a single file that can be referenced by URL from other content types.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
