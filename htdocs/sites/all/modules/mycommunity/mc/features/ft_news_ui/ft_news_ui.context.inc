<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function ft_news_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'node_news';
  $context->description = 'Context that contains the reactions to display the News nodes properly';
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
        'nnews' => 'nnews',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-join_mc' => array(
          'module' => 'boxes',
          'delta' => 'join_mc',
          'region' => 'right',
          'weight' => 0,
        ),
        'quicktabs-browse_by' => array(
          'module' => 'quicktabs',
          'delta' => 'browse_by',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context that contains the reactions to display the News nodes properly');
  t('Node');
  $export['node_news'] = $context;

  return $export;
}
