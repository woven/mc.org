<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function mc_directory_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'directory';
  $context->description = '';
  $context->tag = 'directory';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'directory' => 'directory',
        'directory/*' => 'directory/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-directory_taxonomy-block_1' => array(
          'module' => 'views',
          'delta' => 'directory_taxonomy-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'mc_directory-0' => array(
          'module' => 'mc_directory',
          'delta' => 0,
          'region' => 'right',
          'weight' => 1,
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
          'views-directory_taxonomy-block_1' => array(
            'class' => 'ghh-menu-items',
          ),
          'mc_directory-0' => array(
            'class' => 'ghh-menu-items',
          ),
        ),
      ),
      'below_content' => array(
        'class' => '',
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
      'class' => 'mc-directory',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('directory');
  $export['directory'] = $context;

  return $export;
}
