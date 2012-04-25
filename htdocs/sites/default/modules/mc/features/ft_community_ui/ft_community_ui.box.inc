<?php

/**
 * Implementation of hook_default_box().
 */
function ft_community_ui_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'community_getinvolved';
  $box->plugin_key = 'simple';
  $box->title = 'Get involved!';
  $box->description = 'Get involved - Community';
  $box->options = array(
    'body' => '<p>GetHealthyHarlem.org helps you find and share local information about getting and staying healthy. See what others are up to and get involved!</p>
<?php echo theme(\'ghh_see_all\',\'More Help\',\'help\'); ?>',
    'format' => '3',
  );
  $export['community_getinvolved'] = $box;

  return $export;
}
