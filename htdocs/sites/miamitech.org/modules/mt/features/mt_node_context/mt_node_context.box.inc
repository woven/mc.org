<?php

/**
 * Implementation of hook_default_box().
 */
function mt_node_context_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'join_mc';
  $box->plugin_key = 'simple';
  $box->title = 'Join MiamiTech.org';
  $box->description = 'Join MC - right block';
  $box->options = array(
    'body' => '<h5>Do you manage a local group?</h5>
<p>Tell us about your meetup, conference, workshop or other local group.</p>
<ul class="li-join-mc">
  <li>Help others find your group</li>
  <li>Add events or import from any iCal</li>
  <li>Lots more to come!</li>
</ul>
<div class="clear-block"><a href="/user/register" class="button overlay" rel="#register"><span>Join now!</span></a></div>',
    'format' => '3',
  );
  $export['join_mc'] = $box;

  return $export;
}
