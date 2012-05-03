<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function ft_place_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'node_place';
  $context->description = 'This node has a custom block for Places page.';
  $context->tag = 'Node';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        '_none_' => '_none_',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'node' => array(
      'values' => array(
        'place' => 'place',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds-bf71adff8bdebc9c46bf7e6772aa3eca' => array(
          'module' => 'ds',
          'delta' => 'bf71adff8bdebc9c46bf7e6772aa3eca',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Node');
  t('This node has a custom block for Places page.');
  $export['node_place'] = $context;

  return $export;
}
