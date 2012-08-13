<?php
// $Id: trace.admin.inc,v 1.8 2009/09/18 14:49:44 arto Exp $

/**
 * @file
 * All the code for the Trace module's administrative interface.
 */

//////////////////////////////////////////////////////////////////////////////

/**
 * Implements hook_settings(). Declare administrative settings for a module.
 */
function trace_settings_form($form = array()) {
  // Make sure the output file exists to prevent chaos later on
  $trace_output = (!empty($_POST['edit']) ? $_POST['edit']['trace_file'] : TRACE_OUTPUT);
  if ($trace_output == 'file') {
    $trace_file = (!empty($_POST['edit']) ? $_POST['edit']['trace_file'] : TRACE_FILE);
    $trace_dir = dirname($trace_file); // to avoid E_STRICT on file_check_directory()
    file_check_directory($trace_dir, TRUE, 'trace_file');
  }

  // Parse hooks.ini and compose a list of available hooks:
  $hook_choices = array();
  foreach (trace_hook_data() as $module => $hooks) {
    if ($module == 'drupal' || module_exists($module)) {
      foreach ($hooks as $hook => $versions) {
        if (array_search('6.x', explode(', ', $versions)) !== FALSE) {
          $package = ($module == 'drupal' ? 'Core' : 'Other');
          $hook_choices[$hook] = t($package . ' - ' . $hook);
        }
      }
    }
  }

  // Trace status
  $form['status'] = array('#type' => 'fieldset', '#title' => t('Trace status'));
  $form['status']['trace_enabled'] = array(
    '#type'          => 'radios',
    '#title'         => t('Activate tracing'),
    '#default_value' => (int)TRACE_ENABLED,
    '#options'       => array(FALSE => t('Disabled'), TRUE => t('Enabled')),
    '#description'   => t('This option determines whether tracing should be activated or not. When inactive, no tracing code is injected into any hooks and no trace output is generated. The performance impact of having this module enabled but not activated is infinitesimal.'),
  );

  // Page filter settings
  $form['filter'] = array('#type' => 'fieldset', '#title' => t('Page filter settings'), '#collapsible' => TRUE, '#collapsed' => TRUE);
  $form['filter']['trace_filter'] = array(
    '#type'          => 'radios',
    '#title'         => t('Trace only specific pages'),
    '#options'       => array(t('Trace every page except the listed pages.'), t('Trace only the listed pages.')),
    '#default_value' => TRACE_FILTER,
  );
  $form['filter']['trace_pages'] = array(
    '#type'          => 'textarea',
    '#title'         => t('Pages'),
    '#default_value' => TRACE_PAGES,
    '#description'   => t("Enter one page per line as Drupal paths. The '*' character is a wildcard. Example paths are %blog for the blog page and %blog-wildcard for every personal blog. %front is the front page.", array('%blog' => 'blog', '%blog-wildcard' => 'blog/*', '%front' => '<front>')),
  );

  // Output settings
  $form['output'] = array('#type' => 'fieldset', '#title' => t('Output settings'), '#collapsible' => TRUE, '#collapsed' => TRUE);
  $form['output']['trace_output'] = array(
    '#type'          => 'select',
    '#title'         => t('Output driver'),
    '#default_value' => TRACE_OUTPUT,
    '#options'       => array('' => t('None'), 'file' => t('File'), 'syslog' => t('Syslog')/*, 'socket' => t('Socket')*/),
    '#description'   => t('Where the write trace output should be written. The <tt>File</tt> option indicates a regular text file in the file system, which is the most convenient option for development purposes. <tt>Syslog</tt> sends trace output to the Unix system log, which may come useful in more advanced production setups.'),
  );
  if (TRACE_OUTPUT == 'file') {
    $form['output']['trace_file'] = array(
      '#type'          => 'textfield',
      '#title'         => t('Output file'),
      '#default_value' => TRACE_FILE,
      '#size'          => 60,
      '#maxlength'     => 255,
      '#required'      => TRUE,
      '#description'   => t('A file system path where the trace output should be written to. The path can either be relative to the Drupal installation directory or absolute, and the directory the file is located in must be writable by Drupal. Common values would be <tt>sites/default/files/trace.log</tt> or <tt>/tmp/trace.log</tt>.'),
    );
  }

  // Error handling
  $form['error'] = array('#type' => 'fieldset', '#title' => t('Error handling'), '#collapsible' => TRUE, '#collapsed' => TRUE);
  $form['error']['trace_errors'] = array(
    '#type'          => 'checkboxes',
    '#title'         => t('Trace PHP errors'),
    '#default_value' => array_filter(variable_get('trace_errors', array()), 'is_string'),
    '#options'       => array('error' => t('Errors (E_RECOVERABLE_ERROR, E_USER_ERROR)'), 'warning' => t('Warnings (E_WARNING, E_USER_WARNING)'), 'notice' => t('Notices (E_STRICT, E_NOTICE, E_USER_NOTICE)')),
    '#description'   => t('Extends Drupal\'s error handler to be able to trace notices, warnings and errors with an optional full stack trace.'),
  );

  // Watchdog messages
  $form['watchdog'] = array('#type' => 'fieldset', '#title' => t('Watchdog messages'), '#collapsible' => TRUE, '#collapsed' => TRUE);
  $form['watchdog']['trace_watchdog'] = array(
    '#type'          => 'checkboxes',
    '#title'         => t('Trace watchdog messages'),
    '#default_value' => array_filter(variable_get('trace_watchdog', array()), 'is_string'),
    '#options'       => array('notice' => t('Notices')),
    '#description'   => t('Tracing of watchdog messages has not yet been implemented.'), // TODO
    '#attributes'    => array('disabled' => 'disabled'),
  );
  // TODO: input box for comma-separated list of watchdog message types?

  // Database queries
  $form['queries'] = array('#type' => 'fieldset', '#title' => t('Database queries'), '#collapsible' => TRUE, '#collapsed' => TRUE);
  $form['queries']['trace_queries'] = array(
    '#type'          => 'checkboxes',
    '#title'         => t('Trace SQL queries'),
    '#default_value' => array_filter(variable_get('trace_queries', array()), 'is_string'),
    '#options'       => array('select' => t('SELECT queries'), 'insert' => t('INSERT queries'), 'update' => t('UPDATE queries'), 'delete' => t('DELETE queries'), 'misc' => t('Other queries')),
    '#description'   => t(''), // TODO
  );

  // Module hooks
  $form['hooks'] = array('#type' => 'fieldset', '#title' => t('Module hooks'), '#collapsible' => TRUE, '#collapsed' => TRUE);
  $form['hooks']['trace_hooks'] = array(
    '#type'          => 'checkboxes',
    '#title'         => t('Trace hook invocations'),
    '#default_value' => array_filter(variable_get('trace_hooks', array()), 'is_string'),
    '#options'       => $hook_choices,
    '#description'   => t('Tracing a hook entails having the Trace module dynamically implement that hook and logging all invocations and their associated arguments. <strong>Note:</strong> be very careful with this setting, as it is easy to accidentally WSOD (white screen of death) your Drupal installation by enabling the tracing of certain hooks without having a corresponding page filter (see above) set to limit and contain the effect. You should <strong>not</strong> attempt to enable tracing for all hooks in one go, but rather proceed one by one as necessary. You should also be aware that tracing hook invocations will slow down the performance of your site some, especially when tracing any frequently-invoked core hook.'),
  );

  // Advanced settings
  $form['advanced'] = array('#type' => 'fieldset', '#title' => t('Advanced settings'), '#collapsible' => TRUE, '#collapsed' => TRUE);
  $form['advanced']['trace_request'] = array(
    '#type'          => 'radios',
    '#title'         => t('Include request begin/end times'),
    '#default_value' => (int)TRACE_REQUEST,
    '#options'       => array(FALSE => t('Disabled'), TRUE => t('Enabled')),
    '#description'   => t('Whether to output information on the start and stop of each page request. This is generally a good idea, so it is enabled by default. However, you may want to disable this if you want the absolute minimum possible output under normal operation with, say, only critical errors being logged.'),
  );
  $form['advanced']['trace_debug'] = array(
    '#type'          => 'radios',
    '#title'         => t('Include debug output'),
    '#default_value' => (int)TRACE_DEBUG,
    '#options'       => array(FALSE => t('Disabled'), TRUE => t('Enabled')),
    '#description'   => t('Whether to include additional debugging output, such as the values of the PHP superglobals upon the start of the page request.'),
  );
  $form['advanced']['trace_stacktrace'] = array(
    '#type'          => 'radios',
    '#title'         => t('Include stack traces'),
    '#default_value' => (int)TRACE_STACKTRACE,
    '#options'       => array(FALSE => t('Disabled'), TRUE => t('Enabled')),
    '#description'   => t('Whether to include a full stack trace where possible (such as on Drupal hook invocations and PHP errors). Note that while very useful for debugging, this does significantly enlarge the trace messages and slow down tracing as a whole.'),
  );
  $form['advanced']['trace_max_string'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Maximum string length'),
    '#default_value' => TRACE_MAX_STRING,
    '#size'          => 6,
    '#maxlength'     => 10,
    '#description'   => t('Specify a maximum character count limit for string arguments in stack trace output. Leaving this empty will output the entire string, which can result in the trace output quickly growing very large. Note that this setting has no effect unless stack traces are enabled.'),
  );
  $form['advanced']['trace_errorline'] = array(
    '#type'          => 'radios',
    '#title'         => t('Include error source line'),
    '#default_value' => (int)TRACE_ERRORLINE,
    '#options'       => array(FALSE => t('Disabled'), TRUE => t('Enabled')),
    '#description'   => t('Whether to include the source code for the line and file where the PHP error occurred.'),
  );

  return system_settings_form($form);
}

//////////////////////////////////////////////////////////////////////////////
