<?php

/**
 * Implementation of hook_default_box().
 */
function ft_group_ui_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'groups_event_blocks';
  $box->plugin_key = 'simple';
  $box->title = 'Upcoming Events|Upcoming events from groups';
  $box->description = 'Groups - Events blocks';
  $box->options = array(
    'body' => '<?php
print  mc_events_grouped_by_dates(\'group_events_grouped_by_dates\', \'block_5\', 6);
?>',
    'format' => '4',
  );
  $export['groups_event_blocks'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'groups_making_difference';
  $box->plugin_key = 'simple';
  $box->title = 'Making a difference';
  $box->description = 'Groups - Making a difference';
  $box->options = array(
    'body' => '<?php if (arg(0) == \'node\' && is_numeric( arg(1) ) ) : ?>
<?php
$node = node_load(arg(1));
print $node->body; 
?>
<div class="see-all">
<?php print ( l(\'<span>More Help</span><span class="ico-small ico-see-all"></span>\', \'help\', array(\'html\' => TRUE) ) ); ?>
</div>
<?php endif; ?>',
    'format' => '4',
  );
  $export['groups_making_difference'] = $box;

  return $export;
}
