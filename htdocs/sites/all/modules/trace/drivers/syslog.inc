<?php
// $Id: syslog.inc,v 1.3 2008/07/07 16:16:14 incanus Exp $

/**
 * @file
 * Output driver for generating system log events for trace messages.
 */

//////////////////////////////////////////////////////////////////////////////

/**
 * Implements hook_trace().
 */
function trace_syslog_trace($type, $msg, $time = NULL) {
  $type = sprintf('%-7s', strtoupper($type));
  $time = _trace_format_timedelta($time);
  $header = sprintf(TRACE_FORMAT, TRACE_ID, $time, $type) . ' ';

  if (!is_array($msg)) {
    $output = array($header . $msg);
  }
  else {
    $output = array($header . array_shift($msg));
    foreach ($msg as $line) {
      $output[] = str_repeat(' ', strlen($header)) . $line;
    }
  }

  static $initialized = FALSE;
  if (!$initialized) {
    define_syslog_variables();
    openlog('drupal', LOG_ODELAY, LOG_USER);
    $initialized = TRUE;
  }

  $priority = _trace_syslog_get_priority($type);
  foreach ($output as $line) {
    syslog($priority, $line);
  }
}

function _trace_syslog_get_priority($type) {
  //return LOG_NOTICE;
  static $priorities = array(
    'fatal'  => LOG_CRIT,
    'error'  => LOG_ERR,
    'warn'   => LOG_WARNING,
    'notice' => LOG_NOTICE,
    'start'  => LOG_INFO,
    'exit'   => LOG_INFO,
    'debug'  => LOG_DEBUG,
    'hook'   => LOG_DEBUG,
    'query'  => LOG_DEBUG,
    'stats'  => LOG_DEBUG,
  );
  return isset($priorities[$type]) ? $priorities[$type] : LOG_INFO;
}

//////////////////////////////////////////////////////////////////////////////
