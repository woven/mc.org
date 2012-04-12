<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function ft_place_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'place';
  $context->description = '';
  $context->tag = 'nodes';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        '_none_' => '_none_',
      ),
      'options' => array(
        'node_form' => 0,
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
  t('nodes');
  $export['place'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'places_landing';
  $context->description = 'Places landing page';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'places' => 'places',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-c0b666eedc067e09bad1ad53b31d821a' => array(
          'module' => 'views',
          'delta' => 'c0b666eedc067e09bad1ad53b31d821a',
          'region' => 'featured',
          'weight' => 0,
        ),
        'block-27' => array(
          'module' => 'block',
          'delta' => 27,
          'region' => 'right',
          'weight' => 0,
        ),
        'views-activity_stream-block_5' => array(
          'module' => 'views',
          'delta' => 'activity_stream-block_5',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-home_featured-block_1' => array(
          'module' => 'views',
          'delta' => 'home_featured-block_1',
          'region' => 'right',
          'weight' => 2,
        ),
        'views-popular_places-block_1' => array(
          'module' => 'views',
          'delta' => 'popular_places-block_1',
          'region' => 'below_content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  t('Places landing page');
  $export['places_landing'] = $context;

  return $export;
}
