<?php

/**
 * Implementation of hook_strongarm().
 */
function ft_newrelic_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_relic_rpm_bg_urls';
  $strongarm->value = 'admin
admin/*
node/*/*';

  $export['new_relic_rpm_bg_urls'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_relic_rpm_exclusive_urls';
  $strongarm->value = '';

  $export['new_relic_rpm_exclusive_urls'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_relic_rpm_ignore_urls';
  $strongarm->value = '';

  $export['new_relic_rpm_ignore_urls'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_relic_rpm_module_deployment';
  $strongarm->value = '0';

  $export['new_relic_rpm_module_deployment'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_relic_rpm_track_cron';
  $strongarm->value = 'bg';

  $export['new_relic_rpm_track_cron'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_relic_rpm_track_drush';
  $strongarm->value = 'bg';

  $export['new_relic_rpm_track_drush'] = $strongarm;
  return $export;
}
