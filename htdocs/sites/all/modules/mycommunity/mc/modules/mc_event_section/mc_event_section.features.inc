<?php

/**
 * Implementation of hook_flag_default_flags().
 */
function mc_event_section_flag_default_flags() {
  $flags = array();
  // Exported flag: "Has Stared Before".
  $flags['events_starred'] = array(
    'content_type' => 'user',
    'title' => 'Has Stared Before',
    'global' => '0',
    'types' => array(),
    'flag_short' => 'Mark as Stared Person',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'UnMark as Stared',
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
    'show_on_profile' => 0,
    'access_uid' => '',
    'api_version' => 2,
    'module' => 'mc_event_section',
    'locked' => array(
      '0' => 'name',
    ),
  );
  return $flags;
}
