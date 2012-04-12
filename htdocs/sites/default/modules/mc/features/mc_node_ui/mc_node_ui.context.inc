<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function mc_node_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'content';
  $context->description = 'Content nodes (article, audio, etc...) - anonymous';
  $context->tag = 'nodes';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
        'audio' => 'audio',
        'event' => 'event',
        'file' => 'file',
        'gallery_image' => 'gallery_image',
        'link' => 'link',
        'news' => 'news',
        'place' => 'place',
        'video' => 'video',
      ),
      'options' => array(
        'node_form' => '0',
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
        'block-46' => array(
          'module' => 'block',
          'delta' => 46,
          'region' => 'content_bottom',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content nodes (article, audio, etc...) - anonymous');
  t('nodes');
  $export['content'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'content_no_group';
  $context->description = 'Content nodes (article, audio, etc...), that are outside a group';
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
        'article' => 'article',
        'audio' => 'audio',
        'event' => 'event',
        'file' => 'file',
        'link' => 'link',
        'place' => 'place',
        'simplenews' => 'simplenews',
        'video' => 'video',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-browse_by' => array(
          'module' => 'quicktabs',
          'delta' => 'browse_by',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-related_stuff-block_1' => array(
          'module' => 'views',
          'delta' => 'related_stuff-block_1',
          'region' => 'right',
          'weight' => 1,
        ),
        'quicktabs-latest_right_blocks' => array(
          'module' => 'quicktabs',
          'delta' => 'latest_right_blocks',
          'region' => 'right',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content nodes (article, audio, etc...), that are outside a group');
  t('nodes');
  $export['content_no_group'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'content_no_group_anonymous';
  $context->description = 'Content nodes (article, audio, etc...), that are outside a group - anonymous user';
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
        'article' => 'article',
        'audio' => 'audio',
        'event' => 'event',
        'file' => 'file',
        'gallery_image' => 'gallery_image',
        'link' => 'link',
        'news' => 'news',
        'place' => 'place',
        'video' => 'video',
      ),
      'options' => array(
        'node_form' => '0',
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
        'block-47' => array(
          'module' => 'block',
          'delta' => 47,
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content nodes (article, audio, etc...), that are outside a group - anonymous user');
  t('nodes');
  $export['content_no_group_anonymous'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_add_node';
  $context->description = 'Page of a node that is going to be created. The new node will belong to a group.';
  $context->tag = 'groups';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/add/*/*' => 'node/add/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-og_details-block_5' => array(
          'module' => 'views',
          'delta' => 'og_details-block_5',
          'region' => 'group_logo',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page of a node that is going to be created. The new node will belong to a group.');
  t('groups');
  $export['group_add_node'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_manage_pages';
  $context->description = 'Custom pages created to manage settings on the groups pages';
  $context->tag = 'groups';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*/manage_posts' => 'node/*/manage_posts',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-og_details-block_1' => array(
          'module' => 'views',
          'delta' => 'og_details-block_1',
          'region' => 'group_logo',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Custom pages created to manage settings on the groups pages');
  t('groups');
  $export['group_manage_pages'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_page_edit';
  $context->description = 'Any node edit page inside a group';
  $context->tag = 'groups';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        'group' => 'group',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'path' => array(
      'values' => array(
        'node/*/edit' => 'node/*/edit',
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
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Any node edit page inside a group');
  t('groups');
  $export['group_page_edit'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_page_view';
  $context->description = 'Any page inside a group, (not including node edit nor group homepage)';
  $context->tag = 'groups';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~group_homepage' => '~group_homepage',
        '~group_manage_pages' => '~group_manage_pages',
      ),
    ),
    'context_og_condition_group_type' => array(
      'values' => array(
        'group' => 'group',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-og_details-block_1' => array(
          'module' => 'views',
          'delta' => 'og_details-block_1',
          'region' => 'group_logo',
          'weight' => 0,
        ),
        'og_menu-0' => array(
          'module' => 'og_menu',
          'delta' => 0,
          'region' => 'left',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Any page inside a group, (not including node edit nor group homepage)');
  t('groups');
  $export['group_page_view'] = $context;

  return $export;
}
