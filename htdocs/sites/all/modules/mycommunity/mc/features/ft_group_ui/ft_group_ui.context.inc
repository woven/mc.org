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
        'boxes-group_follow_box' => array(
          'module' => 'boxes',
          'delta' => 'group_follow_box',
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
  t('groups');
  $export['group_homepage'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_ingroup';
  $context->description = 'Any page inside a group, except the group node page';
  $context->tag = 'groups';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~group_homepage' => '~group_homepage',
        '~group_manage_pages' => '~group_manage_pages',
        '~node_ingroup' => '~node_ingroup',
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
    'php' => array(
      'values' => array(
        0 => TRUE,
      ),
      'options' => array(
        'phpcode' => '$object = menu_get_object();
if (!is_object($object)){
  return true;
}',
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
  t('groups');
  $export['page_ingroup'] = $context;

  return $export;
}
