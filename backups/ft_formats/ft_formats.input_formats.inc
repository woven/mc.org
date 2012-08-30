<?php

/**
 * Implementation of hook_input_formats().
 */
function ft_formats_input_formats() {
  $input_formats = array();

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'Rich';
  $input_format->roles = array(
    4 => 'administrator',
    3 => 'Publisher',
  );
  $input_format->cache = TRUE;
  $input_format->settings = array(
  );
  $input_format->filters = array(
  );
  $input_format->machine = 'full_html';
  $input_formats['full_html'] = $input_format;

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'Basic';
  $input_format->roles = array(
    1 => 'anonymous user',
    2 => 'authenticated user',
    4 => 'administrator',
    5 => 'group manager',
    3 => 'Publisher',
  );
  $input_format->cache = TRUE;
  $input_format->settings = array(
    // Settings for: filter module
    'filter' => array(
      // Filter HTML tags
      'filter_html' => '1',
      // Allowed HTML tags
      'allowed_html' => '<a> <em> <strong> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd> <i> <b> <p> <img> <h2> <h3> <h4> <h5>',
      // Display HTML help
      'filter_html_help' => 1,
      // Spam link deterrent
      'filter_html_nofollow' => 1,
    ),
  );
  $input_format->filters = array(
    'filter' => array(
      // Delta => Weight for: URL filter
      '2' => '0',
      // Delta => Weight for: HTML filter
      '0' => '1',
      // Delta => Weight for: Line break converter
      '1' => '2',
      // Delta => Weight for: HTML corrector
      '3' => '10',
    ),
  );
  $input_format->machine = 'filtered_html';
  $input_formats['filtered_html'] = $input_format;

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'Plain';
  $input_format->roles = array(
    1 => 'anonymous user',
    2 => 'authenticated user',
    4 => 'administrator',
    5 => 'group manager',
    3 => 'Publisher',
  );
  $input_format->cache = TRUE;
  $input_format->settings = array(
  );
  $input_format->filters = array(
    'filter' => array(
      // Delta => Weight for: Line break converter
      '1' => '2',
    ),
  );
  $input_format->machine = 'plain';
  $input_formats['plain'] = $input_format;

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'Femail mail message';
  $input_format->roles = array(
    2 => 'authenticated user',
  );
  $input_format->cache = TRUE;
  $input_format->settings = array(
    // Settings for: filter module
    'filter' => array(
      'filter_url_length' => '72',
    ),
  );
  $input_format->filters = array(
    'filter' => array(
      '0' => '-10',
      '1' => '-9',
      '2' => '-8',
    ),
    'femail' => array(
      '0' => '-7',
      '1' => '-6',
    ),
  );
  $input_format->machine = 'femail_mail_message';
  $input_formats['femail_mail_message'] = $input_format;

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'PHP code';
  $input_format->roles = array();
  $input_format->cache = FALSE;
  $input_format->settings = array(
  );
  $input_format->filters = array(
    'php' => array(
      '0' => '0',
    ),
  );
  $input_format->machine = 'php_code';
  $input_formats['php_code'] = $input_format;

  return $input_formats;

}
