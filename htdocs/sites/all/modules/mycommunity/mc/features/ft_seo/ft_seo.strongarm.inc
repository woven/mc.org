<?php

/**
 * Implementation of hook_strongarm().
 */
function ft_seo_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_base_url';
  $strongarm->value = '';
  $export['nodewords_base_url'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_canonical_alias';
  $strongarm->value = 0;
  $export['nodewords_canonical_alias'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_edit';
  $strongarm->value = array(
    'description' => 'description',
    'keywords' => 'keywords',
    'abstract' => 0,
    'canonical' => 0,
    'copyright' => 0,
    'revisit-after' => 0,
    'robots' => 0,
  );
  $export['nodewords_edit'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_enable_user_metatags';
  $strongarm->value = 1;
  $export['nodewords_enable_user_metatags'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_filter_modules_output_event';
  $strongarm->value = array();
  $export['nodewords_filter_modules_output_event'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_global_keywords';
  $strongarm->value = '';
  $export['nodewords_global_keywords'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_head';
  $strongarm->value = array(
    'description' => 'description',
    'keywords' => 'keywords',
    'abstract' => 0,
    'canonical' => 0,
    'copyright' => 0,
    'revisit-after' => 0,
    'robots' => 0,
  );
  $export['nodewords_head'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_keyword_vids';
  $strongarm->value = array(
    1 => 0,
  );
  $export['nodewords_keyword_vids'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_list_repeat';
  $strongarm->value = 0;
  $export['nodewords_list_repeat'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_list_robots';
  $strongarm->value = array(
    'index' => 0,
    'noindex' => 0,
    'follow' => 0,
    'nofollow' => 0,
    'noarchive' => 0,
    'noodp' => 0,
    'nosnippet' => 0,
    'noydir' => 0,
  );
  $export['nodewords_list_robots'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_max_size';
  $strongarm->value = '350';
  $export['nodewords_max_size'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_use_frontpage_tags';
  $strongarm->value = 0;
  $export['nodewords_use_frontpage_tags'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_default';
  $strongarm->value = '[page-title] - [site-name]';
  $export['page_title_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_forum_root_title';
  $strongarm->value = '';
  $export['page_title_forum_root_title'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_front';
  $strongarm->value = '[page-title]';
  $export['page_title_front'] = $strongarm;

  return $export;
}
