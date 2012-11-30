<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function mc_news_feed_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'feed_news';
  $feeds_importer->config = array(
    'name' => 'feed_news',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSimplePieParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'nnews',
        'input_format' => '1',
        'update_existing' => '0',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'parent:og_groups',
            'target' => 'og_groups',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'parent:uid',
            'target' => 'uid',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'timestamp',
            'target' => 'created',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          6 => array(
            'source' => 'url',
            'target' => 'url',
            'unique' => 0,
          ),
          7 => array(
            'source' => 'feed_images',
            'target' => 'field_list_image',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'url',
            'target' => 'field_url:url',
            'unique' => FALSE,
          ),
        ),
        'author' => 0,
        'authorize' => 0,
      ),
    ),
    'content_type' => 'news_feed',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );
  $export['feed_news'] = $feeds_importer;

  return $export;
}