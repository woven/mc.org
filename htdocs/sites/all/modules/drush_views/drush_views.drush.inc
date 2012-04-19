<?php

/**
 * @file
 *
 */

define('DRUSH_VIEWS_DEFAULT_PATH', "export/views");
define('DRUSH_VIEWS_DEFAULT_EXTENSION', ".view");
define('DRUSH_VIEWS_INC_EXTENSION', ".inc");

/**
 * Implementation of hook_drush_help().
 */
function drush_views_drush_help($section) {
  switch ($section) {
      case 'drush:views-export':
        return dt("Usage: drush [options] views-export <views>\n\n"
                 ."Export the specified views to single .view files.\n"
                 ."<views> should be a comma-separated list. For example: view1,view2,view3.\n"
                 ."If <views> is omitted, all views are exported.\n\n"
                 ."Available options:\n"
                 ."--target-path=TARGET_PATH\n"
                 ."  Store exported views in the TARGET_PATH directory.\n"
                 ."  If omitted, the default path @default_path is used.\n"
                 ."--status=<enabled|disabled>\n"
                 ."  Filter by status: export only enabled/disabled views.\n"
                 ."--tag=tag1,tag2,...\n"
                 ."  Filter by tag: export only views with the given tag(s).\n"
                 ."--output=<files|includes|bulk>\n"
                 ."  Output format:\n"
                 ."  * 'files' (default) exports to individual .view files;\n"
                 ."  * 'includes' exports to individual .inc PHP files that can be included by\n"
                 ."     hook_views_default_views().\n"
                 ."  * 'bulk' exports to STDOUT, in a format suitable for inclusion in a\n"
                 ."    .module file.\n"
                 ."--module=<module>\n"
                 ."  When in 'bulk' output mode, name the hook in a suitable way for inclusion\n"
                 ."  in a module with the given name. Default: MYMODULE.\n",
                 array('@default_path' => DRUSH_VIEWS_DEFAULT_PATH));
      case 'drush:views-import':
        return dt("Usage: drush [options] views-import <views>\n\n"
                 ."Import the specified views.\n"
                 ."Existing views will be deleted, or overridden if they are default views.\n"
                 ."<views> should be a comma-separated list of files, with an optional\n"
                 .".view extension. For example: file1,file2,file3.\n"
                 ."If <views> is a directory, all *.view files it contains will be imported.\n"
                 ."If omitted, the default path @default_path is used.\n",
                 array('@default_path' => DRUSH_VIEWS_DEFAULT_PATH));
     case 'drush:views-list':
       return dt("Usage: drush [options] views-list\n\n"
                 ."List all available views.\n\n"
                 ."Available options:\n"
                 ."--status=<enabled|disabled>\n"
                 ."  List only enabled/disabled views.\n"
                 ."--tag=tag1,tag2,...\n"
                 ."  List only views with the given tag(s).\n");
     case 'drush:views-delete':
       return dt("Usage: drush [options] views-delete <views>\n\n"
                 ."Delete the specified views. Use 'ALL' to delete all normal/overridden views.");
     case 'drush:views-copy':
       return t("Usage: drush [options] views copy <source view> [<views_options> <destination views>]\n\n"
                ."<views_options> should be a comma-separated list of views options (title, fields, filters...) "
                ."to copy. The list of available views options for a given view can be listed by running "
                ."'drush views-copy' with only one view name as argument.\n"
                ."<destination views> is a comma separated list of views.\n\n"
                ."Available command-line options:\n"
                ."--source-display=DISPLAY\n"
                ."  The source display to copy from. Default is 'default'.\n"
                ."--destination-display=DISPLAY\n"
                ."  The destination display to copy to. Default is to use the same as the source display.\n"
                ."  Use 'drush views-displays' to list available displays for a view.\n");
    case 'drush:views-displays':
      return dt("Usage: drush [options] views-displays <view>\n\n"
               ."List all displays associated with given view.");
    case 'drush:views-theme-functions':
      return dt("Usage: drush [options] views-theme-functions <view> <display>\n\n"
               ."List theme functions in trigger order for a given view and display.");
  }
}

/**
 * Implementation of hook_drush_command().
 */
function drush_views_drush_command() {
  $items = array();
  $items['views-export'] = array(
    'callback' => 'drush_views_export',
    'description' => 'Export one or more views.',
    'drupal dependencies' => array('views'),
    'aliases' => array('vwex'),
  );
  $items['views-import'] = array(
    'callback' => 'drush_views_import',
    'description' => 'Import one or more non-default views.',
    'drupal dependencies' => array('views'),
    'aliases' => array('vwim'),
  );
  $items['views-list'] = array(
    'callback' => 'drush_views_list',
    'description' => 'List available views.',
    'drupal dependencies' => array('views'),
    'aliases' => array('vwls'),
  );
  $items['views-delete'] = array(
    'callback' => 'drush_views_delete',
    'description' => 'Delete or revert a view.',
    'drupal dependencies' => array('views'),
    'aliases' => array('vwrm'),
  );
  $items['views-displays'] = array(
    'callback' => 'drush_views_displays',
    'description' => 'List the displays implemented by the view.',
    'drupal dependencies' => array('views'),
    'aliases' => array('vwds'),
  );
  $items['views-theme-functions'] = array(
    'callback' => 'drush_views_theme_functions',
    'description' => 'List the theme functions used by the display.',
    'drupal dependencies' => array('views'),
    'aliases' => array('vwtf'),
  );
  $items['views-copy-options'] = array(
    'callback' => 'drush_views_copy_options',
    'description' => 'Copy views options (title, fields, filters...) from one view to other views.',
    'drupal dependencies' => array('views'),
    'aliases' => array('vwco'),
  );
  return $items;
}

/**
 * Command callback: views-export.
 */
function drush_views_export($views = NULL) {
  $target_path = drush_get_option('target-path');
  if ($target_path=="")
    $target_path = DRUSH_VIEWS_DEFAULT_PATH;
  if (substr($target_path, -1) != "/")
    $target_path .= "/";
  $exports = array();
  $status = drush_get_option('status');
  $tag = drush_get_option('tag');
  // If no view names are specified, filter only by status and tag.
  // If view names are specified, export those views plus the result
  // of filtering by status and tag.
  if ($views)
    $views = explode(',', $views);
  if (($status) || ($tag)) {
    $all_views = views_get_all_views();
    foreach ($all_views as $view) {
      if (_drush_views_apply_filters($view, $status, $tag)) {
        $exports[] = $view;
        if (is_array($views)) {
          $key = array_search($view->name, $views);
          if (isset($key)) {
            unset($views[$key]);
          }
        }
      }
    }
  }
  if (is_array($views) && count($views)) {
    foreach ($views as $view) {
      $retrieved_view = views_get_view($view);
      if (!is_object($retrieved_view))
        return drush_set_error('DRUSH_FRAMEWORK_ERROR',dt("View '@view' not found.", array('@view' => $view)));
      else
        $exports[] = $retrieved_view;
    }
  }

  $output = strtolower(drush_get_option('output', 'files'));
  if ($output == 'includes') {
    $extension = DRUSH_VIEWS_INC_EXTENSION;
  }
  else {
    $extension = DRUSH_VIEWS_DEFAULT_EXTENSION;
  }

  if (!count($exports)) {
    drush_log(dt("No matching views could be found."),'warning');
    return;
  }

  if ($output=='files' || $output=='includes') {
    drush_log(dt("Exporting !count views to directory @target_path:",
              array('!count' => count($exports), '@target_path' => $target_path)), 'ok');
    // Create the directory with the parent directory's permissions by default.
    $parent_dir = $target_path;
    while (!is_dir($parent_dir)  && ($parent_dir != conf_path())) {
      // Make sure directory is valid to prevent loops.
      if ($parent_dir && ($parent_dir != ".")) {
        $parent_dir = dirname($parent_dir);
      }
      else {
        // Default to Drupal path if the path was invalid or empty.
        $parent_dir = conf_path();
      }
    }
    @mkdir($target_path, fileperms($parent_dir), TRUE);
    foreach ($exports as $export) {
      $filename = $target_path . $export->name . $extension;
      drush_log(dt("- Exporting view @name to file @filename.",
                  array('@name' => $export->name, '@filename' => $filename)),
                'ok');
      if (!$fh = fopen($filename, 'w'))
        return drush_set_error('DRUSH_FRAMEWORK_ERROR',dt("Cannot open '@filename' for writing.",
                    array('@filename' => $filename)));
      $code = $export->export();
      if ($output=='includes') {
        $code = 
          "<?php\n"
          . "// \$Id\$\n"
          . $code . "\n" 
          . "\$views[\$view->name] = \$view;";
        }
      fwrite($fh, $code);
      fclose($fh);
    }
    drush_log(dt("Done."),'ok');
  } else {
     foreach ($exports as $view) {
       $bulk_exports[$view->name] = $view;
     }
     // Use a generic MYMODULE placeholder if no module was specified with --module.
     $module = drush_get_option('module', 'MYMODULE');
     // Use the same output that is used for Views bulk export.
     $out .= "<?php\n";
     $out .= module_invoke('views', 'views_exportables', 'export', $bulk_exports, $module);
    // Print to STDOUT.
    print $out;
  }
  return;
}

/**
 * Command callback: views-import.
 */
function drush_views_import($views = NULL) {
  if (!$views)
    $imports = array(DRUSH_VIEWS_DEFAULT_PATH);
  else
    $imports = explode(',', $views);
  // If the user specified a directory name, import all views from there.
  if (count($imports)==1) {
    $source_path = $imports[0];
    if (substr($source_path, -1) != "/")
      $source_path .= "/";
    if (is_dir($source_path)) {
      drush_log(dt("Importing all .view files from @source_path.",
                  array('@source_path' => $source_path)),
                'ok');
      $imports = glob($source_path ."*.view");
    }
  }
  foreach ($imports as $key => $filename) {
    if (!file_exists($filename)) {
      $new_filename = "$filename.view";
      if (file_exists($new_filename))
        $imports[$key] = $new_filename;
      else
        return drush_set_error('DRUSH_FRAMEWORK_ERROR',
                               dt("Cannot open file @filename or @new_filename.",
                                 array('@filename' => $filename,
                                 '@new_filename' => $new_filename)));
    }
  }
  // Initialize Views.
  views_include('view');
  foreach ($imports as $import) {
    drush_log(dt("- Importing views from file @filename.",
                array('@filename' => $import)),
              'ok');
    $code=file_get_contents("$import");
    $view = null;
    eval($code);
    if ($view == null) {
	drush_set_error("DRUSH_VIEWS_IMPORT_ERROR", t("ERROR: file does not contain a valid view definition (@filename).",
                        array('@filename' => $import)));
	continue;
    }
    drush_log(dt("  Importing view: @view",
                array('@view' => $view->name)),
              'ok');
    $skip = FALSE;
    if (is_object($old_view = views_get_view($view->name))) {
      if ($old_view->type == dt('Default'))
        drush_log(dt("    View @view is a default view, overriding.",
                    array('@view' => $old_view->name)),
                  'ok');
      else {
        drush_log(dt("    View @view already exists, deleting.",
                    array('@view' => $old_view->name)),
                  'ok');
        $old_view->delete();
        views_object_cache_clear('view', $view->name);
      }
    }
    drush_log(dt("    Saving new view @view.",
                array('@view' => $view->name)),
              'ok');
    $view->save();
    menu_rebuild();
    cache_clear_all('*', 'cache_views');
    cache_clear_all();
    views_object_cache_clear('view', $view->name);
  }
  drush_log(dt("Done."),'ok');
  return;
}

/**
 * Helper function to sort views by name.
 */
function _drush_views_name_sort($a, $b) {
  return ($a->name < $b->name ? -1 : 1);
}

/**
 * Helper function to filter views according to command-line arguments.
 */
function _drush_views_apply_filters($view, $status, $tag) {
  $tags=explode(',',$tag);
  return (
           (
             (!$status)
             || (strcasecmp($status, 'enabled') == 0 && !$view->disabled)
             || (strcasecmp($status, 'disabled') == 0 && $view->disabled)
           )
           &&
           (
             (!$tag)
             || ($view->tag && in_array($view->tag, $tags))
           )
         );
}

/**
 * Command callback: views-list.
 */
function drush_views_list() {
  $views = views_get_all_views();
  uasort($views, '_drush_views_name_sort');
  drush_print(dt("Available views:"));
  $status = drush_get_option('status');
  $tag = drush_get_option('tag');
  $table = array();
  $table[] = array("Name", "Type", "Status", "Tag");
  foreach ($views as $view) {
    if (_drush_views_apply_filters($view, $status, $tag)) {
      $table[] = array(
                       t("@view", array('@view' => $view->name)),
                       t("@type", array('@type' => $view->type)),
                       t("@enabled", array('@enabled' => ($view->disabled ? t("Disabled") : t("Enabled")))),
                       t("@tag", array('@tag' => ($view->tag ? dt($view->tag) : ""))),
                      );
    }
  }
  drush_print_table($table, TRUE);
  drush_print(dt("@views available, @matching_views matching.",
              array('@views' => format_plural(count($views), '1 view', '@count views'),
                    '@matching_views' => format_plural(count($table)-1, '1 view', '@count views'))));
  return;
}

/**
 * Command callback: views-delete.
 */
function drush_views_delete() {
  $args = func_get_args();
  if (!count($args)) {
    return drush_set_error('DRUSH_FRAMEWORK_ERROR',
                           dt("Provide the name of the view you would like to delete."));
  }
  else {
    $views = views_get_all_views();
    // Delete all views
    if (count($args) == 1 && $args[0] == 'ALL' && empty($views['ALL'])) {
      if (drush_confirm(dt("Do you really want to delete ALL normal/overridden views?"))) {
        foreach ($views as $view_name => $view) {
          if (in_array($view->type, array('Normal', 'Overridden'))) {
            $view->delete();
            views_object_cache_clear('view', $view_name);
          }
        }
        drush_log(dt("All normal/overridden views have been deleted."),'ok');
      }
      else {
        drush_log(dt("Aborted."),'warning');
	return;
      }
    }
    else {
      foreach ($args as $view_name) {
        if (!empty($views[$view_name])) {
          if (in_array($views[$view_name]->type, array('Normal', 'Overridden'))) {          
            $views[$view_name]->delete();
            views_object_cache_clear('view', $view_name);
            drush_log(dt("The view @view_name has been deleted.",
                        array('@view_name' => $view_name)),
                      'ok');
          }
          else
            drush_log(dt("The view @view_name is neither normal nor overridden: skipping.",
                        array('@view_name' => $view_name)),
                      'ok');
        }
        else
          drush_log(dt("Unknown view @view_name.",
                      array('@view_name' => $view_name)),
                    'warning');
      }
    }
  }
}

/**
 * Command callback: views-displays.
 */
function drush_views_displays($view_id = NULL) {
  if (!count(func_get_args())) {
    return drush_set_error('DRUSH_FRAMEWORK_ERROR',
                           dt("Provide the name of the view you would like to analyze."));
  }
  $view = views_get_view($view_id);
  if (empty($view)) {
    drush_log(dt("View '@view_id' not found. Try 'drush views-list' for available views.", array('@view_id' => $view_id)), 'error');
  }
  else {
    drush_print(dt("View displays:"));
    foreach ($view->display as $display_id => $display) {
      drush_print(dt("@display_id: @display_name, type: @display_type",
      array(
        '@display_id' => $display_id,
        '@display_name' => $display->display_title,
        '@display_type' => $display->display_plugin,
      )));
    }
  }
}

/**
 * Command callback: views-theme-functions.
 */
function drush_views_theme_functions($view_id=NULL, $display=NULL) {
  if (!count(func_get_args())) {
    return drush_set_error('DRUSH_FRAMEWORK_ERROR',
                           dt("Provide the name of the view you would like to analyze."));
  }
  $view = views_get_view($view_id);
  if (empty($view)) {
    drush_log(dt("View '@view_id' not found. Try drush views-list for available views.", array('@view_id' => $view_id)), 'error');
  }
  elseif (!isset($view->display[$display])) {
    drush_log(dt("There is no such display '@display_id' in this view. Use 'drush views-displays @view_id' to get a list of available displays.",
                 array('@view_id' => $view_id, '@display_id'=>$display)), 'error');
  }
  else {
    drush_print(dt("Theme functions in trigger order:"));
    $theme = variable_get('theme_default', 'garland');
    $themes = views_theme_functions($theme, $view, $view->display[$display]);
    foreach ($themes as $theme_function) {
      drush_print(dt("  @theme_function", array('@theme_function' => $theme_function))); 
    }
  }
}

/**
 * Command callback: views-copy-options.
 */
function drush_views_copy_options($source_name = NULL, $field_list = NULL, $destination_names = NULL) {
  if (!$source_name) {
    drush_set_error(t("Provide at least a source view."));
    return;
  }

  // Set up options.
  $source_display = drush_get_option('source-display');
  if (!$source_display) {
    $source_display = 'default';
  }
  $destination_display = drush_get_option('destination-display');
  if (!$destination_display) {
    $destination_display = $source_display;
  }

  // Load source view and do basic checks.
  views_include('view');
  $source_view = views_get_view($source_name);
  if (!$source_view) {
    drush_set_error(t("Cannot find source view '@source_name'.",
      array('@source_name' => $source_name)));
    return;
  }
  if (!isset($source_view->display[$source_display])) {
    drush_set_error(t("No such display '@display' for view '@view_name'. Run drush views-displays '@view_name' to list available displays.", array(
      '@view_name' => $source_name,
      '@display'   => $source_display
    )));
    return;
  }

  $available_fields = array_keys($source_view->display[$source_display]->display_options);
  
  // Display list of available displays and fields.
  if (!$field_list || !$destination_names) {
    $available_displays = array_keys($source_view->display);
    drush_print(t("Available displays for view '@view_name':\n @display_list\n", array(
      '@view_name' => $source_name, 
      '@display_list' => implode(', ', $available_displays),
    )));

    drush_print(t("Available options to copy for view '@view_name' and display '@display':\n @fields", array(
      '@view_name' => $source_name,
      '@display'  => $source_display,
      '@fields'    => implode(', ', $available_fields),
    )));
    return;
  }

  // Check the list of fields to copy.
  $fields = explode(',', $field_list);
  $fields_to_copy = array();
  $missing_fields = array();
  foreach ($fields as $field) {
    $field = trim($field);

    if (!in_array($field, $available_fields)) {
      $missing_fields[] = $field;
    } else {
      $fields_to_copy[] = $field;
    }
  }

  if (count($missing_fields)) {
    drush_print(t("The following options are not available in the source view and will not be copied:\n @fields", array('@fields' => implode(', ', $missing_fields))));
    if (!drush_confirm(t("Do you want to continue importing the remaining options?"))) {
      drush_log("Aborting view copy.", 'warning');
      return;
    }
  }
  if (empty($fields_to_copy)) {
    drush_set_error("No options to copy. Aborting view-copy.");
    return;
  }

  // Potentially there could be problems with some plugins - it's hard to tell,
  // so better warn the user first !
  if (!drush_confirm(t("This could potentially damage your database. If you have not tried this before with your current set of fields and views plugin, it would be safe to backup your database first. Do you want to go ahead ?"))) {
    drush_log("Aborting view copy.", 'warning');
    return;
  }

  foreach(explode(",",$destination_names) as $destination_name) {
    $destination_view = views_get_view(trim($destination_name));
    if (!$destination_view) {
      drush_log(t("Could not find destination view '@view'. Skipping.",
        array('@view' => $destination_view)), 'warning');
      continue;
    }

    if (!isset($destination_view->display[$destination_display])) {
      drush_print(t("Could not find display '@display' for destination view '@view'. Skipping.", 
        array('@view' => $destination_view, '@display' => $destination_display)
      ), 'warning');
      continue;
    }

    $missing_fields = array();
    foreach ($fields_to_copy as $field) {
      if (!isset($destination_view->display[$destination_display]->display_options[$field])) {
        $missing_fields[] = $field;
      } else {
        $destination_view->display[$destination_display]->display_options[$field] =
          $source_view->display[$destination_display]->display_options[$field];
      }
    }
    $destination_view->save();
    views_object_cache_clear('view', $view->name);

    if (count($missing_fields)) {
      drush_log(t("The following options were not present in destination view '@view' and display '@display', and so were not copied:\n @fields",
        array('@view' => $destination_name,
              '@display' => $destination_display,
              '@fields' => implode(', ', $missing_fields))
      ), 'warning');
    }
    drush_log(t("Destination view '@view' was saved.", array('@view' => $destination_name)), 'ok');
  }

  menu_rebuild();
  cache_clear_all('*', 'cache_views');
  cache_clear_all();
  drush_log("Views copy-options finished, and cache was cleared.", 'ok');
}
