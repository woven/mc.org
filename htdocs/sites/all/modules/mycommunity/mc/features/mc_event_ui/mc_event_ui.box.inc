<?php

/**
 * Implementation of hook_default_box().
 */
function mc_event_ui_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'mc_event_sections_box';
  $box->plugin_key = 'simple';
  $box->title = 'Upcoming Events';
  $box->description = 'MC Events sections';
  $box->options = array(
    'body' => '<?php
print  _mc_event_section_all();
?>',
    'format' => '3',
  );
  $export['mc_event_sections_box'] = $box;

  return $export;
}
