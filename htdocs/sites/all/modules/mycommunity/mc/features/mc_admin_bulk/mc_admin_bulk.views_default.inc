<?php

/**
 * Implementation of hook_views_default_views().
 */
function mc_admin_bulk_views_default_views() {
  $views = array();

  // Exported view: admin_node_bulk
  $view = new view;
  $view->name = 'admin_node_bulk';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => 'Title',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
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
      'hide_alter_empty' => 1,
      'link_to_node' => 1,
      'spaces' => array(
        'type' => NULL,
        'frontpage' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'type' => array(
      'label' => 'Type',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
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
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'machine_name' => 0,
      'exclude' => 0,
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'name' => array(
      'label' => 'Author',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
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
      'hide_alter_empty' => 1,
      'link_to_user' => 1,
      'overwrite_anonymous' => 0,
      'anonymous_text' => '',
      'exclude' => 0,
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'status' => array(
      'label' => 'Status',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
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
      'hide_alter_empty' => 1,
      'type' => 'published-notpublished',
      'not' => 0,
      'exclude' => 0,
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'changed' => array(
      'label' => 'Updated date',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
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
      'hide_alter_empty' => 1,
      'date_format' => 'raw time ago',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'changed',
      'table' => 'node',
      'field' => 'changed',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'edit_node' => array(
      'label' => 'Edit',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
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
      'hide_alter_empty' => 1,
      'text' => '',
      'exclude' => 0,
      'id' => 'edit_node',
      'table' => 'node',
      'field' => 'edit_node',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'changed' => array(
      'order' => 'DESC',
      'granularity' => 'second',
      'id' => 'changed',
      'table' => 'node',
      'field' => 'changed',
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
        'article' => 'article',
        'audio' => 'audio',
        'event' => 'event',
        'file' => 'file',
        'forum' => 'forum',
        'video' => 'video',
      ),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'type_op',
        'identifier' => 'type',
        'label' => 'Type',
        'optional' => 1,
        'single' => 0,
        'remember' => 0,
        'reduce' => 1,
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'type_1' => array(
      'operator' => 'in',
      'value' => array(
        'article' => 'article',
        'audio' => 'audio',
        'event' => 'event',
        'file' => 'file',
        'forum' => 'forum',
        'video' => 'video',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type_1',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'administer nodes',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('items_per_page', 100);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'bulk');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'summary' => '',
    'columns' => array(
      'title' => 'title',
      'type' => 'type',
      'name' => 'name',
      'status' => 'status',
      'changed' => 'changed',
      'edit_node' => 'edit_node',
    ),
    'info' => array(
      'title' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'type' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'name' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'status' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'changed' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'edit_node' => array(
        'separator' => '',
      ),
    ),
    'default' => '-1',
    'execution_type' => '2',
    'max_performance' => 1,
    'display_type' => '0',
    'hide_selector' => 0,
    'preserve_selection' => 1,
    'display_result' => 1,
    'merge_single_action' => 1,
    'operations' => array(
      'og_add_group_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_assign_owner_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'views_bulk_operations_delete_node_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_mass_update-a27b9efabcd054685a549378b174ad11' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'system_message_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'views_bulk_operations_ruleset_action_rules_set_1' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'views_bulk_operations_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'views_bulk_operations_script_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'imagecache_flush_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'imagecache_generate_all_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'imagecache_generate_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'og_make_private_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'og_make_public_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_make_sticky_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_make_unsticky_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_mass_update-c4d3b28efb86fd703619a50b74d43794' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'views_bulk_operations_fields_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
        'settings' => array(
          'php_code' => 0,
          'show_tokens' => 0,
          'display_fields' => array(
            '_all_' => '_all_',
          ),
        ),
      ),
      'views_bulk_operations_taxonomy_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'views_bulk_operations_argument_selector_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_promote_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_mass_update-14de7d028b4bffdf2b4a266562ca18ac' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_mass_update-9c585624b9b3af0b4687d5f97f35e047' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_publish_action' => array(
        'selected' => 1,
        'skip_confirmation' => 0,
        'label' => 'Publish',
      ),
      'system_goto_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'emfield_operations_reload' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'og_remove_groups_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_unpromote_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'og_remove_group_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_mass_update-8ce21b08bb8e773d10018b484fe4815e' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'user_stats_login_count_reset_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'user_stats_post_count_reset_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_save_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'system_send_email_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_mass_update-0ccad85c1ebe4c9ceada1aa64293b080' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_unpublish_action' => array(
        'selected' => 1,
        'skip_confirmation' => 0,
        'label' => 'Unpublish',
      ),
      'node_unpublish_by_keyword_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'pathauto_node_update_alias_multiple-620e193b20ba9caa374fea9ca0ad38f0' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
    ),
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'summary' => '',
    'columns' => array(
      'title' => 'title',
      'type' => 'type',
      'name' => 'name',
      'status' => 'status',
      'changed' => 'changed',
      'edit_node' => 'edit_node',
    ),
    'info' => array(
      'title' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'type' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'name' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'status' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'changed' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'edit_node' => array(
        'separator' => '',
      ),
    ),
    'default' => '-1',
    'execution_type' => '2',
    'max_performance' => 1,
    'display_type' => '0',
    'hide_selector' => 0,
    'preserve_selection' => 1,
    'display_result' => 1,
    'merge_single_action' => 1,
    'operations' => array(
      'node_assign_owner_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'nodewords_mass_update-48d00920397f9d8f23f7088c88056286' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'views_bulk_operations_delete_node_action' => array(
        'selected' => 1,
        'skip_confirmation' => 0,
        'label' => 'Delete',
      ),
      'node_mass_update-a27b9efabcd054685a549378b174ad11' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'system_message_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'views_bulk_operations_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'views_bulk_operations_script_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'imagecache_flush_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'imagecache_generate_all_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'imagecache_generate_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_make_sticky_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_make_unsticky_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_mass_update-c4d3b28efb86fd703619a50b74d43794' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'views_bulk_operations_fields_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
        'settings' => array(
          'php_code' => 0,
          'show_tokens' => 0,
          'display_fields' => array(
            '_all_' => '_all_',
          ),
        ),
      ),
      'views_bulk_operations_taxonomy_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'views_bulk_operations_argument_selector_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_promote_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_mass_update-14de7d028b4bffdf2b4a266562ca18ac' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_mass_update-9c585624b9b3af0b4687d5f97f35e047' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_publish_action' => array(
        'selected' => 1,
        'skip_confirmation' => 0,
        'label' => 'Publish',
      ),
      'system_goto_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'emfield_operations_reload' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_unpromote_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_mass_update-8ce21b08bb8e773d10018b484fe4815e' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'user_stats_login_count_reset_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'user_stats_post_count_reset_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_save_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'system_send_email_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_mass_update-0ccad85c1ebe4c9ceada1aa64293b080' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'node_unpublish_action' => array(
        'selected' => 1,
        'skip_confirmation' => 0,
        'label' => 'Unpublish',
      ),
      'node_unpublish_by_keyword_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'pathauto_node_update_alias_multiple-620e193b20ba9caa374fea9ca0ad38f0' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
    ),
  ));
  $handler->override_option('path', 'admin/content/node/bulk');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'Bulk Editor',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->override_option('filters', array(
    'type_1' => array(
      'operator' => 'in',
      'value' => array(
        'group' => 'group',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type_1',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Manage Groups');
  $handler->override_option('footer', '<a href="mailto:support@woven.org">Add a new group</a>');
  $handler->override_option('footer_format', '3');
  $handler->override_option('footer_empty', 0);
  $handler->override_option('empty', 'There are no groups in this community. Please contact <a href="http://woven.org/support" target="blank">Woven Support</a>.');
  $handler->override_option('empty_format', '5');
  $handler->override_option('path', 'admin/content/group/bulk');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  // Exported view: admin_user_bulk
  $view = new view;
  $view->name = 'admin_user_bulk';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'users';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'name' => array(
      'label' => 'Username',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
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
      'hide_alter_empty' => 1,
      'link_to_user' => 1,
      'overwrite_anonymous' => 0,
      'anonymous_text' => '',
      'exclude' => 0,
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'status' => array(
      'label' => 'Active',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
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
      'hide_alter_empty' => 1,
      'type' => 'yes-no',
      'not' => 0,
      'exclude' => 0,
      'id' => 'status',
      'table' => 'users',
      'field' => 'status',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'created' => array(
      'label' => 'Member for',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
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
      'hide_alter_empty' => 1,
      'date_format' => 'raw time ago',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'created',
      'table' => 'users',
      'field' => 'created',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'access' => array(
      'label' => 'Last access',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
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
      'hide_alter_empty' => 1,
      'date_format' => 'raw time ago',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'access',
      'table' => 'users',
      'field' => 'access',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'edit_node' => array(
      'label' => 'Operations',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
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
      'hide_alter_empty' => 1,
      'text' => 'Edit',
      'exclude' => 0,
      'id' => 'edit_node',
      'table' => 'users',
      'field' => 'edit_node',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'uid' => array(
      'operator' => 'not in',
      'value' => array(
        0 => 0,
        1 => '1',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'status' => array(
      'operator' => '=',
      'value' => 'All',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'operator' => '',
        'identifier' => 'status',
        'label' => 'Active',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'status',
      'table' => 'users',
      'field' => 'status',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'User operations');
  $handler->override_option('style_plugin', 'bulk');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'summary' => '',
    'columns' => array(
      'name' => 'name',
      'status' => 'status',
      'created' => 'created',
      'access' => 'access',
      'edit_node' => 'edit_node',
    ),
    'info' => array(
      'name' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'status' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'created' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'access' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'edit_node' => array(
        'separator' => '',
      ),
    ),
    'default' => 'access',
    'execution_type' => '2',
    'max_performance' => 1,
    'display_type' => '0',
    'hide_selector' => 0,
    'preserve_selection' => 1,
    'display_result' => 1,
    'merge_single_action' => 1,
    'operations' => array(
      'user_block_ip_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'user_block_user_action' => array(
        'selected' => 1,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'user_user_operations_block' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'nodewords_mass_update-3925bd6c9edcf332c87f461396305366' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'views_bulk_operations_delete_user_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'system_message_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'views_bulk_operations_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'views_bulk_operations_script_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'views_bulk_operations_profile_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'views_bulk_operations_user_roles_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'views_bulk_operations_argument_selector_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'system_goto_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'user_stats_login_count_reset_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'user_stats_post_count_reset_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'system_send_email_action' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'user_user_operations_unblock' => array(
        'selected' => 1,
        'skip_confirmation' => 0,
        'label' => '',
      ),
      'pathauto_user_update_alias_multiple-620e193b20ba9caa374fea9ca0ad38f0' => array(
        'selected' => 0,
        'skip_confirmation' => 0,
        'label' => '',
      ),
    ),
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'admin/content/user/bulk');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
