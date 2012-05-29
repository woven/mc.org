<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function ft_profile_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user';
  $context->description = 'Context that contains the reactions to display the user page.';
  $context->tag = 'User';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'form' => 'form',
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-user_header' => array(
          'module' => 'boxes',
          'delta' => 'user_header',
          'region' => 'featured',
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
        'blocks' => array(
          'boxes-user_header' => array(
            'class' => 'profile-overview-block',
          ),
        ),
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
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context that contains the reactions to display the user page.');
  t('User');
  $export['user'] = $context;

  return $export;
}
