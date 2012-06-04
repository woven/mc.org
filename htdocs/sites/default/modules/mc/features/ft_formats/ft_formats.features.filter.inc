<?php

/**
 * Implementation of hook_filter_default_formats().
 */
function ft_formats_filter_default_formats() {
  $formats = array();

  // Exported format: Femail mail message
  $formats['Femail mail message'] = array(
    'name' => 'Femail mail message',
    'roles' => array(
      '0' => 'authenticated user',
    ),
    'filters' => array(
      '0' => array(
        'module' => 'filter',
        'delta' => '0',
        'weight' => '-10',
      ),
      '1' => array(
        'module' => 'filter',
        'delta' => '1',
        'weight' => '-9',
      ),
      '2' => array(
        'module' => 'filter',
        'delta' => '2',
        'weight' => '-8',
      ),
      '3' => array(
        'module' => 'femail',
        'delta' => '0',
        'weight' => '-7',
      ),
      '4' => array(
        'module' => 'femail',
        'delta' => '1',
        'weight' => '-6',
      ),
    ),
  );

  // Exported format: PHP code
  $formats['PHP code'] = array(
    'name' => 'PHP code',
    'roles' => array(),
    'filters' => array(
      '0' => array(
        'module' => 'php',
        'delta' => '0',
        'weight' => '0',
      ),
      '1' => array(
        'module' => 'swftools',
        'delta' => '0',
        'weight' => '10',
      ),
    ),
  );

  // Exported format: Rich
  $formats['Rich'] = array(
    'name' => 'Rich',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'Publisher',
    ),
    'filters' => array(),
  );

  // Exported format: Basic
  $formats['Basic'] = array(
    'name' => 'Basic',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'group manager',
      '4' => 'Publisher',
    ),
    'filters' => array(
      '0' => array(
        'module' => 'filter',
        'delta' => '2',
        'weight' => '0',
      ),
      '1' => array(
        'module' => 'filter',
        'delta' => '0',
        'weight' => '1',
      ),
      '2' => array(
        'module' => 'filter',
        'delta' => '1',
        'weight' => '2',
      ),
      '3' => array(
        'module' => 'filter',
        'delta' => '3',
        'weight' => '10',
      ),
    ),
  );

  // Exported format: Plain
  $formats['Plain'] = array(
    'name' => 'Plain',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'group manager',
      '4' => 'Publisher',
    ),
    'filters' => array(
      '0' => array(
        'module' => 'filter',
        'delta' => '1',
        'weight' => '2',
      ),
    ),
  );

  return $formats;
}
