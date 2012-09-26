<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function mt_landing_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mt_group_homepage';
  $context->description = 'Group homepage (not including node edit)';
  $context->tag = 'MiamiTech/groups';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'group' => 'group',
      ),
      'options' => array(
        'node_form' => '0',
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
        'views-og_posts-block_4' => array(
          'module' => 'views',
          'delta' => 'og_posts-block_4',
          'region' => 'right',
          'weight' => 0,
        ),
        'quicktabs-og_gposts' => array(
          'module' => 'quicktabs',
          'delta' => 'og_gposts',
          'region' => 'below_content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Group homepage (not including node edit)');
  t('MiamiTech/groups');
  $export['mt_group_homepage'] = $context;

  return $export;
}
