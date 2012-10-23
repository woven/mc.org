<?php

/**
 * Implementation of hook_flag_default_flags().
 */
function mc_twitter_schedule_flag_default_flags() {
  $flags = array();
  // Exported flag: "Tweeted Two hours".
  $flags['tweet_2hour'] = array(
    'content_type' => 'node',
    'title' => 'Tweeted Two hours',
    'global' => '0',
    'types' => array(
      '0' => 'event',
    ),
    'flag_short' => 'Tweeted',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'UnTweet Me',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        '0' => 2,
      ),
      'unflag' => array(
        '0' => 2,
      ),
    ),
    'weight' => 0,
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'mc_twitter_schedule',
    'locked' => array(
      '0' => 'name',
    ),
  );
  return $flags;
}
