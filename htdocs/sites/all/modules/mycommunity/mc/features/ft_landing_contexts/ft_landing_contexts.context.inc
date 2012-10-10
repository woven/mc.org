<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function ft_landing_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_audiovideo';
  $context->description = 'Context that contains the reactions to display the Audio & Video Landing Page properly';
  $context->tag = 'Landing';
  $context->conditions = array(
    'php' => array(
      'values' => array(
        0 => TRUE,
      ),
      'options' => array(
        'phpcode' => 'return _is_landingpage(\'audio-video\');',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-featured_slideshow-block_5' => array(
          'module' => 'views',
          'delta' => 'featured_slideshow-block_5',
          'region' => 'featured',
          'weight' => 0,
        ),
        'views-help_block-block_1' => array(
          'module' => 'views',
          'delta' => 'help_block-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-og_community-block_4' => array(
          'module' => 'views',
          'delta' => 'og_community-block_4',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-featured_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_blocks-block_1',
          'region' => 'right',
          'weight' => 2,
        ),
        'boxes-audiovideo_latest' => array(
          'module' => 'boxes',
          'delta' => 'audiovideo_latest',
          'region' => 'below_content',
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
          'views-featured_slideshow-block_5' => array(
            'class' => '',
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
        'blocks' => array(
          'views-help_block-block_1' => array(
            'class' => 'important',
          ),
          'views-og_community-block_4' => array(
            'class' => '',
          ),
          'views-featured_blocks-block_1' => array(
            'class' => '',
          ),
        ),
      ),
      'below_content' => array(
        'class' => '',
        'blocks' => array(
          'boxes-audiovideo_latest' => array(
            'class' => '',
          ),
        ),
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
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context that contains the reactions to display the Audio & Video Landing Page properly');
  t('Landing');
  $export['landing_audiovideo'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_community';
  $context->description = 'Context that contains the reactions to display the Community Landing Page properly';
  $context->tag = 'Landing';
  $context->conditions = array(
    'php' => array(
      'values' => array(
        0 => TRUE,
      ),
      'options' => array(
        'phpcode' => 'return _is_landingpage(\'community\');',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-featured_members-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_members-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-help_block-block_1' => array(
          'module' => 'views',
          'delta' => 'help_block-block_1',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-community_popular-block_1' => array(
          'module' => 'views',
          'delta' => 'community_popular-block_1',
          'region' => 'right',
          'weight' => 2,
        ),
        'views-featured_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_blocks-block_1',
          'region' => 'right',
          'weight' => 3,
        ),
        'views-og_community-block_5' => array(
          'module' => 'views',
          'delta' => 'og_community-block_5',
          'region' => 'below_content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context that contains the reactions to display the Community Landing Page properly');
  t('Landing');
  $export['landing_community'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_events';
  $context->description = 'Context that contains the reactions to display the Events Landing Page properly';
  $context->tag = 'Landing';
  $context->conditions = array(
    'php' => array(
      'values' => array(
        0 => TRUE,
      ),
      'options' => array(
        'phpcode' => 'return _is_landingpage(\'events\');',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-featured_slideshow-block_3' => array(
          'module' => 'views',
          'delta' => 'featured_slideshow-block_3',
          'region' => 'featured',
          'weight' => 0,
        ),
        'views-help_block-block_1' => array(
          'module' => 'views',
          'delta' => 'help_block-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-featured_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_blocks-block_1',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-mc_events_sections-block_3' => array(
          'module' => 'views',
          'delta' => 'mc_events_sections-block_3',
          'region' => 'below_content',
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
          'views-featured_slideshow-block_3' => array(
            'class' => '',
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
        'blocks' => array(
          'views-help_block-block_1' => array(
            'class' => 'important',
          ),
          'views-featured_blocks-block_1' => array(
            'class' => '',
          ),
        ),
      ),
      'below_content' => array(
        'class' => '',
        'blocks' => array(
          'boxes-mc_event_sections_box' => array(
            'class' => '',
          ),
        ),
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
      'class' => 'two-columns',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context that contains the reactions to display the Events Landing Page properly');
  t('Landing');
  $export['landing_events'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_groups';
  $context->description = '';
  $context->tag = 'Landing';
  $context->conditions = array(
    'php' => array(
      'values' => array(
        0 => TRUE,
      ),
      'options' => array(
        'phpcode' => 'return _is_landingpage(\'groups\');',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-featured_slideshow-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_slideshow-block_1',
          'region' => 'featured',
          'weight' => 0,
        ),
        'views-help_block-block_1' => array(
          'module' => 'views',
          'delta' => 'help_block-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'boxes-groups_events' => array(
          'module' => 'boxes',
          'delta' => 'groups_events',
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
          'views-featured_slideshow-block_1' => array(
            'class' => '',
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
        'blocks' => array(
          'views-help_block-block_1' => array(
            'class' => 'important',
          ),
          'boxes-groups_events' => array(
            'class' => '',
          ),
        ),
      ),
      'below_content' => array(
        'class' => '',
      ),
      'above_content' => array(
        'class' => '',
        'blocks' => array(
          'views-groups-block_2' => array(
            'class' => '',
          ),
        ),
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
  t('Landing');
  $export['landing_groups'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_homepage';
  $context->description = 'Context that contains the reactions to display the homepage properly';
  $context->tag = 'Landing';
  $context->conditions = array(
    'php' => array(
      'values' => array(
        0 => TRUE,
      ),
      'options' => array(
        'phpcode' => 'return _is_landingpage(\'home\');',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-featured_slideshow-block_2' => array(
          'module' => 'views',
          'delta' => 'featured_slideshow-block_2',
          'region' => 'featured',
          'weight' => 0,
        ),
        'views-help_block-block_1' => array(
          'module' => 'views',
          'delta' => 'help_block-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'quicktabs-browse_by' => array(
          'module' => 'quicktabs',
          'delta' => 'browse_by',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-featured_blocks-block_4' => array(
          'module' => 'views',
          'delta' => 'featured_blocks-block_4',
          'region' => 'right',
          'weight' => 2,
        ),
        'views-og_community-block_2' => array(
          'module' => 'views',
          'delta' => 'og_community-block_2',
          'region' => 'right',
          'weight' => 3,
        ),
        'quicktabs-home_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'home_tabs',
          'region' => 'below_content',
          'weight' => 0,
        ),
        'views-featured_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_blocks-block_1',
          'region' => 'below_content',
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
        'blocks' => array(
          'views-featured_slideshow-block_2' => array(
            'class' => '',
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
        'blocks' => array(
          'views-help_block-block_1' => array(
            'class' => 'block-help important about-block',
          ),
          'quicktabs-browse_by' => array(
            'class' => 'block-split2',
          ),
          'views-featured_blocks-block_4' => array(
            'class' => '',
          ),
          'views-og_community-block_2' => array(
            'class' => '',
          ),
        ),
      ),
      'below_content' => array(
        'class' => '',
        'blocks' => array(
          'quicktabs-home_tabs' => array(
            'class' => '',
          ),
          'views-featured_blocks-block_1' => array(
            'class' => '',
          ),
        ),
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
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context that contains the reactions to display the homepage properly');
  t('Landing');
  $export['landing_homepage'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_places';
  $context->description = 'Context that contains the reactions to display the Places Landing Page properly';
  $context->tag = 'Landing';
  $context->conditions = array(
    'php' => array(
      'values' => array(
        0 => TRUE,
      ),
      'options' => array(
        'phpcode' => 'return _is_landingpage(\'places\');',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-featured_slideshow-block_4' => array(
          'module' => 'views',
          'delta' => 'featured_slideshow-block_4',
          'region' => 'featured',
          'weight' => 0,
        ),
        'views-help_block-block_1' => array(
          'module' => 'views',
          'delta' => 'help_block-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-og_community-block_3' => array(
          'module' => 'views',
          'delta' => 'og_community-block_3',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-featured_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_blocks-block_1',
          'region' => 'right',
          'weight' => 2,
        ),
        'views-popular_places-block_1' => array(
          'module' => 'views',
          'delta' => 'popular_places-block_1',
          'region' => 'below_content',
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
          'views-featured_slideshow-block_4' => array(
            'class' => '',
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
        'blocks' => array(
          'views-help_block-block_1' => array(
            'class' => 'important',
          ),
          'views-og_community-block_3' => array(
            'class' => '',
          ),
          'views-featured_blocks-block_1' => array(
            'class' => '',
          ),
        ),
      ),
      'below_content' => array(
        'class' => '',
        'blocks' => array(
          'views-popular_places-block_1' => array(
            'class' => '',
          ),
        ),
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
  t('Context that contains the reactions to display the Places Landing Page properly');
  t('Landing');
  $export['landing_places'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_general';
  $context->description = 'Page General';
  $context->tag = 'Node';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'about' => 'about',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-mc_page_menu-block_1' => array(
          'module' => 'views',
          'delta' => 'mc_page_menu-block_1',
          'region' => 'left',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Node');
  t('Page General');
  $export['page_general'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = 'mc';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ft_account-0' => array(
          'module' => 'ft_account',
          'delta' => 0,
          'region' => 'header',
          'weight' => 0,
        ),
        'boxes-add_stuff' => array(
          'module' => 'boxes',
          'delta' => 'add_stuff',
          'region' => 'branding',
          'weight' => 0,
        ),
        'search-0' => array(
          'module' => 'search',
          'delta' => 0,
          'region' => 'branding',
          'weight' => 1,
        ),
        'boxes-join_overlay_box' => array(
          'module' => 'boxes',
          'delta' => 'join_overlay_box',
          'region' => 'overlay',
          'weight' => 0,
        ),
        'boxes-login_overlay_box' => array(
          'module' => 'boxes',
          'delta' => 'login_overlay_box',
          'region' => 'overlay',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('mc');
  $export['sitewide'] = $context;

  return $export;
}
