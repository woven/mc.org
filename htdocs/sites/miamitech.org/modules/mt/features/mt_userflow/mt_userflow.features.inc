<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function mt_userflow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_rules_defaults().
 */
function mt_userflow_rules_defaults() {
  return array(
    'rules' => array(
      'rules_event_firstgroup' => array(
        '#type' => 'rule',
        '#set' => 'event_node_insert',
        '#label' => 'user created his first group',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'mt_userflow',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'group' => 'group',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_type',
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
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'action',
            '#settings' => array(
              'message' => 'Nice group. Now, <a href="/node/add/event">add an event</a> or <a href="/node/add/event-feed">import your events feed</a>',
              'error' => 0,
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'message' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#name' => 'rules_action_drupal_message',
            '#info' => array(
              'label' => 'Show a configurable message on the site',
              'module' => 'System',
              'eval input' => array(
                '0' => 'message',
              ),
            ),
          ),
        ),
        '#version' => 6003,
      ),
      'rules_userflow_viewpage' => array(
        '#type' => 'rule',
        '#set' => 'event_init',
        '#label' => 'User viewing any page except on form submits',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'mt_userflow',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'code' => 'if(empty($_POST[\'form_build_id\'])){
    return true;
}else{
    return false;
};',
              'vars' => array(),
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'code' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#name' => 'rules_condition_custom_php',
            '#info' => array(
              'label' => 'don\'t run on form submit\'s',
              'label callback' => FALSE,
              'module' => 'PHP',
              'eval input' => array(
                '0' => 'code',
              ),
            ),
            '#weight' => 0,
          ),
          '1' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'user has never created a group',
              'label callback' => FALSE,
              'module' => 'PHP',
              'eval input' => array(
                '0' => 'code',
              ),
            ),
            '#name' => 'rules_condition_custom_php',
            '#settings' => array(
              'code' => 'if(!mt_count_user_ct("group")){
    return true;
}else{
   return false;
}',
              'vars' => array(),
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'code' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#type' => 'condition',
          ),
          '2' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Execute custom PHP code',
              'module' => 'PHP',
              'eval input' => array(
                '0' => 'code',
              ),
            ),
            '#name' => 'rules_condition_custom_php',
            '#settings' => array(
              'code' => 'if(arg(0) == "user"){
return true;
}
return false;',
              'vars' => array(),
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'code' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Show a configurable message on the site',
              'module' => 'System',
              'eval input' => array(
                '0' => 'message',
              ),
            ),
            '#name' => 'rules_action_drupal_message',
            '#settings' => array(
              'message' => 'It looks like you haven\'t yet told us about your group. Please <a href="/node/add/group">add your group now</a>',
              'error' => 0,
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'message' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
      'rules_user_loginfirst' => array(
        '#type' => 'rule',
        '#set' => 'event_user_login',
        '#label' => 'user logged in for the first time',
        '#active' => 0,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'mt_userflow',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'code' => '//dsm(first_login_get_data($account));
return first_login_get_data($account,\'status\');',
              'vars' => array(
                '0' => 'account',
              ),
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'code' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#name' => 'rules_condition_custom_php',
            '#info' => array(
              'label' => 'Execute custom PHP code',
              'module' => 'PHP',
              'eval input' => array(
                '0' => 'code',
              ),
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#info' => array(
              'label' => 'Show a configurable message on the site',
              'module' => 'System',
              'eval input' => array(
                '0' => 'message',
              ),
            ),
            '#name' => 'rules_action_drupal_message',
            '#settings' => array(
              'message' => 'Ok, your account is created. Now, <a href="/node/add/group">tell us about your group</a>.',
              'error' => 0,
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'message' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#type' => 'action',
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
      'rules_user_updatednogroup' => array(
        '#type' => 'rule',
        '#set' => 'event_user_update',
        '#label' => 'user updated profile for the first time',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'mt_userflow',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'OR',
            '0' => array(
              '#weight' => 0,
              '#type' => 'condition',
              '#settings' => array(
                'code' => '//check if the acting user is the same as the updated user
if($account->uid == $user->uid AND $_POST[\'form_id\']==\'user_profile_form\'){
	//get the user data
	$udata = unserialize($account->data);
	
	if(!$udata[\'updatedprofile\']){
		//the user has never updated his profile profile, continue to the next step.
		user_save($account,array("updatedprofile"=>1));
		return true;
	}
}
return false;',
                'vars' => array(
                  '0' => 'account',
                  '1' => 'user',
                ),
                '#eval input' => array(
                  'token_rules_input_evaluator' => array(
                    'code' => array(
                      '0' => ':global',
                    ),
                  ),
                ),
              ),
              '#name' => 'rules_condition_custom_php',
              '#info' => array(
                'label' => 'Execute custom PHP code',
                'module' => 'PHP',
                'eval input' => array(
                  '0' => 'code',
                ),
              ),
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Show a configurable message on the site',
              'module' => 'System',
              'eval input' => array(
                '0' => 'message',
              ),
            ),
            '#name' => 'rules_action_drupal_message',
            '#settings' => array(
              'message' => 'Ok, your account is created. Now, <a href="/node/add/group">tell us about your group</a>.',
              'error' => 0,
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'message' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}
