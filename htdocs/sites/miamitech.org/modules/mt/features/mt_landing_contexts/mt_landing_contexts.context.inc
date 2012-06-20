<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function mt_landing_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_audiovideo';
  $context->description = 'Context that contains the reactions to display the Audio & Video Landing Page properly';
  $context->tag = 'Landing';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'audio-and-video' => 'audio-and-video',
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
  $context->condition_mode = 0;

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
    'path' => array(
      'values' => array(
        'community' => 'community',
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
      ),
      'left' => array(
        'class' => '',
      ),
      'right' => array(
        'class' => '',
        'blocks' => array(
          'views-featured_members-block_1' => array(
            'class' => '',
          ),
          'views-help_block-block_1' => array(
            'class' => '',
          ),
          'views-community_popular-block_1' => array(
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
          'views-og_community-block_5' => array(
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
    'path' => array(
      'values' => array(
        'events' => 'events',
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
        'views-popular_places-block_2' => array(
          'module' => 'views',
          'delta' => 'popular_places-block_2',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-featured_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_blocks-block_1',
          'region' => 'right',
          'weight' => 2,
        ),
        'boxes-upcoming_events_blocks' => array(
          'module' => 'boxes',
          'delta' => 'upcoming_events_blocks',
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
          'views-popular_places-block_2' => array(
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
          'boxes-upcoming_events_blocks' => array(
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
    'path' => array(
      'values' => array(
        'groups' => 'groups',
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
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-help_block-block_1' => array(
          'module' => 'views',
          'delta' => 'help_block-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'boxes-join_mc' => array(
          'module' => 'boxes',
          'delta' => 'join_mc',
          'region' => 'right',
          'weight' => 1,
        ),
        'boxes-upcoming_events_blocks' => array(
          'module' => 'boxes',
          'delta' => 'upcoming_events_blocks',
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
        ),
      ),
      'below_content' => array(
        'class' => '',
      ),
      'above_content' => array(
        'class' => '',
        'blocks' => array(
          'boxes-upcoming_events_blocks' => array(
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
  t('Context that contains the reactions to display the homepage properly');
  t('Landing');
  $export['landing_homepage'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_latest';
  $context->description = 'Context that holds all the elements for the Latest Page.';
  $context->tag = 'Landing';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'latest' => 'latest',
        'latest/*' => 'latest/*',
        'latest/*/*' => 'latest/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-browse-by-date' => array(
          'module' => 'menu',
          'delta' => 'menu-browse-by-date',
          'region' => 'right',
          'weight' => 0,
        ),
        'views--exp-latest_pages-page_7' => array(
          'module' => 'views',
          'delta' => '-exp-latest_pages-page_7',
          'region' => 'right',
          'weight' => 1,
        ),
        'boxes-mt_group_calendar' => array(
          'module' => 'boxes',
          'delta' => 'mt_group_calendar',
          'region' => 'right',
          'weight' => 2,
        ),
        'boxes-latest_page_title' => array(
          'module' => 'boxes',
          'delta' => 'latest_page_title',
          'region' => 'above_content',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'latest',
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'latest-page',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context that holds all the elements for the Latest Page.');
  t('Landing');
  $export['landing_latest'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_places';
  $context->description = 'Context that contains the reactions to display the Places Landing Page properly';
  $context->tag = 'Landing';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'places' => 'places',
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
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
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
        'boxes-header_links' => array(
          'module' => 'boxes',
          'delta' => 'header_links',
          'region' => 'header',
          'weight' => 0,
        ),
        'google_cse-0' => array(
          'module' => 'google_cse',
          'delta' => 0,
          'region' => 'branding',
          'weight' => 0,
        ),
        'boxes-add_stuff' => array(
          'module' => 'boxes',
          'delta' => 'add_stuff',
          'region' => 'branding',
          'weight' => 1,
        ),
        'menu-secondary-links' => array(
          'module' => 'menu',
          'delta' => 'secondary-links',
          'region' => 'footer_above',
          'weight' => 0,
        ),
        'boxes-footer_joinus_box' => array(
          'module' => 'boxes',
          'delta' => 'footer_joinus_box',
          'region' => 'footer_above',
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
    'block_class' => array(
      'header' => array(
        'class' => '',
        'blocks' => array(
          'boxes-header_links' => array(
            'class' => '',
          ),
        ),
      ),
      'branding' => array(
        'class' => '',
        'blocks' => array(
          'google_cse-0' => array(
            'class' => '',
          ),
          'boxes-add_stuff' => array(
            'class' => '',
          ),
        ),
      ),
      'featured' => array(
        'class' => '',
      ),
      'group_logo' => array(
        'class' => '',
      ),
      'footer' => array(
        'class' => '',
        'blocks' => array(
          'boxes-footer_hon_logo' => array(
            'class' => '',
          ),
          'boxes-footer_prc_logo' => array(
            'class' => '',
          ),
        ),
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
        'blocks' => array(
          'menu-menu-categories' => array(
            'class' => '',
          ),
          'menu-menu-footer-links' => array(
            'class' => '',
          ),
          'menu-secondary-links' => array(
            'class' => '',
          ),
          'boxes-footer_joinus_box' => array(
            'class' => 'prose',
          ),
        ),
      ),
      'overlay' => array(
        'class' => '',
        'blocks' => array(
          'boxes-join_overlay_box' => array(
            'class' => '',
          ),
          'boxes-login_overlay_box' => array(
            'class' => '',
          ),
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  return $export;
}
