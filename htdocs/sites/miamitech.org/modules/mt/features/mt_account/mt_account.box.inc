<?php

/**
 * Implementation of hook_default_box().
 */
function mt_account_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'profile_myevents';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'My Events sections';
  $box->options = array(
    'body' => '<?php
if(function_exists(\'_mc_event_section_all\')){
print  _mc_event_section_all(\'events_bookmarks\');
}
?>',
    'format' => '3',
  );
  $export['profile_myevents'] = $box;

  return $export;
}
