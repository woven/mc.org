<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function ft_news_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_news';
  $context->description = 'Context that contains the reactions to display the News Landing Page properly';
  $context->tag = 'Landing';
  $context->conditions = array(
    'php' => array(
      'values' => array(
        0 => TRUE,
      ),
      'options' => array(
        'phpcode' => 'return _is_landingpage(\'news\');',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-help_block-block_1' => array(
          'module' => 'views',
          'delta' => 'help_block-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-mc_news_sections-block_3' => array(
          'module' => 'views',
          'delta' => 'mc_news_sections-block_3',
          'region' => 'below_content',
          'weight' => 0,
        ),
      ),
    ),
    'block_class' => array(
      'header' => array(
        'class' => '',
      ),
      'branding' => array(
        'class' => '',
      ),
      'featured' => array(
        'class' => '',
      ),
      'group_logo' => array(
        'class' => '',
      ),
      'footer' => array(
        'class' => '',
      ),
      'content' => array(
        'class' => '',
      ),
      'left' => array(
        'class' => '',
      ),
      'right' => array(
        'class' => '',
        'blocks' => array(
          'views-help_block-block_1' => array(
            'class' => 'important',
          ),
        ),
      ),
      'below_content' => array(
        'class' => '',
        'blocks' => array(
          'views-mc_events_sections-block_3' => array(
            'class' => '',
          ),
        ),
      ),
      'above_content' => array(
        'class' => '',
      ),
      'content_top' => array(
        'class' => '',
      ),
      'content_bottom' => array(
        'class' => '',
      ),
      'footer_above' => array(
        'class' => '',
      ),
      'overlay' => array(
        'class' => '',
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'two-columns',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context that contains the reactions to display the News Landing Page properly');
  t('Landing');
  $export['landing_news'] = $context;

  return $export;
}
