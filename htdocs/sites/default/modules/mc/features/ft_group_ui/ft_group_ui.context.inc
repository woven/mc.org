<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function ft_group_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_homepage';
  $context->description = 'Group homepage (not including node edit)';
  $context->tag = 'groups';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'group' => 'group',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-og_details-block_3' => array(
          'module' => 'views',
          'delta' => 'og_details-block_3',
          'region' => 'group_logo',
          'weight' => 0,
        ),
        'og_menu-0' => array(
          'module' => 'og_menu',
          'delta' => 0,
          'region' => 'left',
          'weight' => 0,
        ),
        'views-og_details-block_4' => array(
          'module' => 'views',
          'delta' => 'og_details-block_4',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-activity_stream-block_2' => array(
          'module' => 'views',
          'delta' => 'activity_stream-block_2',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-og_posts-block_4' => array(
          'module' => 'views',
          'delta' => 'og_posts-block_4',
          'region' => 'right',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Group homepage (not including node edit)');
  t('groups');
  $export['group_homepage'] = $context;

  return $export;
}
