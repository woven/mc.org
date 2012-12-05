<?php

/**
 * Implementation of hook_views_default_views().
 */
function ft_landing_contexts_views_default_views() {
  $views = array();

  // Exported view: help_block
  $view = new view;
  $view->name = 'help_block';
  $view->description = 'View for the Block in the Landing Pages';
  $view->tag = '';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'field_block_title_value' => array(
      'label' => '',
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
        'strip_tags' => 1,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
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
      'id' => 'field_block_title_value',
      'table' => 'node_data_field_block_title',
      'field' => 'field_block_title_value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_block_body_value' => array(
      'label' => '',
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
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_block_body_value',
      'table' => 'node_data_field_block_body',
      'field' => 'field_block_body_value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_block_link_url' => array(
      'label' => '',
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
      'label_type' => 'none',
      'format' => 'title_plain',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_block_link_url',
      'table' => 'node_data_field_block_link',
      'field' => 'field_block_link_url',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_block_link_url_1' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => '<div class="see-all">
  <a href="[field_block_link_url_1]">
    <span>[field_block_link_url]</span>
    <span class="ico-small ico-see-all"></span>
  </a>
</div>',
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
      'label_type' => 'none',
      'format' => 'plain',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_block_link_url_1',
      'table' => 'node_data_field_block_link',
      'field' => 'field_block_link_url',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'nothing' => array(
      'label' => '',
      'alter' => array(
        'text' => '<div class="prose">
  [field_block_body_value]
  [field_block_link_url_1]
</div>',
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
      'exclude' => 0,
      'id' => 'nothing',
      'table' => 'views',
      'field' => 'nothing',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'nid' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'php',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'not' => 0,
      'id' => 'nid',
      'table' => 'node',
      'field' => 'nid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        2 => 0,
        4 => 0,
        8 => 0,
        9 => 0,
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_taxonomy_tid_term_page' => 0,
      'default_taxonomy_tid_node' => 0,
      'default_taxonomy_tid_limit' => 0,
      'default_taxonomy_tid_vids' => array(
        1 => 0,
        4 => 0,
      ),
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_php' => 'global $user;
if(arg(0)==\'node\' AND $user->uid == 0){
  $nid = arg(1);
  $node = node_load($nid);
  if(!empty($node->field_block_body[\'0\'][\'value\']) || !empty($node->field_block_title[\'0\'][\'value\'])){
    return $nid;
  }
}',
      'validate_argument_node_type' => array(
        'article' => 0,
        'audio' => 0,
        'event' => 0,
        'file' => 0,
        'group' => 0,
        'link' => 0,
        'nnews' => 0,
        'webform' => 0,
        'npage' => 0,
        'page' => 0,
        'place' => 0,
        'video' => 0,
        'company' => 0,
        'event_feed' => 0,
        'news_feed' => 0,
        'gallery' => 0,
        'gallery_image' => 0,
        'forum' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        1 => 0,
        4 => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_is_member' => '0',
      'validate_argument_group_node_type' => array(
        'group' => 0,
        'company' => 0,
      ),
      'validate_argument_php' => '',
      'override' => array(
        'button' => 'Override',
      ),
      'validate_argument_node_flag_name' => '*relationship*',
      'validate_argument_node_flag_test' => 'flaggable',
      'validate_argument_node_flag_id_type' => 'id',
      'validate_argument_user_flag_name' => '*relationship*',
      'validate_argument_user_flag_test' => 'flaggable',
      'validate_argument_user_flag_id_type' => 'id',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler->override_option('style_plugin', 'semanticviews_default');
  $handler->override_option('style_options', array(
    'grouping' => 'field_block_title_value',
    'group' => array(
      'element_type' => 'div',
      'class' => 'block-title',
    ),
    'list' => array(
      'element_type' => '',
      'class' => '',
    ),
    'row' => array(
      'element_type' => '',
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
      'nothing' => array(
        'element_type' => 'div',
        'class' => 'block-content clear-block',
      ),
    ),
    'skip_blank' => 0,
  ));
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  // Exported view: mc_page_menu
  $view = new view;
  $view->name = 'mc_page_menu';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => '',
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
        'max_length' => '15',
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
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('sorts', array(
    'value0' => array(
      'id' => 'value0',
      'table' => 'draggableviews_structure_node0',
      'field' => 'value0',
    ),
  ));
  $handler->override_option('arguments', array(
    'null' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'php',
      'default_argument' => '',
      'validate_type' => 'php',
      'validate_fail' => 'not found',
      'must_not_be' => 0,
      'id' => 'null',
      'table' => 'views',
      'field' => 'null',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
      ),
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_taxonomy_tid_term_page' => 0,
      'default_taxonomy_tid_node' => 0,
      'default_taxonomy_tid_limit' => 0,
      'default_taxonomy_tid_vids' => array(
        1 => 0,
        2 => 0,
        3 => 0,
      ),
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_php' => 'return _page_get_first_nid();',
      'validate_argument_node_type' => array(
        'article' => 0,
        'audio' => 0,
        'file' => 0,
        'group' => 0,
        'link' => 0,
        'nnews' => 0,
        'webform' => 0,
        'npage' => 0,
        'page' => 0,
        'place' => 0,
        'taxonomy_feature' => 0,
        'taxonomy_topic' => 0,
        'video' => 0,
        'event_feed' => 0,
        'gallery' => 0,
        'gallery_image' => 0,
        'forum' => 0,
        'event' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        1 => 0,
        2 => 0,
        3 => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_node_flag_name' => '*relationship*',
      'validate_argument_node_flag_test' => 'flaggable',
      'validate_argument_node_flag_id_type' => 'id',
      'validate_argument_user_flag_name' => '*relationship*',
      'validate_argument_user_flag_test' => 'flaggable',
      'validate_argument_user_flag_id_type' => 'id',
      'validate_argument_is_member' => '0',
      'validate_argument_group_node_type' => array(
        'group' => 0,
      ),
      'validate_argument_php' => 'if(function_exists("_page_node_howmany") && _page_node_howmany() > 1){
  return true;
}
return false;',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'page' => 'page',
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
        'button' => 'Override',
      ),
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
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
  ));
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'administer nodes',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('items_per_page', 0);
  $handler->override_option('style_plugin', 'draggabletable');
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->override_option('fields', array(
    'phpcode_1' => array(
      'label' => 'active status',
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
      'value' => '<?php
$view = views_get_current_view();
if(($_GET[\'q\'] == "node/" . $data->nid) OR ($view->args[0] == $data->nid AND $_GET[\'q\'] == \'about\')){
echo "active";
}else{
echo "";
}
?>',
      'exclude' => 1,
      'id' => 'phpcode_1',
      'table' => 'customfield',
      'field' => 'phpcode',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'phpcode' => array(
      'label' => 'PHP code: get current path',
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
      'value' => '<?php
$view = views_get_current_view();
if($view->args[0] == $data->nid){
echo "about";
}else{
echo "node/".$data->nid;
}
?>',
      'exclude' => 1,
      'id' => 'phpcode',
      'table' => 'customfield',
      'field' => 'phpcode',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => 'empty, trimmed',
      'alter' => array(
        'alter_text' => 0,
        'text' => '<li class="leaf [phpcode_1]">[title]</li>',
        'make_link' => 1,
        'path' => '[phpcode]',
        'absolute' => 0,
        'link_class' => '[phpcode_1]',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '15',
        'word_boundary' => 0,
        'ellipsis' => 0,
        'html' => 1,
        'strip_tags' => 1,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'exclude' => 1,
      'spaces' => array(
        'type' => NULL,
        'frontpage' => FALSE,
      ),
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'nid' => array(
      'label' => 'Nid',
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
      'exclude' => 1,
      'id' => 'nid',
      'table' => 'node',
      'field' => 'nid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'nothing' => array(
      'label' => 'Custom text',
      'alter' => array(
        'text' => '<li class="leaf [phpcode_1]">
[title]
</li>',
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
      'exclude' => 0,
      'id' => 'nothing',
      'table' => 'views',
      'field' => 'nothing',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('style_plugin', 'semanticviews_default');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'group' => array(
      'element_type' => 'h3',
      'class' => 'title',
    ),
    'list' => array(
      'element_type' => 'ul',
      'class' => 'menu',
    ),
    'row' => array(
      'element_type' => '',
      'class' => '',
      'last_every_nth' => '',
      'first_class' => '',
      'last_class' => '',
      'striping_classes' => 'odd even',
    ),
  ));
  $handler->override_option('row_plugin', 'semanticviews_fields');
  $handler->override_option('row_options', array(
    'semantic_html' => array(
      'nothing' => array(
        'element_type' => '',
        'class' => '',
        'label_element_type' => '',
        'label_class' => '',
      ),
    ),
    'skip_blank' => 0,
  ));
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  return $views;
}
