<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function ft_latest_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_latest';
  $context->description = 'Context that holds all the elements for the latest pages, except latest/events';
  $context->tag = 'latest';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'latest' => 'latest',
        'latest/*' => 'latest/*',
        'latest/*/*' => 'latest/*/*',
        '~latest/events' => '~latest/events',
        '~latest/events/*' => '~latest/events/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-latest_by_topic' => array(
          'module' => 'boxes',
          'delta' => 'latest_by_topic',
          'region' => 'right',
          'weight' => 0,
        ),
        'boxes-latest_by_type' => array(
          'module' => 'boxes',
          'delta' => 'latest_by_type',
          'region' => 'right',
          'weight' => 1,
        ),
        'boxes-latest_page_title' => array(
          'module' => 'boxes',
          'delta' => 'latest_page_title',
          'region' => 'above_content',
          'weight' => 0,
        ),
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'latest-page block-titled',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context that holds all the elements for the latest pages, except latest/events');
  t('latest');
  $export['landing_latest'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_latest_events';
  $context->description = 'latest/events/* blocks';
  $context->tag = 'latest';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'latest/events' => 'latest/events',
        'latest/events/*' => 'latest/events/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-browse-by-date' => array(
          'module' => 'menu',
          'delta' => 'menu-browse-by-date',
          'region' => 'right',
          'weight' => 0,
        ),
        'boxes-latest_by_topic' => array(
          'module' => 'boxes',
          'delta' => 'latest_by_topic',
          'region' => 'right',
          'weight' => 1,
        ),
        'boxes-latest_by_type' => array(
          'module' => 'boxes',
          'delta' => 'latest_by_type',
          'region' => 'right',
          'weight' => 2,
        ),
        'boxes-latest_page_title' => array(
          'module' => 'boxes',
          'delta' => 'latest_page_title',
          'region' => 'above_content',
          'weight' => 0,
        ),
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'latest-page block-titled',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('latest');
  t('latest/events/* blocks');
  $export['landing_latest_events'] = $context;

  return $export;
}
