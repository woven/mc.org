<?php

/**
 * Implementation of hook_strongarm().
 */
function mc_rating_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rate_widgets';
  $strongarm->value = array(
    1 => (object) array(
      'name' => 'vote_updown',
      'tag' => 'vote_updown',
      'title' => 'Node Up/Down',
      'node_types' => array(
        0 => 'event',
        1 => 'nnews',
      ),
      'comment_types' => array(),
      'options' => array(
        0 => array(
          0 => 1,
          1 => 'up',
        ),
        1 => array(
          0 => 0,
          1 => 'reset',
        ),
        2 => array(
          0 => -1,
          1 => 'down',
        ),
      ),
      'template' => 'mc_up_down',
      'node_display' => '0',
      'teaser_display' => FALSE,
      'comment_display' => '0',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        2 => 2,
        4 => 0,
        1 => 0,
        8 => 0,
        9 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '3',
      'displayed' => '2',
      'displayed_just_voted' => '2',
      'value_type' => 'points',
      'theme' => 'rate_template_mc_up_down',
      'css' => 'sites/all/modules/mycommunity/mc/features/mc_rating/widgets/mc-up-down/mc-up-down.css',
      'js' => 'sites/all/modules/mycommunity/mc/features/mc_rating/widgets/mc-up-down/mc-up-down.js',
      'translate' => TRUE,
    ),
  );
  $export['rate_widgets'] = $strongarm;

  return $export;
}
