<?php

/**
 * Implementation of hook_default_box().
 */
function mt_event_ui_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'events_add_an_event';
  $box->plugin_key = 'simple';
  $box->title = 'Add an event';
  $box->description = 'Events - Add an event';
  $box->options = array(
    'body' => '<div class="prose">
<p>Do you know of an upcoming event that you\'d like to share with others? Click the green Add Stuff button at the top of the page, choose Event, and tell us about it. Your event will be posted immediately.</p>
</div>
<?php echo theme(\'ghh_see_all\',\'Read More\',\'help\'); ?>',
    'format' => '3',
  );
  $export['events_add_an_event'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'upcoming_events_blocks';
  $box->plugin_key = 'simple';
  $box->title = 'Upcoming Events';
  $box->description = 'Events blocks';
  $box->options = array(
    'body' => '<?php
print  mc_events_grouped_by_dates(\'events_by_dates\', \'block_5\', 0);
?>',
    'format' => '3',
  );
  $export['upcoming_events_blocks'] = $box;

  return $export;
}
