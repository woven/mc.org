<?php

/**
 * Implementation of hook_default_box().
 */
function ft_place_ui_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'places_add_a_place';
  $box->plugin_key = 'simple';
  $box->title = 'Add a place';
  $box->description = 'Places - Add a place';
  $box->options = array(
    'body' => '<p>Do you have a favorite place that you\'d like to tell others about? Click the green Add Stuff button at the top of the page, choose Place and share some details. Your place will be posted immediately.</p>
<?php echo theme(\'ghh_see_all\',\'More Help\',\'help\'); ?>',
    'format' => '3',
  );
  $export['places_add_a_place'] = $box;

  return $export;
}
