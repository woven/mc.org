<?php


function _mc_og_form_add_og_audience(&$form, &$form_state) {
  global $user;
  // Determine the selected groups if it is stored in the form_state.
  if (!empty($form_state['og_gids'][0]) && empty($form_state['og_groups'])) {
    $gids = explode(',', $form_state['og_gids'][0]);
  }

  $node = $form['#node'];
  $required = variable_get('og_audience_required', 0) && !user_access('post to all the groups');
  $is_optgroup = FALSE;

  // Determine the list of groups that are shown.
  // Start by collecting all groups that the user is a member of.
  $subs = og_get_subscriptions($user->uid);
  $options = array();
  foreach ($subs as $key => $val) {
    $options[$key] = $val['title'];
  }
  if (user_access('post to all the groups')) {
    // Node admins see all of groups.
    $all = og_all_groups_options();
    $other = array_diff_assoc($all, $options);
    // Use an optgroup if admin is not a member of all groups.
    if ($other) {
      $options = array(
        t('My groups') => $options,
        t('Other groups') => $other,
      );
      $is_optgroup = TRUE;
    }
    else {
      $options = $all;
    }
  }

  // Show read only item if we are non-admin, and in simple mode (i.e. non-checkboxes) and at least one group is in querystring
  $simple = !user_access('administer organic groups') && !variable_get('og_audience_checkboxes', TRUE) && count($gids);

  // determine value of audience multi-select
  if (count($options) == 1 && $required) {
    $gids = array_keys($options);
    $gid = $gids[0];
    $groups = array($gid);
    // also show read only mode if user has 1 option and we are in required mode
    $simple = TRUE;
  }
  elseif (!empty($gids)) {
    // populate field from the querystring if sent
    $groups = $gids;
    if (!user_access('post to all the groups') && $simple) {
      // filter out any groups where author is not a member. we cannot rely on fapi to do this when in simple mode.
      $groups = array_intersect($gids, array_keys($options));
    }
  }
  elseif (isset($node->og_groups)) {
    $groups = $node->og_groups;
  }
  else {
    $groups = array();
  }
  // This is only used by og_access module right now.
  $form['og_initial_groups'] = array(
    '#type' => 'value',
    '#value' => $groups,
  );

  if (module_exists('content')) {
    $form['og_nodeapi']['#type'] = 'fieldset';
    $form['og_nodeapi']['#title'] = t('Groups');
    $form['og_nodeapi']['#group'] = 'additional_settings';
    $form['og_nodeapi']['#collapsible'] = TRUE;
    $form['og_nodeapi']['#collapsed'] = empty($groups) && !variable_get('og_audience_required', 0);
    $form['og_nodeapi']['#weight'] = content_extra_field_weight($form['#node']->type, 'og_nodeapi');
  }

  // Emit the audience form element.
  if ($simple) {
    // 'simple' mode. read only.
    if (count($groups)) {
      foreach ($groups as $gid) {
        $titles[] = $options[$gid];
        $item_value = implode(', ', $titles);
      }
      $form['og_nodeapi']['visible']['og_groups_visible'] = array(
        '#type' => 'item',
        '#title' => t('Audience'),
        '#value' => $item_value
      );
      $assoc_groups = drupal_map_assoc($groups);

      // this 'value' element persists the audience value during submit process
      $form['og_nodeapi']['invisible']['og_groups'] = array('#type' => 'value', '#value' => $assoc_groups);
    }
  }
  elseif ($cnt = count($options, COUNT_RECURSIVE)) {
    // show multi-select. if less than 20 choices, use checkboxes.
    $type = $cnt >= 20 || $is_optgroup ? 'select' : 'checkboxes';
    $max_groups = variable_get('og_max_groups_'.$node->type,'');
    $description_max_groups = ($max_groups && !user_access('post to all the groups')) ? format_plural($max_groups," Limited to !max_groups choice."," Limited to !max_groups choices.", array('!max_groups' => $max_groups)):'';
    $form['og_nodeapi']['visible']['og_groups'] = array(
      '#type' => $type,
      '#title' => t('Audience'),
      '#attributes' => array('class' => 'og-audience'),
      '#options' => $type == 'checkboxes' ? array_map('filter_xss', $options) : $options,
      '#required' => $required,
      '#description' =>  format_plural(count($options), 'Show this post in this group.', 'Show this post in these groups.') . $description_max_groups,
      '#default_value' => $groups ? $groups : array(),
      '#required' => $required,
      '#multiple' => TRUE);
  }
}