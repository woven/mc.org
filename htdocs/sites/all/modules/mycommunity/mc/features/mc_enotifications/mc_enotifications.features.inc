<?php

/**
 * Implementation of hook_rules_defaults().
 */
function mc_enotifications_rules_defaults() {
  return array(
    'rules' => array(
      'rules_enotifications_newcontent' => array(
        '#type' => 'rule',
        '#set' => 'event_node_insert',
        '#label' => 'eNotification: Saving new content',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'enotifications',
          'mc_enotifications' => 'mc_enotifications',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Created content is Event or Event Feed or Group',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#name' => 'rules_condition_content_is_type',
            '#settings' => array(
              'type' => array(
                'event' => 'event',
                'event_feed' => 'event_feed',
                'group' => 'group',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#type' => 'action',
            '#settings' => array(
              'to' => 'support@woven.org',
              'from' => '',
              'subject' => 'New Content has been created',
              'message' => 'New Content has been created
Content Type: [node:type-name]	
Content Title: [node:title]',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'subject' => array(
                    '0' => ':global',
                  ),
                  'message' => array(
                    '0' => 'node',
                    '1' => ':global',
                  ),
                  'from' => array(
                    '0' => ':global',
                  ),
                  'to' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#name' => 'rules_action_mail',
            '#info' => array(
              'label' => 'Send a mail to an arbitrary mail address',
              'module' => 'System',
              'eval input' => array(
                '0' => 'subject',
                '1' => 'message',
                '2' => 'from',
                '3' => 'to',
              ),
            ),
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
      'rules_enotifications_newuser' => array(
        '#type' => 'rule',
        '#set' => 'event_user_insert',
        '#label' => 'eNotification: New User',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'enotifications',
          'mc_enotifications' => 'mc_enotifications',
        ),
        '#status' => 'default',
        '#conditions' => array(),
        '#actions' => array(
          '0' => array(
            '#type' => 'action',
            '#settings' => array(
              'to' => 'support@woven.org',
              'from' => '',
              'subject' => 'New User has been created',
              'message' => 'New User has been created',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'subject' => array(
                    '0' => ':global',
                  ),
                  'message' => array(
                    '0' => ':global',
                  ),
                  'from' => array(
                    '0' => ':global',
                  ),
                  'to' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#name' => 'rules_action_mail',
            '#info' => array(
              'label' => 'Send a mail to an arbitrary mail address',
              'module' => 'System',
              'eval input' => array(
                '0' => 'subject',
                '1' => 'message',
                '2' => 'from',
                '3' => 'to',
              ),
            ),
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}
