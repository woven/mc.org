<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function ft_page_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_secondary';
  $context->description = 'Secondary Page';
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
    'php' => array(
      'values' => array(
        0 => TRUE,
      ),
      'options' => array(
        'phpcode' => 'if ( arg(0) == \'node\' && is_numeric(arg(1)) ){
  $node = node_load(arg(1));
  // if it\'s not a landing page
  if (($node->type == \'npage\' || $node->type == \'page\') && $node->field_page_type[0][\'value\'] != \'landing\'){
    return TRUE;
  }
}
return FALSE;',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-node_details-block_4' => array(
          'module' => 'views',
          'delta' => 'node_details-block_4',
          'region' => 'content_top',
          'weight' => 0,
        ),
        'views-node_details-block_2' => array(
          'module' => 'views',
          'delta' => 'node_details-block_2',
          'region' => 'content_top',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Node');
  t('Secondary Page');
  $export['page_secondary'] = $context;

  return $export;
}
