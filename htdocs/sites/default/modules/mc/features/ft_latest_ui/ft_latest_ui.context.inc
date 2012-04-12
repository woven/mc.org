<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function ft_latest_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'latest_event_landing';
  $context->description = '';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'latest/events/*' => 'latest/events/*',
        'latest/events' => 'latest/events',
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
      'class' => 'latest-page',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  $export['latest_event_landing'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'latest_landing';
  $context->description = 'Latest Stuff';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'latest' => 'latest',
        'latest/*' => 'latest/*',
        'latest/*/*' => 'latest/*/*',
      ),
    ),
    'php' => array(
      'values' => array(
        0 => TRUE,
      ),
      'options' => array(
        'phpcode' => 'if (arg(0)=="latest" && arg(1)!="events")
{
	return "all";
}',
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
    'menu' => 'latest',
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'latest-page',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Latest Stuff');
  t('Pages');
  $export['latest_landing'] = $context;

  return $export;
}
