<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function ft_node_context_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'node_ingroup';
  $context->description = 'Any page inside a group, except the group node page';
  $context->tag = 'Node';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~group_homepage' => '~group_homepage',
        '~group_manage_pages' => '~group_manage_pages',
        '~page_ingroup' => '~page_ingroup',
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
    'node' => array(
      'values' => array(
        'article' => 'article',
        'audio' => 'audio',
        'event' => 'event',
        'file' => 'file',
        'forum' => 'forum',
        'gallery' => 'gallery',
        'gallery_image' => 'gallery_image',
        'link' => 'link',
        'nnews' => 'nnews',
        'npage' => 'npage',
        'place' => 'place',
        'video' => 'video',
        'webform' => 'webform',
      ),
      'options' => array(
        'node_form' => '0',
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
  t('Any page inside a group, except the group node page');
  t('Node');
  $export['node_ingroup'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'node_outgroup';
  $context->description = 'Content nodes (article, audio, etc...), that are outside a group';
  $context->tag = 'Node';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        '_none_' => '_none_',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'node' => array(
      'values' => array(
        'article' => 'article',
        'audio' => 'audio',
        'event' => 'event',
        'file' => 'file',
        'place' => 'place',
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
        'views-node_related-block_1' => array(
          'module' => 'views',
          'delta' => 'node_related-block_1',
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
  t('Node');
  $export['node_outgroup'] = $context;

  return $export;
}
