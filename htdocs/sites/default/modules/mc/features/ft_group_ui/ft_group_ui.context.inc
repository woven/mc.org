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

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_homepage_non_auth';
  $context->description = 'Group homepage non auth user';
  $context->tag = 'groups';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'group' => 'group',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-og_details-block_6' => array(
          'module' => 'views',
          'delta' => 'og_details-block_6',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-og_community-block_1' => array(
          'module' => 'views',
          'delta' => 'og_community-block_1',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-og_posts-block_4' => array(
          'module' => 'views',
          'delta' => 'og_posts-block_4',
          'region' => 'right',
          'weight' => 2,
        ),
        'quicktabs-1' => array(
          'module' => 'quicktabs',
          'delta' => 1,
          'region' => 'below_content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Group homepage non auth user');
  t('groups');
  $export['group_homepage_non_auth'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'groups_landing';
  $context->description = 'Groups Landing Page';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'groups' => 'groups',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-f207a0e7bd22d09c2579e055a0b46736' => array(
          'module' => 'views',
          'delta' => 'f207a0e7bd22d09c2579e055a0b46736',
          'region' => 'featured',
          'weight' => 0,
        ),
        'boxes-groups_making_difference' => array(
          'module' => 'boxes',
          'delta' => 'groups_making_difference',
          'region' => 'right',
          'weight' => 0,
        ),
        'boxes-groups_event_blocks' => array(
          'module' => 'boxes',
          'delta' => 'groups_event_blocks',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-groups-block_2' => array(
          'module' => 'views',
          'delta' => 'groups-block_2',
          'region' => 'above_content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Groups Landing Page');
  t('Pages');
  $export['groups_landing'] = $context;

  return $export;
}
