<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function ft_event_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mc_node_event';
  $context->description = 'blocks for looks for event node';
  $context->tag = 'Node';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '0',
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
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Node');
  t('blocks for looks for event node');
  $export['mc_node_event'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'my_events';
  $context->description = '';
  $context->tag = 'Events';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events/my-events' => 'events/my-events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ft_event-user-events-calender' => array(
          'module' => 'ft_event',
          'delta' => 'user-events-calender',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  $export['my_events'] = $context;

  return $export;
}
