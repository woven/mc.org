<?php

/**
 * @file
 *   Example drush command.
 *
 *   To run this *fun* command, execute `sudo drush --include=./examples mmas`
 *   from within your drush directory.
 *
 *   See `drush topic docs-commands` for more information about command authoring.
 *
 *   You can copy this file to any of the following
 *     1. A .drush folder in your HOME folder.
 *     2. Anywhere in a folder tree below an active module on your site.
 *     3. /usr/share/drush/commands (configurable)
 *     4. In an arbitrary folder specified with the --include option.
 *     5. Drupal's sites/all/drush folder.
 */

/**
 * Implementation of hook_drush_command().
 *
 * In this hook, you specify which commands your
 * drush module makes available, what it does and
 * description.
 *
 * Notice how this structure closely resembles how
 * you define menu hooks.
 *
 * See `drush topic docs-commands` for a list of recognized keys.
 *
 * @return
 *   An associative array describing your command(s).
 */
function mc_drush_command() {
  $items = array();

  // The 'make-me-a-sandwich' command
  $items['update-mc-dfimg'] = array(
    'description' => "Updates the default images in the filenames and filepaths",
    'arguments' => array(
      'vid' => 'The vocabulary id that all the tids belong to.',
    ),
    'examples' => array(
      'drush mcdfimg 2' => 'Updates the files that are related to the vocabulary 2',
    ),
    'aliases' => array('mcdfimg'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_DATABASE, // No bootstrap at all.
  );

  $items['features-revert-all-smart'] = array(
    'description' => "Revert all enabled feature module on your site.",
    'arguments' => array(
      'feature_exclude' => 'A space-delimited list of features to exclude from being reverted.',
    ),
    'options' => array(
      '--force' => "Force revert even if Features assumes components' state are default.",
    ),
    'drupal dependencies' => array('features'),
    'aliases' => array('fr-all-smart', 'fras'),
  );

  $items['migrate-places'] = array(
    'description' => "Migrates the places to its own content type",
    'examples' => array(
      'drush mcplaces' => 'Migrates all the places to its own content type',
    ),
    'aliases' => array('mcplaces'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL, // No bootstrap at all.
  );

  return $items;
}



/**
 * Revert all enabled features to their definitions in code. Optionally pass in
 * a list of features to exclude from being reverted.
 */
function drush_mc_features_revert_all_smart() {
  module_load_include('inc', 'features', 'features.export');
  $features_to_revert = array();
  $features_to_exclude = func_get_args();
  $force = drush_get_option('force');

  foreach (features_get_features(NULL, TRUE) as $module) {
    $storage = features_get_storage($module->name);
    if ($module->status && ($storage == FEATURES_OVERRIDDEN || $storage == FEATURES_NEEDS_REVIEW) && !in_array($module->name, $features_to_exclude)) {
      $features_to_revert[] = $module->name;
    }
  }

  if(count($features_to_revert)){
      drush_print(dt('The following modules will be reverted: !modules', array('!modules' => implode(', ', $features_to_revert))));

      if (drush_confirm(dt('Do you really want to continue?'))) {
        foreach ($features_to_revert as $module_name) {
          drush_invoke_process(drush_sitealias_get_record('@self'), 'features-revert', array($module_name), array('force' => $force, '#integrate' => TRUE));
        }
      }else{
        drush_die('Aborting.');
      }
  }else{
      drush_print("All modules are in default status");
  }

}


/**
 * Implementation of hook_drush_help().
 *
 * This function is called whenever a drush user calls
 * 'drush help <name-of-your-command>'. This hook is optional. If a command
 * does not implement this hook, the command's description is used instead.
 *
 * This hook is also used to look up help metadata, such as help
 * category title and summary.  See the comments below for a description.
 *
 * @param
 *   A string with the help section (prepend with 'drush:')
 *
 * @return
 *   A string with the help text for your command.
 */
function mc_drush_help($section) {
  switch ($section) {
    case 'drush:migrate-places':
      return dt("This command will move all the existing places into its own content type");
    case 'drush:update-mc-dfimg':
      return dt("This command will update the files table in the database (This is targeted for GHH, for now)");
    // The 'title' meta item is used to name a group of
    // commands in `drush help`.  If a title is not defined,
    // the default is "All commands in ___", with the
    // specific name of the commandfile (e.g. sandwich).
    // Command files with less than four commands will
    // be placed in the "Other commands" section, _unless_
    // they define a title.  It is therefore preferable
    // to not define a title unless the file defines a lot
    // of commands.
    case 'drush:features-revert-all-smart':
        return dt("a better and faster version of drsuh fra, where it only tries to revert Overridden modules");
    case 'meta:mc:title':
      return dt("MC Commands");
    // The 'summary' meta item is displayed in `drush help --filter`,
    // and is used to give a general idea what the commands in this
    // command file do, and what they have in common.
    case 'meta:mc:summary':
      return dt("Automates various tasks related to MC");
  }
}


/**
 * Example drush command callback. This is where the action takes place.
 *
 * The function name should be same as command name but with dashes turned to
 * underscores and 'drush_commandfile_' prepended, where 'commandfile' is
 * taken from the file 'commandfile.drush.inc', which in this case is 'sandwich'.
 * Note also that a simplification step is also done in instances where
 * the commandfile name is the same as the beginning of the command name,
 * "drush_example_example_foo" is simplified to just "drush_example_foo".
 * To also implement a hook that is called before your command, implement
 * "drush_hook_pre_example_foo".  For a list of all available hooks for a
 * given command, run drush in --debug mode.
 *
 * If for some reason you do not want your hook function to be named
 * after your command, you may define a 'callback' item in your command
 * object that specifies the exact name of the function that should be
 * called.  However, the specified callback function must still begin
 * with "drush_commandfile_" (e.g. 'callback' => "drush_example_foo_execute")
 * if you want that all hook functions are still called (e.g.
 * drush_example_pre_foo_execute, and so on).
 *
 * In this function, all of Drupal's API is (usually) available, including
 * any functions you have added in your own modules/themes.
 *
 * @see drush_invoke()
 * @see drush.api.php
 */
function drush_mc_update_mc_dfimg($vid = '2') {
  $result = db_query("SELECT tid FROM term_data WHERE vid=%d", $vid);

  $tids = array();
  while ($row = db_fetch_object($result)) {
    $tids[] = $row->tid;
    $nid = _taxonomynode_get_nid_from_tid($row->tid);
    $node = node_load($nid);
    $title = $node->title;
    switch ($title) {
      case 'Fitness':
        $old_fid='73470';
        break;
      
      case 'Environment':
        $old_fid='73501';
        break;

      case 'Food':
        $old_fid='73485';
        break;

      case 'Spirit & Mind':
        $old_fid='73488';
        break;

      case 'Health Info':
        $old_fid='73486';
        break;

      default:
        break;
    }
    if(isset($node->field_taxonomy_default_image['0']['fid']) && !empty($node->field_taxonomy_default_image['0']['fid'])){
      $file = field_file_load($node->field_taxonomy_default_image['0']['fid']);
      $new_file = new stdClass();
      foreach ($file as $key => $value) {
        $new_file->$key = $value;
      }
      $new_file->fid = $old_fid;
      drupal_write_record('files',$new_file,'fid');
    }
  }

  $generic_fid = variable_get('default_img_generic', '');
  if(!empty($generic_fid)){
    $file = field_file_load($generic_fid);
    $old_fid = '73469';
      $new_file = new stdClass();
      foreach ($file as $key => $value) {
        $new_file->$key = $value;
      }
      $new_file->fid = $old_fid;
      drupal_write_record('files',$new_file,'fid');
  }


  $forum_generic_fid = variable_get('default_img_forum', '');
  if(!empty($forum_generic_fid)){
    $file = field_file_load($forum_generic_fid);
    $old_fid = '75710';
      $new_file = new stdClass();
      foreach ($file as $key => $value) {
        $new_file->$key = $value;
      }
      $new_file->fid = $old_fid;
      drupal_write_record('files',$new_file,'fid');
  }

  drush_log(dt('The files table has been updated!'), 'success');
  
}

function drush_mc_migrate_places() {
  set_time_limit(0);
  $result = db_query("SELECT nid, lid FROM location_instance");

  while ($row = db_fetch_object($result)) {
    $old_node = node_load($row->nid);
    if($old_node->type=='event'){
      $node = new StdClass();
      $node->type = 'place';
      $node->status = 1;
      $node->title = $old_node->location['name'];
      node_save($node);

      $old_node->field_place['0']['nid'] = $node->nid;

      node_save($old_node);

      db_query('UPDATE location_instance SET nid=' . $node->nid . ', vid=' . $node->nid . ' WHERE lid=' . $row->lid);
    }
  }
}