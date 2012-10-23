<?php

/**
 * Implementation of hook_strongarm().
 */
function mc_twitter_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_consumer_key';
  $strongarm->value = 'Nd9VGGEtqi0e8I3pSQ6diQ';
  $export['twitter_consumer_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_consumer_secret';
  $strongarm->value = 'eAh8x3h6nHDtLcyCsrZ4TwR9LFG5Kj3dAWUcgDQQmM';
  $export['twitter_consumer_secret'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_expire';
  $strongarm->value = '0';
  $export['twitter_expire'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_import';
  $strongarm->value = 0;
  $export['twitter_import'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_post_default_format';
  $strongarm->value = 'New post: !title !tinyurl';
  $export['twitter_post_default_format'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_post_default_state';
  $strongarm->value = FALSE;
  $export['twitter_post_default_state'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_post_types';
  $strongarm->value = array(
    'event' => 'event',
    'gallery' => 0,
    'article' => 0,
    'audio' => 0,
    'company' => 0,
    'event_feed' => 0,
    'file' => 0,
    'forum' => 0,
    'group' => 0,
    'npage' => 0,
    'link' => 0,
    'nnews' => 0,
    'page' => 0,
    'gallery_image' => 0,
    'place' => 0,
    'video' => 0,
    'webform' => 0,
  );
  $export['twitter_post_types'] = $strongarm;

  return $export;
}
