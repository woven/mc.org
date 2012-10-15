<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function mc_company_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mc_company';
  $context->description = '';
  $context->tag = 'node';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'company' => 'company',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds-f75e0974f5723f830348fb4d9444931b' => array(
          'module' => 'ds',
          'delta' => 'f75e0974f5723f830348fb4d9444931b',
          'region' => 'right',
          'weight' => 0,
        ),
        'ds-3cc955558f2299879e4f9d02f84134bd' => array(
          'module' => 'ds',
          'delta' => '3cc955558f2299879e4f9d02f84134bd',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('node');
  $export['mc_company'] = $context;

  return $export;
}
