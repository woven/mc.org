<?php

/**
 * Implementation of hook_strongarm().
 */
function ft_group_ui_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_home_page_view';
  $strongarm->value = '0';
  $export['og_home_page_view'] = $strongarm;

  return $export;
}
