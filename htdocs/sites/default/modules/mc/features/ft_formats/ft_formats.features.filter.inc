<?php

/**
 * Implementation of hook_filter_default_formats().
 */
function ft_formats_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML
  $formats['Filtered HTML'] = array(
    'name' => 'Filtered HTML',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
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

  // Exported format: Full HTML
  $formats['Full HTML'] = array(
    'name' => 'Full HTML',
    'roles' => array(),
    'filters' => array(
      '0' => array(
        'module' => 'filter',
        'delta' => '2',
        'weight' => '0',
      ),
      '1' => array(
        'module' => 'filter',
        'delta' => '1',
        'weight' => '1',
      ),
      '2' => array(
        'module' => 'filter',
        'delta' => '3',
        'weight' => '10',
      ),
    ),
  );

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
    ),
  );

  return $formats;
}
