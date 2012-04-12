<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ft_activity_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_heartbeat_message_info().
 */
function ft_activity_heartbeat_message_info() {
  $messages = array();

  // Exported heartbeat message: heartbeat_follow_group
  $messages['heartbeat_follow_group'] = array (
    'message' => '!username has followed !group',
    'message_concat' => '%usernames% have followed !group',
    'message_id' => 'heartbeat_follow_group',
    'concat_args' => 
    array (
      'type' => 'summary',
      'group_by' => 'node',
      'group_target' => 'username',
      'group_by_target' => '',
      'group_num_max' => '',
      'merge_separator' => ', ',
      'merge_end_separator' => ' and ',
      'roles' => 
      array (
        0 => '0',
        1 => '0',
        2 => '0',
        3 => '0',
        4 => '0',
      ),
      'merge_separator_t' => '0',
      'merge_end_separator_t' => '1',
    ),
    'description' => 'User follows a group',
    'perms' => '1',
    'custom' => 1,
    'variables' => 
    array (
      'build_mode' => 'full',
    ),
  );

  // Exported heartbeat message: user_adds_content
  $messages['user_adds_content'] = array (
    'message' => '!username has added the !type !node_title !group_title',
    'message_concat' => '',
    'message_id' => 'user_adds_content',
    'concat_args' => 
    array (
      'type' => 'single',
      'group_by' => 'none',
      'group_target' => '',
      'group_by_target' => '',
      'group_num_max' => '',
      'merge_separator' => '',
      'merge_end_separator' => '',
      'roles' => 
      array (
        0 => '0',
        1 => '0',
        2 => '0',
        3 => '0',
        4 => '0',
      ),
      'merge_separator_t' => '0',
      'merge_end_separator_t' => '0',
    ),
    'description' => 'User adds content',
    'perms' => '1',
    'custom' => 1,
    'variables' => 
    array (
      'build_mode' => 'full',
    ),
  );

  // Exported heartbeat message: user_adds_comment
  $messages['user_adds_comment'] = array (
    'message' => '!username commented on !node_title',
    'message_concat' => '',
    'message_id' => 'user_adds_comment',
    'concat_args' => 
    array (
      'type' => 'count',
      'group_by' => 'none',
      'group_target' => '',
      'group_by_target' => '',
      'group_num_max' => '',
      'merge_separator' => '',
      'merge_end_separator' => '',
      'roles' => 
      array (
        0 => '0',
        1 => '0',
        2 => '0',
        3 => '0',
        4 => '0',
      ),
      'merge_separator_t' => '0',
      'merge_end_separator_t' => '0',
    ),
    'description' => 'User adds a comment',
    'perms' => '1',
    'custom' => 1,
    'variables' => 
    array (
      'build_mode' => 'full',
    ),
  );

  // Exported heartbeat message: mc_facebook_like
  $messages['mc_facebook_like'] = array (
    'message' => '!username liked the !node_type !node_title on facebook',
    'message_concat' => '',
    'message_id' => 'mc_facebook_like',
    'concat_args' => 
    array (
      'type' => 'single',
      'group_by' => 'none',
      'group_target' => '',
      'group_by_target' => '',
      'group_num_max' => '',
      'merge_separator' => '',
      'merge_end_separator' => '',
      'roles' => 
      array (
        0 => '0',
        1 => '0',
        2 => '0',
        3 => '0',
        4 => '0',
      ),
      'merge_separator_t' => '0',
      'merge_end_separator_t' => '0',
    ),
    'description' => 'User likes a post on facebook',
    'perms' => '1',
    'custom' => 1,
    'variables' => 
    array (
      'build_mode' => 'full',
    ),
  );


  return $messages;
}

/**
 * Implementation of hook_rules_defaults().
 */
function ft_activity_rules_defaults() {
  return array(
    'rules' => array(
      'rules_user_adds_a_comment' => array(
        '#type' => 'rule',
        '#set' => 'event_comment_publish',
        '#label' => 'User adds a comment',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'ghh',
          'ft_activity' => 'ft_activity',
        ),
        '#status' => 'default',
        '#conditions' => array(),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'action',
            '#settings' => array(
              'uid_param' => '[comment_author:uid]',
              'uid_target_param' => '',
              'nid_param' => '[node:nid]',
              'nid_target_param' => '[node:og-id]',
              'message_id_param' => 'user_adds_comment',
              'variables_param' => '@username=|=[comment_author:link-realname-or-username]-|-@node_title=|=[node:title-link]',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'uid_param' => array(
                    '0' => 'comment_author',
                    '1' => ':global',
                  ),
                  'uid_target_param' => array(
                    '0' => ':global',
                  ),
                  'nid_param' => array(
                    '0' => 'node',
                    '1' => ':global',
                  ),
                  'nid_target_param' => array(
                    '0' => 'node',
                    '1' => ':global',
                  ),
                  'message_id_param' => array(
                    '0' => ':global',
                  ),
                  'variables_param' => array(
                    '0' => 'comment_author',
                    '1' => 'node',
                    '2' => ':global',
                  ),
                ),
              ),
            ),
            '#name' => 'heartbeat_rules_default_action',
            '#info' => array(
              'label' => 'Logs the username and the node where the comment was added',
              'label callback' => FALSE,
              'eval input' => array(
                '0' => 'uid_param',
                '1' => 'uid_target_param',
                '2' => 'nid_param',
                '3' => 'nid_target_param',
                '4' => 'message_id_param',
                '5' => 'variables_param',
              ),
              'module' => 'heartbeat',
            ),
          ),
        ),
        '#version' => 6003,
      ),
      'rules_user_adds_content' => array(
        '#type' => 'rule',
        '#set' => 'event_node_insert',
        '#label' => 'User adds content',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'ghh',
          'ft_activity' => 'ft_activity',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Created content is new',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#name' => 'rules_condition_content_is_new',
            '#settings' => array(
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'condition',
          ),
          '1' => array(
            '#weight' => 0,
            '#negate' => 1,
            '#info' => array(
              'label' => 'Created content is Group',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#name' => 'rules_condition_content_is_type',
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'group' => 'group',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'action',
            '#settings' => array(
              'uid_param' => '[author:uid]',
              'uid_target_param' => '0',
              'nid_param' => '[node:nid]',
              'nid_target_param' => '[node:og-id]',
              'message_id_param' => 'user_adds_content',
              'variables_param' => '@username=|=[author:link-realname-or-username]-|-@type=|=[node:type-name-lowercase]-|-@node_title=|=[node:title-link]-|-@group_title=|=<?php if(!empty($node->og_groups)): ?> in [node:og-title-link] <?php endif;?>',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'uid_param' => array(
                    '0' => 'author',
                    '1' => ':global',
                  ),
                  'uid_target_param' => array(
                    '0' => ':global',
                  ),
                  'nid_param' => array(
                    '0' => 'node',
                    '1' => ':global',
                  ),
                  'nid_target_param' => array(
                    '0' => 'node',
                    '1' => ':global',
                  ),
                  'message_id_param' => array(
                    '0' => ':global',
                  ),
                  'variables_param' => array(
                    '0' => 'node',
                    '1' => 'author',
                    '2' => ':global',
                  ),
                ),
                'rules_input_evaluator_php' => array(
                  'variables_param' => array(
                    '0' => 'node',
                  ),
                ),
              ),
            ),
            '#name' => 'heartbeat_rules_default_action',
            '#info' => array(
              'label' => 'Logs the user, the content type and the title of the recently created node',
              'label callback' => FALSE,
              'eval input' => array(
                '0' => 'uid_param',
                '1' => 'uid_target_param',
                '2' => 'nid_param',
                '3' => 'nid_target_param',
                '4' => 'message_id_param',
                '5' => 'variables_param',
              ),
              'module' => 'heartbeat',
            ),
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}
