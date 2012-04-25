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
        'boxes-audiovideo_add' => array(
          'module' => 'boxes',
          'delta' => 'audiovideo_add',
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
        'boxes-community_getinvolved' => array(
          'module' => 'boxes',
          'delta' => 'community_getinvolved',
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
        'boxes-events_add_an_event' => array(
          'module' => 'boxes',
          'delta' => 'events_add_an_event',
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
        'views-featured_slideshow-block_2' => array(
          'module' => 'views',
          'delta' => 'featured_slideshow-block_2',
          'region' => 'featured',
          'weight' => 0,
        ),
        'boxes-home_about' => array(
          'module' => 'boxes',
          'delta' => 'home_about',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-featured_blocks-block_4' => array(
          'module' => 'views',
          'delta' => 'featured_blocks-block_4',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-featured_blocks-block_5' => array(
          'module' => 'views',
          'delta' => 'featured_blocks-block_5',
          'region' => 'right',
          'weight' => 2,
        ),
        'views-og_community-block_2' => array(
          'module' => 'views',
          'delta' => 'og_community-block_2',
          'region' => 'right',
          'weight' => 3,
        ),
        'views-featured_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_blocks-block_1',
          'region' => 'below_content',
          'weight' => 0,
        ),
        'views-featured_blocks-block_2' => array(
          'module' => 'views',
          'delta' => 'featured_blocks-block_2',
          'region' => 'below_content',
          'weight' => 1,
        ),
        'views-featured_blocks-block_3' => array(
          'module' => 'views',
          'delta' => 'featured_blocks-block_3',
          'region' => 'below_content',
          'weight' => 2,
        ),
        'boxes-home_joinus' => array(
          'module' => 'boxes',
          'delta' => 'home_joinus',
          'region' => 'below_content',
          'weight' => 3,
        ),
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
    'php' => array(
      'values' => array(
        0 => TRUE,
      ),
      'options' => array(
        'phpcode' => 'if (arg(0)=="latest" && arg(1)!="events")
{
	return "all";
}',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-latest_by_topic' => array(
          'module' => 'boxes',
          'delta' => 'latest_by_topic',
          'region' => 'right',
          'weight' => 0,
        ),
        'boxes-latest_by_type' => array(
          'module' => 'boxes',
          'delta' => 'latest_by_type',
          'region' => 'right',
          'weight' => 1,
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
        'boxes-places_add_a_place' => array(
          'module' => 'boxes',
          'delta' => 'places_add_a_place',
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
        'boxes-google_search_box' => array(
          'module' => 'boxes',
          'delta' => 'google_search_box',
          'region' => 'branding',
          'weight' => 0,
        ),
        'boxes-add_stuff' => array(
          'module' => 'boxes',
          'delta' => 'add_stuff',
          'region' => 'branding',
          'weight' => 1,
        ),
        'boxes-footer_hon_logo' => array(
          'module' => 'boxes',
          'delta' => 'footer_hon_logo',
          'region' => 'footer',
          'weight' => 0,
        ),
        'boxes-footer_prc_logo' => array(
          'module' => 'boxes',
          'delta' => 'footer_prc_logo',
          'region' => 'footer',
          'weight' => 1,
        ),
        'menu-menu-categories' => array(
          'module' => 'menu',
          'delta' => 'menu-categories',
          'region' => 'footer_above',
          'weight' => 0,
        ),
        'menu-menu-footer-links' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-links',
          'region' => 'footer_above',
          'weight' => 1,
        ),
        'menu-secondary-links' => array(
          'module' => 'menu',
          'delta' => 'secondary-links',
          'region' => 'footer_above',
          'weight' => 2,
        ),
        'boxes-footer_joinus_box' => array(
          'module' => 'boxes',
          'delta' => 'footer_joinus_box',
          'region' => 'footer_above',
          'weight' => 3,
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
  $export['sitewide'] = $context;

  return $export;
}
