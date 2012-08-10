<?php
// $Id: environment.drush.inc,v 1.1.2.5 2011/02/09 18:29:11 grayside Exp $

/**
 * @file Executes the environment_switch capabilities
 */

/**
 * Implementation of hook_drush_command().
 */
function environment_plus_drush_command() {
  $items = array();

  $items['environment-loc'] = array(
    'description' => 'Switching the current location of the setup',
    'drupal dependencies' => array('environment'),
    'aliases' => array('env-loc'),
  );

  return $items;
}

/**
 * Implementation of hook_drush_help().
 */
function enviroment_plus_drush_help($section) {
  switch ($section) {
    case 'meta:environment_plus:title':
      return dt('Environment Plus commands');
    case 'meta:environment_plus:summary':
      return dt('Enhanchment to the environment module.');
    case 'drush:environment-loc':
      return dt("Switching the current location of the setup ex: local/staging/development etc..");
  }
}

function drush_environment_plus_environment_loc($loc = NULL,$name = NULL){
    $locs = array('local','development','dev','staging','production','prod');

	if(!empty($loc)){
		dt('No Location was selected');
        return;
	}

    if(!in_array($loc,$locs)){
        dt('Invalid Location was selected');
        return;
    }

    //load environment_plus_loc with the current loc name
    variable_set("environment_plus_loc",$loc);


    //find the color for the env indicator
    switch($loc){
      case 'local':
        $color = "darkgreen";
      break;
      case 'development':
      case 'dev':
        $color = "#E9AB17";
      break;

      case 'staging':
        $color = "#157DEC";
      break;
      case 'production':
      case 'prod':
        $color = "dark-red";
      break;
    }

  module_enable(array("environment_indicator"));

  variable_set("environment_indicator_enabled",1);
  variable_set("environment_indicator_color",$color);

  if(!empty($name)){
    variable_set("environment_indicator_text",$name);
  }else{
    variable_set("environment_indicator_text",$loc);
  }
	
}