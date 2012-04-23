<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function ft_landing_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_events';
  $context->description = 'Context that contains the reactions to display the Events Landing Page properly';
  $context->tag = 'Landing';
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
        'views-popular_places-block_2' => array(
          'module' => 'views',
          'delta' => 'popular_places-block_2',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-featured_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_blocks-block_1',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context that contains the reactions to display the Events Landing Page properly');
  t('Landing');
  $export['landing_events'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_homepage';
  $context->description = 'Context that contains the reactions to display the homepage properly';
  $context->tag = 'Landing';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-featured_blocks-block_4' => array(
          'module' => 'views',
          'delta' => 'featured_blocks-block_4',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-featured_blocks-block_5' => array(
          'module' => 'views',
          'delta' => 'featured_blocks-block_5',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-og_community-block_2' => array(
          'module' => 'views',
          'delta' => 'og_community-block_2',
          'region' => 'right',
          'weight' => 2,
        ),
        'views-featured_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_blocks-block_1',
          'region' => 'below_content',
          'weight' => 0,
        ),
        'views-featured_blocks-block_2' => array(
          'module' => 'views',
          'delta' => 'featured_blocks-block_2',
          'region' => 'below_content',
          'weight' => 1,
        ),
        'views-featured_blocks-block_3' => array(
          'module' => 'views',
          'delta' => 'featured_blocks-block_3',
          'region' => 'below_content',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context that contains the reactions to display the homepage properly');
  t('Landing');
  $export['landing_homepage'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_places';
  $context->description = 'Context that contains the reactions to display the Places Landing Page properly';
  $context->tag = 'Landing';
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
        'views-og_community-block_3' => array(
          'module' => 'views',
          'delta' => 'og_community-block_3',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-featured_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_blocks-block_1',
          'region' => 'right',
          'weight' => 1,
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
  t('Context that contains the reactions to display the Places Landing Page properly');
  t('Landing');
  $export['landing_places'] = $context;

  return $export;
}
