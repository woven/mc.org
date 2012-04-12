<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function ft_event_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events_landing';
  $context->description = 'Events landing page';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events' => 'events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-8153b54e6b4c0940c20bd387ad38c811' => array(
          'module' => 'views',
          'delta' => '8153b54e6b4c0940c20bd387ad38c811',
          'region' => 'featured',
          'weight' => 0,
        ),
        'block-26' => array(
          'module' => 'block',
          'delta' => 26,
          'region' => 'right',
          'weight' => 0,
        ),
        'views-popular_places-block_2' => array(
          'module' => 'views',
          'delta' => 'popular_places-block_2',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-home_featured-block_1' => array(
          'module' => 'views',
          'delta' => 'home_featured-block_1',
          'region' => 'right',
          'weight' => 2,
        ),
        'block-39' => array(
          'module' => 'block',
          'delta' => 39,
          'region' => 'below_content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Events landing page');
  t('Pages');
  $export['events_landing'] = $context;

  return $export;
}
