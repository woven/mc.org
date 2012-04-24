<?php

/**
 * Implementation of hook_views_default_views().
 */
function ft_event_ui_views_default_views() {
  $views = array();

  // Exported view: Events
  $view = new view;
  $view->name = 'Events';
  $view->description = 'A list of upcoming events';
  $view->tag = '';
  $view->base_table = 'node';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => '',
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
    'event_start' => array(
      'label' => '',
      'date_format' => 'custom',
      'custom_date_format' => 'D, m/d/Y - g:s A',
      'exclude' => 0,
      'id' => 'event_start',
      'table' => 'event',
      'field' => 'event_start',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => 1,
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'event' => 'event',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Events');
  $handler->override_option('header', '<h4>Happening Soon</h4>');
  $handler->override_option('header_format', '2');
  $handler->override_option('header_empty', 1);
  $handler->override_option('footer', '<div class="con">
<ol class=\'nav-page\'>
  <li class=\'next\'>
    <a href=\'<?php echo base_path();?>event\'>View Calendar</a>
  </li>
  <li class=\'prev\'>
    <a href=\'<?php echo base_path();?>events\'>More</a>
  </li>
</ol>
</div>
<div style="clear:both"></div>');
  $handler->override_option('footer_format', '4');
  $handler->override_option('footer_empty', 1);
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('use_pager', '1');
  $handler->override_option('use_more', 0);
  $handler->override_option('style_plugin', 'list');
  $handler->override_option('style_options', array(
    'type' => 'ul',
  ));
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->override_option('use_ajax', FALSE);
  $handler->override_option('items_per_page', 4);
  $handler->override_option('use_pager', '0');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('style_plugin', 'default');
  $handler->override_option('style_options', array(
    'grouping' => '',
  ));
  $handler->override_option('row_plugin', 'node');
  $handler->override_option('row_options', array(
    'teaser' => 1,
    'links' => 1,
    'comments' => 0,
  ));
  $handler->override_option('path', 'events');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  // Exported view: events_by_dates
  $view = new view;
  $view->name = 'events_by_dates';
  $view->description = 'Events grouped by dates (today, tomorrow, next week, etc..)';
  $view->tag = 'Events';
  $view->base_table = 'node';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'field_list_image_fid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'thumbnail_linked',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '1',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_list_image_fid',
      'table' => 'node_data_field_list_image',
      'field' => 'field_list_image_fid',
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 1,
        'max_length' => '50',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 1,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'spaces' => array(
        'type' => NULL,
        'frontpage' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'unix_event_start' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'custom',
      'custom_date_format' => 'l g:i a',
      'exclude' => 1,
      'id' => 'unix_event_start',
      'table' => 'event',
      'field' => 'unix_event_start',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'unix_event_end' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'date_format' => 'small',
      'custom_date_format' => '',
      'exclude' => 1,
      'id' => 'unix_event_end',
      'table' => 'event',
      'field' => 'unix_event_end',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'has_end_date' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'type' => 'yes-no',
      'not' => 0,
      'exclude' => 1,
      'id' => 'has_end_date',
      'table' => 'event',
      'field' => 'has_end_date',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'has_time' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '[unix_event_start] - [has_time]',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 1,
      'type' => 'yes-no',
      'not' => 0,
      'exclude' => 1,
      'id' => 'has_time',
      'table' => 'event',
      'field' => 'has_time',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'phpcode' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'value' => '<?php 
  $view = views_get_current_view();
  print theme_mc_event_date($data->event_unix_event_start, $data->event_unix_event_end, $data->event_has_end_date, $data->event_has_time, $view->hide_day);
?>',
      'exclude' => 1,
      'id' => 'phpcode',
      'table' => 'customfield',
      'field' => 'phpcode',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_place_nid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => 'at <span class="location">[field_place_nid]</span>',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '50',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 1,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_place_nid',
      'table' => 'node_data_field_place',
      'field' => 'field_place_nid',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'nothing' => array(
      'label' => '',
      'alter' => array(
        'text' => '[phpcode] [field_place_nid]',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'nothing',
      'table' => 'views',
      'field' => 'nothing',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'body' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 1,
        'max_length' => '100',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 1,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'body',
      'table' => 'node_revisions',
      'field' => 'body',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'random' => array(
      'order' => 'ASC',
      'id' => 'random',
      'table' => 'views',
      'field' => 'random',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'event' => 'event',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'time',
    'results_lifespan' => '3600',
    'output_lifespan' => '3600',
  ));
  $handler->override_option('header', '<?php
  // Important: Pager should be turned on, otherwise count will not work.
$view = views_get_current_view();
echo theme("mc_event_view_header",$view, \'latest/events/current\');
?>');
  $handler->override_option('header_format', '4');
  $handler->override_option('header_empty', 0);
  $handler->override_option('items_per_page', 1);
  $handler->override_option('use_pager', 'mini');
  $handler->override_option('style_plugin', 'semanticviews_default');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'group' => array(
      'element_type' => 'h3',
      'class' => 'title',
    ),
    'list' => array(
      'element_type' => '',
      'class' => '',
    ),
    'row' => array(
      'element_type' => 'div',
      'class' => '',
      'last_every_nth' => '0',
      'first_class' => 'first',
      'last_class' => 'last',
      'striping_classes' => 'odd even',
    ),
  ));
  $handler->override_option('row_plugin', 'semanticviews_fields');
  $handler->override_option('row_options', array(
    'semantic_html' => array(
      'field_list_image_fid' => array(
        'element_type' => 'div',
        'class' => 'field-view-image',
      ),
      'title' => array(
        'element_type' => 'h4',
        'class' => 'field-title',
      ),
      'nothing' => array(
        'element_type' => 'p',
        'class' => 'location-link',
      ),
      'body' => array(
        'element_type' => 'p',
        'class' => 'description',
      ),
    ),
    'skip_blank' => 0,
  ));
  $handler = $view->new_display('block', 'Current', 'block_1');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'event' => 'event',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'unix_event_end' => array(
      'operator' => '>',
      'value' => array(
        'type' => 'offset',
        'value' => 'now',
        'min' => '',
        'max' => '',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'unix_event_end',
      'table' => 'event',
      'field' => 'unix_event_end',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'unix_event_start' => array(
      'operator' => '<',
      'value' => array(
        'type' => 'offset',
        'value' => 'now',
        'min' => '',
        'max' => '',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'unix_event_start',
      'table' => 'event',
      'field' => 'unix_event_start',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Current');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', '8');
  $handler = $view->new_display('block', 'Today', 'block_2');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'event' => 'event',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'unix_event_start' => array(
      'operator' => '>',
      'value' => array(
        'type' => 'date',
        'value' => 'now',
        'min' => '-1 day',
        'max' => '+1 day',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'unix_event_start',
      'table' => 'event',
      'field' => 'unix_event_start',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Today');
  $handler->override_option('header', '<?php
  // Important: Pager should be turned on, otherwise count will not work.
$view = views_get_current_view();
echo theme("mc_event_view_header",$view, \'latest/events/today\');
?>');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', '8');
  $handler = $view->new_display('block', 'Tomorrow', 'block_3');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'event' => 'event',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'unix_event_start' => array(
      'operator' => 'between',
      'value' => array(
        'type' => 'offset',
        'value' => '',
        'min' => '+1 day',
        'max' => '+2 day',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'unix_event_start',
      'table' => 'event',
      'field' => 'unix_event_start',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Tomorrow');
  $handler->override_option('header', '<?php
  // Important: Pager should be turned on, otherwise count will not work.
$view = views_get_current_view();
echo theme("mc_event_view_header",$view, \'latest/events/tomorrow\');
?>');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', '8');
  $handler = $view->new_display('block', 'This Week', 'block_4');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'event' => 'event',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'unix_event_start' => array(
      'operator' => 'between',
      'value' => array(
        'type' => 'offset',
        'value' => '',
        'min' => '+2 day',
        'max' => '+8 day',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'unix_event_start',
      'table' => 'event',
      'field' => 'unix_event_start',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'This Week');
  $handler->override_option('header', '<?php
  // Important: Pager should be turned on, otherwise count will not work.
$view = views_get_current_view();
echo theme("mc_event_view_header",$view, \'latest/events/this-week\');
?>');
  $handler->override_option('items_per_page', 3);
  $handler->override_option('use_pager', FALSE);
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', '8');
  $handler = $view->new_display('block', 'Variable ranges', 'block_5');
  $handler->override_option('arguments', array(
    'nid' => array(
      'default_action' => 'ignore',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'break_phrase' => 1,
      'not' => 1,
      'id' => 'nid',
      'table' => 'node',
      'field' => 'nid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        2 => 0,
        4 => 0,
        5 => 0,
        3 => 0,
      ),
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_fixed' => '',
      'default_argument_user' => 0,
      'default_argument_image_size' => '_original',
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'image' => 0,
        'gallery' => 0,
        'gallery_image' => 0,
        'article' => 0,
        'audio' => 0,
        'embmedia' => 0,
        'environmental_resource' => 0,
        'event' => 0,
        'feature_spot' => 0,
        'feedapi_node' => 0,
        'file' => 0,
        'front_picture' => 0,
        'group' => 0,
        'healthcare_facility' => 0,
        'link' => 0,
        'news' => 0,
        'page' => 0,
        'place' => 0,
        'simplenews' => 0,
        'spirit_and_mind' => 0,
        'video' => 0,
        'webform' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        1 => 0,
        2 => 0,
        7 => 0,
        5 => 0,
        6 => 0,
        3 => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'image_size' => array(
        '_original' => '_original',
        'thumbnail' => 'thumbnail',
        'preview' => 'preview',
      ),
      'validate_argument_is_member' => 'OG_VIEWS_DO_NOT_VALIDATE_MEMBERSHIP',
      'validate_argument_group_node_type' => array(
        'group' => 0,
      ),
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'event' => 'event',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'unix_event_start' => array(
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '2000-01-01',
        'min' => '2000-01-01',
        'max' => '2000-01-02',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => 'unix_event_start_op',
        'label' => 'Event: Event Start',
        'use_operator' => 0,
        'identifier' => 'unix_event_start',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'unix_event_start',
      'table' => 'event',
      'field' => 'unix_event_start',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'unix_event_end' => array(
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '2000-01-01',
        'min' => '2000-01-01',
        'max' => '2000-01-02',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => 'unix_event_end_op',
        'label' => 'Event: Event End',
        'use_operator' => 0,
        'identifier' => 'unix_event_end',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'unix_event_end',
      'table' => 'event',
      'field' => 'unix_event_end',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', '8');

  $views[$view->name] = $view;

  // Exported view: events_by_dates_groups
  $view = new view;
  $view->name = 'events_by_dates_groups';
  $view->description = 'Events from a Group, grouped by dates (today, tomorrow, next week, etc..)';
  $view->tag = 'Events';
  $view->base_table = 'node';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'group_nid' => array(
      'label' => 'Group',
      'required' => 1,
      'id' => 'group_nid',
      'table' => 'og_ancestry',
      'field' => 'group_nid',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'field_list_image_fid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'thumbnail_linked',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '1',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_list_image_fid',
      'table' => 'node_data_field_list_image',
      'field' => 'field_list_image_fid',
      'relationship' => 'none',
    ),
    'title_1' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'spaces' => array(
        'type' => NULL,
        'frontpage' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'title_1',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'group_nid',
    ),
    'nothing' => array(
      'label' => '',
      'alter' => array(
        'text' => 'From [title_1]',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'nothing',
      'table' => 'views',
      'field' => 'nothing',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 1,
        'max_length' => '60',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 1,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'spaces' => array(
        'type' => NULL,
        'frontpage' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'unix_event_start' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'custom',
      'custom_date_format' => 'l g:i a',
      'exclude' => 1,
      'id' => 'unix_event_start',
      'table' => 'event',
      'field' => 'unix_event_start',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'unix_event_end' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'date_format' => 'small',
      'custom_date_format' => '',
      'exclude' => 1,
      'id' => 'unix_event_end',
      'table' => 'event',
      'field' => 'unix_event_end',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'has_end_date' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'type' => 'yes-no',
      'not' => 0,
      'exclude' => 1,
      'id' => 'has_end_date',
      'table' => 'event',
      'field' => 'has_end_date',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'has_time' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'type' => 'yes-no',
      'not' => 0,
      'exclude' => 1,
      'id' => 'has_time',
      'table' => 'event',
      'field' => 'has_time',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'phpcode' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'value' => '<?php 
  print theme_mc_event_date($data->event_unix_event_start, $data->event_unix_event_end, $data->event_has_end_date, $data->event_has_time);
?>',
      'exclude' => 1,
      'id' => 'phpcode',
      'table' => 'customfield',
      'field' => 'phpcode',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_place_nid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => 'at <span class="location">[field_place_nid]</span>',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_place_nid',
      'table' => 'node_data_field_place',
      'field' => 'field_place_nid',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'nothing_1' => array(
      'label' => '',
      'alter' => array(
        'text' => '[phpcode] [field_place_nid]',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'nothing_1',
      'table' => 'views',
      'field' => 'nothing',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'random' => array(
      'order' => 'ASC',
      'id' => 'random',
      'table' => 'views',
      'field' => 'random',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'event' => 'event',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'unix_event_end' => array(
      'id' => 'unix_event_end',
      'table' => 'event',
      'field' => 'unix_event_end',
    ),
    'unix_event_start' => array(
      'id' => 'unix_event_start',
      'table' => 'event',
      'field' => 'unix_event_start',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('header', '<?php
  // Important: Pager should be turned on, otherwise count will not work.
$view = views_get_current_view();
echo theme("mc_event_view_header",$view, \'latest/events/current\');
?>');
  $handler->override_option('header_format', '4');
  $handler->override_option('header_empty', 0);
  $handler->override_option('items_per_page', 1);
  $handler->override_option('use_pager', 'mini');
  $handler->override_option('style_plugin', 'semanticviews_default');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'group' => array(
      'element_type' => 'h3',
      'class' => 'title',
    ),
    'list' => array(
      'element_type' => '',
      'class' => '',
    ),
    'row' => array(
      'element_type' => 'div',
      'class' => '',
      'last_every_nth' => '0',
      'first_class' => 'first',
      'last_class' => 'last',
      'striping_classes' => 'odd even',
    ),
  ));
  $handler->override_option('row_plugin', 'semanticviews_fields');
  $handler->override_option('row_options', array(
    'semantic_html' => array(
      'field_list_image_fid' => array(
        'element_type' => 'div',
        'class' => 'field-view-image',
      ),
      'nothing' => array(
        'element_type' => 'div',
        'class' => 'field-author',
      ),
      'title' => array(
        'element_type' => 'h4',
        'class' => 'field-title',
      ),
      'nothing_1' => array(
        'element_type' => 'p',
        'class' => 'location-link',
      ),
      'body' => array(
        'element_type' => 'p',
        'class' => 'description',
      ),
    ),
    'skip_blank' => 0,
  ));
  $handler = $view->new_display('block', 'Current', 'block_1');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'event' => 'event',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'unix_event_end' => array(
      'operator' => '>',
      'value' => array(
        'type' => 'offset',
        'value' => 'now',
        'min' => '',
        'max' => '',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'unix_event_end',
      'table' => 'event',
      'field' => 'unix_event_end',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'unix_event_start' => array(
      'operator' => '<',
      'value' => array(
        'type' => 'offset',
        'value' => 'now',
        'min' => '',
        'max' => '',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'unix_event_start',
      'table' => 'event',
      'field' => 'unix_event_start',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Current');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('block', 'Today', 'block_2');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'event' => 'event',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'unix_event_start' => array(
      'operator' => 'between',
      'value' => array(
        'type' => 'offset',
        'value' => 'now',
        'min' => '-1 day',
        'max' => '+1 day',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'unix_event_start',
      'table' => 'event',
      'field' => 'unix_event_start',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Today');
  $handler->override_option('header', '<?php
  // Important: Pager should be turned on, otherwise count will not work.
$view = views_get_view(\'events_by_dates\');
$view->set_display(\'block_2\');
$view->execute();
echo theme("mc_event_view_header",$view, \'latest/events/today\');
?>');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('block', 'Tomorrow', 'block_3');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'event' => 'event',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'unix_event_start' => array(
      'operator' => 'between',
      'value' => array(
        'type' => 'offset',
        'value' => '',
        'min' => '+1 day',
        'max' => '+2 day',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'unix_event_start',
      'table' => 'event',
      'field' => 'unix_event_start',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Tomorrow');
  $handler->override_option('header', '<?php
  // Important: Pager should be turned on, otherwise count will not work.
$view = views_get_view(\'events_by_dates\');
$view->set_display(\'block_3\');
$view->execute();
echo theme("mc_event_view_header",$view, \'latest/events/tomorrow\');
?>');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('block', 'This Week', 'block_4');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'event' => 'event',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'unix_event_start' => array(
      'operator' => 'between',
      'value' => array(
        'type' => 'offset',
        'value' => '',
        'min' => '+2 day',
        'max' => '+8 day',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'unix_event_start',
      'table' => 'event',
      'field' => 'unix_event_start',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'This Week');
  $handler->override_option('header', '<?php
  // Important: Pager should be turned on, otherwise count will not work.
$view = views_get_view(\'events_by_dates\');
$view->set_display(\'block_4\');
$view->execute();
echo theme("mc_event_view_header",$view, \'latest/events/this-week\');
?>');
  $handler->override_option('items_per_page', 3);
  $handler->override_option('use_pager', FALSE);
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('block', 'Variable ranges', 'block_5');
  $handler->override_option('arguments', array(
    'nid' => array(
      'default_action' => 'ignore',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'not' => 1,
      'id' => 'nid',
      'table' => 'node',
      'field' => 'nid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        2 => 0,
        4 => 0,
        5 => 0,
        3 => 0,
      ),
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_fixed' => '',
      'default_argument_user' => 0,
      'default_argument_image_size' => '_original',
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'image' => 0,
        'gallery' => 0,
        'gallery_image' => 0,
        'article' => 0,
        'audio' => 0,
        'embmedia' => 0,
        'environmental_resource' => 0,
        'event' => 0,
        'feature_spot' => 0,
        'feedapi_node' => 0,
        'file' => 0,
        'front_picture' => 0,
        'group' => 0,
        'healthcare_facility' => 0,
        'link' => 0,
        'news' => 0,
        'page' => 0,
        'place' => 0,
        'simplenews' => 0,
        'spirit_and_mind' => 0,
        'video' => 0,
        'webform' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        1 => 0,
        2 => 0,
        7 => 0,
        5 => 0,
        6 => 0,
        3 => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'image_size' => array(
        '_original' => '_original',
        'thumbnail' => 'thumbnail',
        'preview' => 'preview',
      ),
      'validate_argument_is_member' => 'OG_VIEWS_DO_NOT_VALIDATE_MEMBERSHIP',
      'validate_argument_group_node_type' => array(
        'group' => 0,
      ),
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'event' => 'event',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'unix_event_end' => array(
      'operator' => '=',
      'value' => array(
        'type' => 'date',
        'value' => '2000-01-01',
        'min' => '',
        'max' => '',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'unix_event_end',
      'table' => 'event',
      'field' => 'unix_event_end',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'unix_event_start' => array(
      'operator' => '=',
      'value' => array(
        'type' => 'date',
        'value' => '2000-01-01',
        'min' => '',
        'max' => '',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'unix_event_start',
      'table' => 'event',
      'field' => 'unix_event_start',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  return $views;
}
