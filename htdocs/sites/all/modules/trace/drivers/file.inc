<?php
// $Id: file.inc,v 1.3 2008/07/07 16:16:14 incanus Exp $

/**
 * @file
 * Output driver for writing trace messages into a text file.
 */

//////////////////////////////////////////////////////////////////////////////

/**
 * Implements hook_trace().
 */
function trace_file_trace($type, $msg, $time = NULL) {
  $type = sprintf('%-7s', strtoupper($type));
  $time = _trace_format_timedelta($time);
  $header = sprintf(TRACE_FORMAT, TRACE_ID, $time, $type) . ' ';

  if (!is_array($msg)) {
    $output = $header . $msg;
  }
  else {
    $output = array($header . array_shift($msg));
    foreach ($msg as $line) {
      $output[] = str_repeat(' ', strlen($header)) . $line;
    }
    $output = implode("\n", $output);
  }

  if (($file = fopen(TRACE_FILE, 'ab'))) {
    fwrite($file, $output . "\n");
    fclose($file);
  }
}

//////////////////////////////////////////////////////////////////////////////
