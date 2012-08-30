<?php

function mc_base_ud_profile_field_urlfilter($field) {

  $key = $field['key'];
  $account = $field['object'];
  $profile_category = $field['properties']['category'];
  if (isset($account->content[$profile_category][$key]['#value'])) {
    $content = $account->content[$profile_category][$key]['#value'];

    //return _filter_url($content, 1);
    $attr = array(
      'external' => true,
      'attributes' => array("rel"=>"nofollow","target"=>"_blank")
    );

    //link with http
    $link = addhttp($content);

    return l($content,$link,$attr);
  }

  return "";
}

function miamitech_ud_user_created($field) {
    return ' &ndash; Member for ' . format_interval(time() - $field['object']->created);
}

## TODO:
## @mc_base_ghh_user_picture: make the default image as file node or variable so it's more dynamic
 
/**
 * Implementation of theme_links
 * 
 * Adds the proper html to the home link and the help link in the primary menu (top of the page).
 * 
 */
function mc_base_links($links, $attributes = array('class' => 'links')){
    
  if (strpos($attributes['class'], 'primary-links') !== FALSE){
    foreach($links as $lkey => &$link){
      if ($link['href'] == '<front>'){
        $link['html'] = TRUE;
        $link['title'] = '<span class="ico-menu ico-home">'.$link['title'].'</span>';
      }elseif ($link['title'] == 'Help'){
        $link['html'] = TRUE;
        $link['title'] = '<span class="ico-menu ico-help">Site Help</span>';
      }
    }
  }
  
  return theme_links($links, $attributes);
  
}

/**
 * Implementation of theme_textfield
 * 
 * Adds format rules to the search form textfield.
 * 
 */
function mc_base_textfield($element){
  //Remove the title on the search form
  if($element['#name'] == 'search_theme_form'){
    $element['#title'] = '';
  }
  return theme_textfield($element);
}


/**
 * Implementation of theme_button
 * 
 * Adds some format to the buttons across the site.
 * 
 */
function mc_base_button($element){
    // Make sure not to overwrite classes.
  $btn_csl = ' button form-' . $element['#button_type'];

  if (isset($element['#attributes']['class'])) {
    $element['#attributes']['class'] .= $btn_csl;
  }else {
    $element['#attributes']['class'] = $btn_csl;
  }

  $element['#attributes']['class'] = trim($element['#attributes']['class']);

  return '<input type="submit" ' . (empty($element['#name']) ? '' : 'name="' . $element['#name'] . '" ') . 'id="' . $element['#id'] . '" value="' . check_plain($element['#value']) . '" ' . drupal_attributes($element['#attributes']) . "/>";

}

/**
 * 
 * Helper module that returns the carousel with the featured elements. It
 * arranges them in groups so they can be displayed properly
 * 
 */
function _mc_base_get_featured_carousel_array($field_array){
  $featured_items = array();
  $group = 0;
  $count = 0;
  foreach($field_array as $fi){
    $featured_items[$group][$count] = node_load($fi['nid']);
    $count++;
    if ($count % 3 == 0){
      $group++;
    }
  }
  return $featured_items;
}

function mc_base_nd_location_address($field) {
  if($field['object']->field_online_event[0]['value']==1){
    return 'Online Event';
  }

  // Get the location field settings for this node type
  $settings = variable_get('location_settings_node_'. $field['object']->type, array());

  // Loop through and collect the address fields we want to output in the order specified in node location settings,
  // and check that they are not set to be hidden in node location setting
  // also ignore arrays (eg. locpick)
  $address = array();


  foreach ($settings['form']['fields'] as $fieldname => $fieldsettings) {
    if (!$settings['display']['hide'][$fieldname] && !empty($field['object']->location[$fieldname]) && !is_array($field['object']->location[$fieldname])) {

      // Replace country code with full country name.
      if ($fieldname == 'country') {
        module_load_include('inc', 'location', 'location');
        $field['object']->location[$fieldname] = location_country_name($field['object']->location[$fieldname]);
      }
      // Add this field to our array of fields to output.
      $address[$fieldname] = check_plain($field['object']->location[$fieldname]);
    }
  }
  if($address['name']=='Exact Location TBD'){
    unset($address['name']);
    unset($address['street']);
    unset($address['postal_code']);
  }
  if(empty($address) || (count($address)==1 && isset($address['country'])) ){
    $has_address = $field['object']->location['name'] && $field['object']->location['street']
      && $field['object']->location['city'] && $field['object']->location['province'];
    $has_lat_and_lon = $field['object']->location['latitude'] && $field['object']->location['longitude'] && $field['object']->location['latitude']!='0.000000' && $field['object']->location['longitude']!='0.000000';
    if(!$has_address && $has_lat_and_lon){
      $parts = mt_event_feed_reverse_getAddressParts($field['object']->locations['0']['latitude'], $field['object']->locations['0']['longitude']);
      $address['city'] = $parts['city'];
      $address['province'] = $parts['state'];
    }
  }

  if(empty($address) || (count($address)==1 && isset($address['country'])) ){
     return '<div class="no-location"> A location wasn\'t provided.</div>';
  }

  $lines = array(
    0 => array('name'),
    1 => array('street'),
    2 => array('city','province','postal_code')
  );

  $lines_value = array();

  foreach($lines as $key => $parts){

    foreach($parts as $part){
       if(!empty($address[$part])){
         $value = $address[$part];
        switch($part){
          case 'name':
            $lines_value[$key][] = '<span itemprop="name" class="loc-name">'.$value.'</span>';
          break;
          case 'street':
            $lines_value[$key][] = '<span itemprop="streetAddress" class="loc-street">'.$value.'</span>';
          break;
          case 'city':
            $lines_value[$key][] = '<span itemprop="addressLocality" class="loc-city">'.$value.'</span>';
          break;
          case 'province':
            $lines_value[$key][] = '<span itemprop="addressRegion" class="loc-state">'.$value.'</span>';
          break;
          case 'postal_code':
            $lines_value[$key][] = '<span itemprop="postalCode" class="loc-postalcode">'.$value.'</span>';
            break;
        };
      }
    }
  };

  $content = "";

  $part1 = "";
  $part2 = "";

  foreach($lines_value as $key => $values){

    if($key == 0){
      if(count($values)){
        $part1 = "<div class='line-$key'>".implode($values, ', ')."</div>";
      }
    }

    if($key > 0){
      if(count($values)){
        $part2 .= "<div class='line-$key'>".implode($values, ', ')."</div>";
      }
    }
  }

  $part2 = '<div itemprop="address" itemscope itemtype="http://schema.org/PostalAddress">'.$part2.'</div>';

  return '<div itemprop="location" itemscope itemtype="http://schema.org/Place">' . $part1 . $part2 . '</div>';
}

function miamitech_ds_field($field) {
  $output = '';

  $attr = array();
  $attr['class'] = "field ";
  $attr['class'] .= $field['class'];


  //add itemprop for body fields.
  if($field['format'] == 'nd_bodyfield'){
    $attr['itemprop'] = "description";
  }

  if (!empty($field['content'])) {
    $output .= "<div " . drupal_attributes($attr) .">";
    // Above label.
    if ($field['labelformat'] == 'above') {
      $output .= '<div class="field-label">'. $field['title'] .': </div>';
    }
    // Inline label
    if ($field['labelformat'] == 'inline') {
      $output .= '<div class="field-label-inline-first">'. $field['title'] .': </div>';
    }
    $output .= $field['content'];
    $output .= '</div>';
  }

  return $output;
}


/**
 * Implementation of theme_preprocess_age
 * 
 * Adds classes as appropriate to the page, so we can apply the right css styles 
 * to different pages. 
 * 
 */
function mc_base_preprocess_page(&$variables){

  //adding schema variables
  $variables['page_attr']  = array();
  if($variables['node']){
    $node = $variables['node'];
    if($node->type == "event"){
      $variables['page_attr']['itemscope '] = "";
      $variables['page_attr']['itemtype '] = "http://schema.org/Event";
    }
  }

  $page_classes = '';
  if (arg(0)=="user" && arg(1)!="" && arg(1)!="login" & arg(1)!="register" && arg(1)!="password")
  $page_classes .= " user-profile";
  //drupal_set_message(arg(0)."Test");
  if ($variables['right'] || $variables['left']){
    if ($variables['left'] && $variables['right']){
      $page_classes .= ' three-columns';
    }else if ($variables['right']){
      $page_classes .= ' two-columns';
    }else if ($variables['left']){
      $page_classes .= ' two-columns-left';
    }
  }
  
  // node pages
  if (is_object($variables['node'])){
    $node = $variables['node'];
    
    if ($node->type == 'npage'){
      
      if ($node->field_page_type[0]['value'] == 'landing' ){
        $page_mode = arg(2);
        if ( $page_mode == 'view' || empty($page_mode) ){
         $page_classes = 'two-columns-equal';
        }
      }else{
        $page_classes .= ' secondary-page';
      }

      if ($node->field_page_subtype[0]['value'] == 'home'){
        // featured items carousel
        $variables['featured_items'] = _mc_base_get_featured_carousel_array($node->field_featured_items);
      }
    }
    
  }
  // hide default title in user page
  if (arg(0) == 'user' && is_numeric(arg(1)) ){
    $variables['title'] = '';
  }
  
  $variables['page_classes'] = $page_classes;
  
  $attr = array();
  $attr['class'] = $variables['body_classes'];

  // Don't render the attributes yet so subthemes can alter them
  $variables['attr'] = $attr;


}

/**
 * Implementation of theme_quicktabs_tabs
 * 
 * Adds format to the quicktabs across the website
 * 
 */
function mc_base_quicktabs_tabs($quicktabs, $active_tab = 'none') {
  $output = '';
  $tabs_count = count($quicktabs['tabs']);
  if ($tabs_count <= 0) {
    return $output;
  }

  $index = 1;
  $output .= '<div class="block-title tabs">';
  if($quicktabs['title']){
    $output .= '<span class="title">'.$quicktabs['title']."</span>";
  }
  $output .= '<ul class="clear-block quicktabs_tabs quicktabs-style-'. drupal_strtolower($quicktabs['style']) .'">';
  foreach ($quicktabs['tabs'] as $tabkey => $tab) {
    if(!empty($tab)) {
      $class = 'qtab-'. $tabkey;
      // Add first, last and active classes to the list of tabs to help out themers.
      $class .= ($tabkey == $active_tab ? ' active' : '');
      $class .= ($index == 1 ? ' first' : '');
      $class .= ($index == $tabs_count ? ' last': '');
      $attributes_li = drupal_attributes(array('class' => $class));
      $options = _quicktabs_construct_link_options($quicktabs, $tabkey);
      // Support for translatable tab titles with i18nstrings.module.
      if (module_exists('i18nstrings')) {
        $tab['title'] = tt("quicktabs:tab:$quicktabs[qtid]--$tabkey:title", $tab['title']);
      }
      $output .= '<li'. $attributes_li .'><h2>'. l($tab['title'], $_GET['q'], $options) .'</h2></li>';
      $index++;
    }
  }
  $output .= '</ul>';
  $output .= '</div>';
  return $output;
}

/**
 * Override of theme('filter_tips_more_info').
 * 
 * This was originally implemented on the filter module that comes with the 
 * drupal core.
 * 
 * This is hiding the formatting options help, that's mostly displayed below 
 * textareas
 * 
 */
function mc_base_filter_tips_more_info() {
  //return '<div class="filter-help">'. l(t('Formatting help'), 'filter/tips', array('attributes' => array('target' => '_blank'))) .'</div>';
  return ''; // just hide it
}

/**
 * Override of theme('filter_tips').
 * 
 * This was originally implemented on the filter module that comes with the 
 * drupal core.
 * 
 * This function hides the content of the page www.example.com/filter/tips
 * 
 */
function mc_base_filter_tips(){
  return '';  // just hide it
}

/**
 * Implementation of template_preprocess
 * 
 * This is adding the classes need to display object like fieldsets in a proper
 * way. 
 * 
 */
function mc_base_preprocess(&$vars){
  if (is_array($vars['element']) && $vars['element']['#type'] == 'fieldset'){
    if ($vars['element']['#title'] == t('Input format')){
      $vars['attr']['class'] .= ' input-format-fieldset';
      $vars['element']['#collapsible'] = FALSE;
      $vars['element']['#collapsed'] = FALSE;
    }
  }
  $vars['$content_bottom'] = '';
}


/**
 * Implementation of template_preprocess_block
 * 
 * Adds format to the blocks, and implements the functionality when the 
 * character | is inside a title, it will add the span tags to display it 
 * properly across the site
 * 
 */
function mc_base_preprocess_block(&$vars){

        //support sub title feature TITLE | SUB TITLE
        $block = $vars['block'];
        $vars['title'] = $block->subject;
        if(isset($vars['title']) && !empty($vars['title'])){
            if(strstr($vars['title'],'|')){
                $titles = explode("|",$vars['title']);
                $vars['title'] = $titles[0];
                $vars['title_sub'] = $titles[1];
            }
        }

      if(isset($vars['block']->module) && $vars['block']->module=='boxes' && $vars['block']->delta=='latest_page_title'){
        $vars['attr']['class'] .= " display-title-only";
      }
/*
  if ($vars['block']->module == 'views' && $vars['block']->region == 'featured'){
    $vars['post_object'] .= '<a class="prev browse left"></a>';
    $vars['post_object'] .= '<a class="next browse right"></a>';
  }
*/
    
    //support sub title feature TITLE | SUB TITLE
    if(isset($vars['title'])){
        if(strstr($vars['title'],'|')){
            $titles = explode("|",$vars['title']);
            $vars['title'] = $titles[0]."<span>".$titles[1]."</span>";
        }
    }
}

/**
 * Override of theme_pager().
 * 
 * Adds the format to the pager.
 */
function mc_base_pager($tags = array(), $limit = 10, $element = 0, $parameters = array(), $quantity = 9) {
  $pager_list = theme('pager_list', $tags, $limit, $element, $parameters, $quantity);

  $pager_previous = theme('pager_previous', ($tags[1] ? $tags[1] : t('Prev')), $limit, $element, 1, $parameters);
  $pager_next = theme('pager_next', ($tags[3] ? $tags[3] : t('Next')), $limit, $element, 1, $parameters);

  if ($pager_previous){
    $pager_previous = l('', $pager_previous['href'], array('query'=>$pager_previous['query'],'attributes'=>array('class' => 'ico-small ico-prev')));
  }
  if ($pager_next){
    $pager_next = l('', $pager_next['href'], array('query'=>$pager_next['query'],'attributes'=>array('class' => 'ico-small ico-next')));
  }

  if ($pager_list) {
    return "<div class='pagination clear-block'><div>$pager_previous $pager_list $pager_next</div></div>";
  }
  
}



function mc_base_boxes_box($block) {
	if(!empty($block['content'])){
  $output = "<div id='boxes-box-" . $block['delta'] . "' class='boxes-box" . (!empty($block['editing']) ? ' boxes-box-editing' : '') . "'>";
  $output .= $block['content'];
  if (!empty($block['controls'])) {
    $output .= '<div class="boxes-box-controls">';
    $output .= $block['controls'];
    $output .= '</div>';
  }
  if (!empty($block['editing'])) {
    $output .= '<div class="box-editor">' . $block['editing'] . '</div>';
  }
  $output .= '</div>';
  return $output;
  }else{
  	  return;
}
}


/**
 * Add a "Comments" heading above comments except on forum pages.
 */
function mc_base_preprocess_comment_wrapper(&$vars) {

  /*Comment functionality*/
  
  //Comment funcltionality only is applied in Nodes that allow to comment.
  if ($vars['node']->comment == 2){
    //Anonymous users should see the login and register links.
    if ($vars['logged_in'] == 0){
      
      //Sign in link
      $sign = l(
        t('sign in'),
        'user',
        array(
          'attributes' => array(
            'class' => 'overlay',
            'rel' => '#login',
          )
        )
      );
      
      //Join Link.
      $join = l(
        t('join now'),
        'user/register',
        array(
          'attributes' => array(
            'class' => 'overlay',
            'rel' => '#register',
          )
        )
      );
      
      //Only must should this text to Anoymous user. 
      $vars['content'] = $vars['content'] . "Please $sign or $join to comment. Get involved!";
      
      //For nodes inside a group only followers users can post comments.
    }else{
      
      //Verify if the node is inside a group.
      $group = og_get_group_context();
      
      //If the node is inside a group, verify if the current user is or not following it.
      if ((($group) && !og_is_group_member($group->nid, TRUE, NULL))){
        
        //Only must allow to comment in nodes inside a group to followers users.
        $link = '<div class="block-content clear-block">
                  <div class="subscribe">
                    <a href="javascript: void(0);" onClick="follow_group_comments(' .$group->nid. ');" class="button" style="width: 200px; clear: both;"><span>Follow</span></a>
                    <p>Follow us in order to post a comment.</p>
                  </div>
                 </div>';
        //Added the logic for not followers users.
        $vars['content'] = $vars['content'] . $link;
        }
    }
    
  }else{
    
    
  }  
}


function miamitech_nd_location_gmap($field, $latitude, $longitude, $width, $height, $zoom, $autoclick = FALSE) {
  $map = array();
  $bubble_content = _nd_location_theme_bubble($field);
  if (!empty($bubble_content)) {
    $map['markers'][] = array(
      'latitude' => $latitude,
      'longitude' => $longitude,
      'text' => $bubble_content,
      'autoclick' => $autoclick,
      'link' => 'http://maps.google.com/?q=' . strip_tags(theme('nd_location_address', $field)),
    );
  }

  return gmap_simple_map($latitude, $longitude, '', '', $zoom, $width, $height, $autoclick, $map);
}

function mc_base_fieldset($element) {

  if (!empty($element['#collapsible'])) {
    drupal_add_js('misc/collapse.js');

    if (!isset($element['#attributes']['class'])) {
      $element['#attributes']['class'] = '';
    }

    $element['#attributes']['class'] .= ' collapsible';
    if (!empty($element['#collapsed'])) {
      $element['#attributes']['class'] .= ' collapsed';
    }
  }

  return '<fieldset' . drupal_attributes($element['#attributes']) . '>' . ($element['#title'] ? '<legend>' . $element['#title'] . '</legend>' : '') . (isset($element['#description']) && $element['#description'] ? '<div class="description">' . $element['#description'] . '</div>' : '') . (!empty($element['#children']) ? '<div class="fieldset-content"> ' .  $element['#children'] . '</div>' : '') . (isset($element['#value']) ? $element['#value'] : '') . "</fieldset>\n";
}