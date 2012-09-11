<?php

/**
 * Implementation of hook_strongarm().
 */
function mc_search_core_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'minimum_word_size';
  $strongarm->value = '3';
  $export['minimum_word_size'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_rank_comments';
  $strongarm->value = '5';
  $export['node_rank_comments'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_rank_recent';
  $strongarm->value = '5';
  $export['node_rank_recent'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_rank_relevance';
  $strongarm->value = '5';
  $export['node_rank_relevance'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'overlap_cjk';
  $strongarm->value = 1;
  $export['overlap_cjk'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_config_default_search';
  $strongarm->value = 'node';
  $export['search_config_default_search'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_config_disable_category';
  $strongarm->value = array();
  $export['search_config_disable_category'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_config_disable_category_all';
  $strongarm->value = 0;
  $export['search_config_disable_category_all'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_config_disable_index_type';
  $strongarm->value = array(
    'npage' => 'npage',
    'taxonomy_feature' => 'taxonomy_feature',
    'taxonomy_topic' => 'taxonomy_topic',
    'webform' => 'webform',
    'gallery' => 0,
    'article' => 0,
    'audio' => 0,
    'forum' => 0,
    'event' => 0,
    'file' => 0,
    'group' => 0,
    'link' => 0,
    'nnews' => 0,
    'page_general' => 0,
    'gallery_image' => 0,
    'place' => 0,
    'video' => 0,
  );
  $export['search_config_disable_index_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_config_disable_negative';
  $strongarm->value = 0;
  $export['search_config_disable_negative'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_config_disable_or';
  $strongarm->value = 0;
  $export['search_config_disable_or'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_config_disable_phrase';
  $strongarm->value = 0;
  $export['search_config_disable_phrase'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_config_disable_type';
  $strongarm->value = array(
    'npage' => 'npage',
    'taxonomy_feature' => 'taxonomy_feature',
    'taxonomy_topic' => 'taxonomy_topic',
    'webform' => 'webform',
    'all' => 0,
    'gallery' => 0,
    'article' => 0,
    'audio' => 0,
    'forum' => 0,
    'event' => 0,
    'file' => 0,
    'group' => 0,
    'link' => 0,
    'nnews' => 0,
    'page_general' => 0,
    'gallery_image' => 0,
    'place' => 0,
    'video' => 0,
  );
  $export['search_config_disable_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_cron_limit';
  $strongarm->value = '500';
  $export['search_cron_limit'] = $strongarm;

  return $export;
}
