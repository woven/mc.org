<?php

/**
 * @file
 * 
 * Contains the two functions used for sending out mail messages.
 */
function _femail_get_emails($tid, $account, $nid){
  // We'll let our SQL do the magic
  $results = db_query("SELECT DISTINCT u.uid FROM {users} u, {femail_user_subscriptions} f WHERE u.uid = f.uid AND (tid = %d OR tid = 0) AND u.uid != %d", $tid, $account->uid);
  $node = node_load($nid);
  $emails = array();
  while($row = db_fetch_array($results)){
    $account = user_load(array('uid' => $row['uid']));
    if(node_access('view', $node, $account)){
      $emails[] = "<{$account->mail}>";
    }
  }
  return $emails;
}

function _femail_send_message($tid, $subject, $body, $nid, $files = array(), $cid = 0, $inreplyto = FALSE){
  global $user;
  //$emails = _femail_get_emails($tid, $user, $nid);
  $emails = _mc_api_users_receive_notifications_when_started_commented_discussions($tid, $nid, $cid);
  $emails = $emails + _mc_api_users_receive_all_notifications($tid, $user, $nid);

  $emails = array_unique($emails);
  $forum_term = taxonomy_get_term($tid);
  if(count($emails)){
    $from_emails = variable_get('femail_emails', array());
    $from_name = ($user->profile_real_name != '') ? $user->profile_real_name : $user->name;
    $from = ($from_name ? '=?UTF-8?B?' . base64_encode($from_name . ' via ' . variable_get('site_name', ' ')) . '?= ' : '') . '<' . ($user->mail ? _mc_api_generate_email_based_on_domain('reply-' . md5($tid . $nid), $from_emails[$tid]) : _mc_api_generate_email_based_on_domain('reply-' . md5($tid . $nid), $from_emails[$tid])) . '>';
    //$from = ($user->name ? '=?UTF-8?B?' . base64_encode($user->name) . '?= ' : '') . '<' . ($user->mail ? $user->mail : $from_emails[$tid]) . '>';
    global $base_url;
    $parts = parse_url($base_url);
    $msgid = '<' . md5(microtime()) . '@' . $parts['host'] . '>';
    $node = node_load(array(
      'nid' => $nid
    ));
    db_query("INSERT INTO {femail_msgs} (nid, cid, msgid) VALUES (%d, %d, '%s')", $nid, $cid, $msgid);  
    if(count($files)){
      $additional_text = "Files:\n";
      foreach($files as $file){
        $file = (array)$file;
        $additional_text .= file_create_url(str_replace(' ', '%20', $file['filepath'])) . "\n";
      }
      $body = $additional_text . "\n" . $body;
    }
    $message = array(
      'id' => 'femail_message',
      'from' => $from,
      'subject' => $node->title,
      'body' => drupal_wrap_mail(strip_tags($body)),
      'to' => $from_emails[$tid],
      'headers' => array(
        'Content-Type' => 'text/html; charset=UTF-8; format=flowed',
        'Return-path' => $from_emails[$tid],
        'From' => $from,
        'Message-ID' => $msgid,
        'Reply-to' => $from_emails[$tid],
        'List-id' => check_plain($forum_term->name) . ' <' . str_replace("@", ".", $from_emails[$tid]) . '>',
        'List-post' => '<mailto:' . $from_emails[$tid] . '>',
        'List-archive' => '<' . url('forum/' . $tid, array(
          'absolute' => TRUE
        )) . '>',
        'Thread-topic' => check_plain($node->title),
        'List-subscribe' => '<' . url('user/register', array(
          'absolute' => TRUE
        )) . '>',
        'Bcc' => implode(", ", $emails)
      )
    );
    if($inreplyto){
      $message['headers']['In-reply-to'] = $inreplyto;
    }
    $_SESSION['element_created_id'] = ($cid != 0) ? 'comment/' . $cid . '/discussion/' . $nid : 'discussion/' . $nid ;
    drupal_mail_send($message);
  }
}