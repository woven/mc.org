<?php

/**
 * Implementation of hook_default_box().
 */
function ft_latest_ui_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'latest_by_topic';
  $box->plugin_key = 'simple';
  $box->title = 'By Topic|Show only stuff on this topic';
  $box->description = 'Latest - By Topic';
  $box->options = array(
    'body' => '<div class="block-browse browse-topic">
  <?php echo theme("ghh_browse_menu","menu-browse-by-topic"); ?>
</div>',
    'format' => '3',
  );
  $export['latest_by_topic'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'latest_by_type';
  $box->plugin_key = 'simple';
  $box->title = 'By Type|Show only this type of stuff';
  $box->description = 'Browse by type - latest page';
  $box->options = array(
    'body' => '<div class="block-browse">
  <?php print theme(\'ghh_browse_menu\',\'menu-browse-by-type\'); ?>
  <?php print theme(\'ghh_browse_menu\',\'menu-by-editorial-content\'); ?>
</div>',
    'format' => '4',
  );
  $export['latest_by_type'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'latest_page_title';
  $box->plugin_key = 'simple';
  $box->title = 'Latest Stuff';
  $box->description = 'latest page title';
  $box->options = array(
    'body' => '<br/>
',
    'format' => '7',
  );
  $export['latest_page_title'] = $box;

  return $export;
}
