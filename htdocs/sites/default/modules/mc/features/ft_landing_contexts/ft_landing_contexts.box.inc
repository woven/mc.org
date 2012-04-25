<?php

/**
 * Implementation of hook_default_box().
 */
function ft_landing_contexts_default_box() {
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
              $block = module_invoke(\'og_audience_url\', \'block\', \'view\', "0");
              print $block[\'content\'];
            ?>
          </div>
        </div>',
    'format' => '4',
  );
  $export['add_stuff'] = $box;

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
    'format' => '4',
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
    'format' => '4',
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
              <img src="/sites/default/themes/harlem2/images/logos/prc_logo.jpg">
            </a>
          </div>
          <div class="info">
            <p>
              This website was supported by Cooperative Agreement Number 5 U48 DP001916 from the Centers for Disease Control and Prevention. Its contents are solely the responsibility of the authors and do not necessarily represent the official views of the Centers for Disease Control and Prevention.
            </p>
          </div>
          </div>',
    'format' => '4',
  );
  $export['footer_prc_logo'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'google_search_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Google Custom Search Box';
  $box->options = array(
    'body' => '<div class="block block-theme">
        <?php if (module_exists(\'google_cse\')) : ?>
          <form action="<?php echo url(\'search/google\') ?>" accept-charset="UTF-8" method="get" id="google-cse-searchbox-form">
            <div id="search" class="container-inline">
              <input type="text" name="query" id="edit-query" title="Enter the terms you wish to search for." class="form-text"/>
              <button type="submit" name="op" id="edit-sa" class="form-submit">Search</button>
              <input type="hidden" name="cx" id="edit-cx" value="005966219626966707237:yfcijke9wao"  />
              <input type="hidden" name="cof" id="edit-cof" value="FORID:11"  />
              <input type="hidden" name="form_token" id="edit-google-cse-searchbox-form-form-token" value="<?php print drupal_get_token(\'search_theme_form\'); ?>"  />
              <input type="hidden" name="form_id" id="edit-google-cse-searchbox-form" value="google_cse_searchbox_form"  />
            </div>
          </form>
        <?php else : ?>
          <?php print $search_box ?>
        <?php endif; ?>
        </div>',
    'format' => '4',
  );
  $export['google_search_box'] = $box;

  return $export;
}
