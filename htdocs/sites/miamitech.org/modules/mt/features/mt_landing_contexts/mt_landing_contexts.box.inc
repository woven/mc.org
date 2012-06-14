<?php

/**
 * Implementation of hook_default_box().
 */
function mt_landing_contexts_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'add_stuff';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Add Stuff Box';
  $box->options = array(
    'body' => '<div id="add-stuff">
          <a href="#" id="add-stuff-button">Add Stuff</a>
          <div>
            <?php
              // invoke and print directly
              // not a best practice, but it\'s ok since we don\'t really need a region here
              $block = module_invoke(\'mc_addstuff\', \'block\', \'view\', "0");
              print $block[\'content\'];
            ?>
          </div>
        </div>',
    'format' => '3',
  );
  $export['add_stuff'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'audiovideo_add';
  $box->plugin_key = 'simple';
  $box->title = 'Add Audio or Video ';
  $box->description = 'Audio Video - Add new';
  $box->options = array(
    'body' => '<div class="prose"><p>Do you know of a health related video the community might find helpful? First find it on YouTube or another video site, then click the green Add Stuff button at the top of the page, choose Video and share some details. Your video will be posted immediately.</p></div>
<?php echo theme(\'ghh_see_all\',\'More Help\',\'help\'); ?>',
    'format' => '3',
  );
  $export['audiovideo_add'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'audiovideo_latest';
  $box->plugin_key = 'simple';
  $box->title = 'Latest';
  $box->description = 'Latest Audio and Video';
  $box->options = array(
    'body' => '<?php
print views_embed_view(\'latest_pages\', \'block_3\');
print views_embed_view(\'latest_pages\', \'block_2\');
?>',
    'format' => '3',
  );
  $export['audiovideo_latest'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'footer_hon_logo';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Footer Hon Logo';
  $box->options = array(
    'body' => '<div class="logo hon">
          <p><a href="https://www.healthonnet.org/HONcode/Conduct.html?HONConduct915495" onclick="window.open(this.href); return false;" > <img src="http://www.honcode.ch/HONcode/Seal/HONConduct915495_s1.gif" hspace="2" vspace="2" align="left" width="43" height="60" style="border:0px" title="This website is certified by Health On the Net Foundation. Click to verify." alt="This website is certified by Health On the Net Foundation. Click to verify." /></a> This site complies with the <a href="http://www.healthonnet.org/HONcode/Conduct.html" onclick="window.open(this.href); return false;"> HONcode standard for trustworthy health</a> information. <a href="https://www.healthonnet.org/HONcode/Conduct.html?HONConduct915495" onclick="window.open(this.href); return false;">Verify here</a>. </p>
        </div>',
    'format' => '3',
  );
  $export['footer_hon_logo'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'footer_joinus_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Join us on your favorite social network';
  $box->options = array(
    'body' => '<p>Join us on your favorite social network.</p><p><a href="http://www.facebook.com/GetHealthyHarlem">Facebook</a></p><p><a href="http://twitter.com/#!/healthyharlem">Twitter</a></p>',
    'format' => '3',
  );
  $export['footer_joinus_box'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'footer_prc_logo';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Footer PRC Logo';
  $box->options = array(
    'body' => '<div class="logo prc">
          <div class="logo-image">
            <a href="http://www.cdc.gov/prc">
              <img src="http://www.cdc.gov/prc/images/prc_logo.jpg">
            </a>
          </div>
          <div class="info">
            <p>
              This website was supported by Cooperative Agreement Number 5 U48 DP001916 from the Centers for Disease Control and Prevention. Its contents are solely the responsibility of the authors and do not necessarily represent the official views of the Centers for Disease Control and Prevention.
            </p>
          </div>
          </div>',
    'format' => '3',
  );
  $export['footer_prc_logo'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'groups_events';
  $box->plugin_key = 'simple';
  $box->title = 'Upcoming Events|Upcoming events from groups';
  $box->description = 'Groups - Events blocks';
  $box->options = array(
    'body' => '<?php
print  mc_events_grouped_by_dates(\'events_by_dates_groups\', \'block_5\', 6);
?>',
    'format' => '3',
  );
  $export['groups_events'] = $box;

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
print \'<div class="prose">\'.$node->body.\'</div>\';
?>
<div class="see-all">
<?php print ( l(\'<span>More Help</span><span class="ico-small ico-see-all"></span>\', \'help\', array(\'html\' => TRUE) ) ); ?>
</div>
<?php endif; ?>',
    'format' => '3',
  );
  $export['groups_making_difference'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_about';
  $box->plugin_key = 'simple';
  $box->title = 'Making a difference';
  $box->description = 'Home - about';
  $box->options = array(
    'body' => '<div class="prose">
<p>GetHealthyHarlem.org is a website where Northern Manhattan residents, families, businesses and organizations can find and share local information about getting and staying healthy.</p>
<?php echo theme(\'ghh_see_all\',\'Read More\',\'about\'); ?>
</div>',
    'format' => '3',
  );
  $export['home_about'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_joinus';
  $box->plugin_key = 'simple';
  $box->title = 'Like us, follow us!';
  $box->description = 'Join us - homepage';
  $box->options = array(
    'body' => '<?php print theme(\'ghh_browse_menu\', \'menu-join-us\'); ?>',
    'format' => '3',
  );
  $export['home_joinus'] = $box;

  return $export;
}
