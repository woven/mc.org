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
        'mc_directory-switch' => array(
          'module' => 'mc_directory',
          'delta' => 'switch',
          'region' => 'content',
          'weight' => 0,
        ),
        'views-directory_taxonomy-block_1' => array(
          'module' => 'views',
          'delta' => 'directory_taxonomy-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'mc_directory-bysize' => array(
          'module' => 'mc_directory',
          'delta' => 'bysize',
          'region' => 'right',
          'weight' => 1,
        ),
        'mc_directory-bytag' => array(
          'module' => 'mc_directory',
          'delta' => 'bytag',
          'region' => 'right',
          'weight' => 2,
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
        'blocks' => array(
          'mc_directory-switch' => array(
            'class' => '',
          ),
        ),
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
          'mc_directory-bysize' => array(
            'class' => 'ghh-menu-items',
          ),
          'mc_directory-bytag' => array(
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
      'class' => 'mc-directory block-titled',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('directory');
  $export['directory'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'directory_map';
  $context->description = '';
  $context->tag = 'directory';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'directory/map' => 'directory/map',
        'directory/map/*' => 'directory/map/*',
      ),
    ),
  );
  $context->reactions = array(
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'mc-directory block-titled mc-directory-map',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('directory');
  $export['directory_map'] = $context;

  return $export;
}
