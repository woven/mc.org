<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function mt_event_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mt_node_event';
  $context->description = '';
  $context->tag = 'MiamiTech/Node';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds-0b596e3199de270de74a2f6e8f0d1525' => array(
          'module' => 'ds',
          'delta' => '0b596e3199de270de74a2f6e8f0d1525',
          'region' => 'right',
          'weight' => 0,
        ),
        'ds-5c755d31699c072160e29da9599e28f3' => array(
          'module' => 'ds',
          'delta' => '5c755d31699c072160e29da9599e28f3',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('MiamiTech/Node');
  $export['mt_node_event'] = $context;

  return $export;
}
