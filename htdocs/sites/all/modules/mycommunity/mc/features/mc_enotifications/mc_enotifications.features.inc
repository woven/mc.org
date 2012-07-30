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
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'event_feed' => 'event_feed',
                'group' => 'group',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_type',
            '#info' => array(
              'label' => 'Created content is Event Feed or Group',
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
            '#name' => 'rules_action_mail',
            '#settings' => array(
              'to' => 'support@woven.org',
              'from' => '',
              'subject' => 'A new [node:type-name] was just added',
              'message' => 'New content has just been added!

Type: [node:type-name]
Title: [node:title]
URL: [node:node-url]',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'subject' => array(
                    '0' => 'node',
                    '1' => ':global',
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
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
      'rules_enotifications_newuser' => array(
        '#type' => 'rule',
        '#set' => 'event_user_insert',
        '#label' => 'eNotification: New User',
        '#active' => 0,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'enotifications',
          '1' => 'mc_enotifications',
        ),
        '#status' => 'default',
        '#conditions' => array(),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'action',
            '#settings' => array(
              'to' => 'support@woven.org',
              'from' => '',
              'subject' => 'A new user just joined: [account:realname]',
              'message' => 'A new user just joined!

Name: [account:realname]
User: [account:user]
URL: [account:account-url]',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'subject' => array(
                    '0' => 'account',
                    '1' => ':global',
                  ),
                  'message' => array(
                    '0' => 'account',
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
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}
