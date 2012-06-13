<?php

/**
 * Implementation of hook_default_box().
 */
function ft_search_cse_default_box() {
  $export = array();

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
    'format' => '3',
  );
  $export['google_search_box'] = $box;

  return $export;
}
