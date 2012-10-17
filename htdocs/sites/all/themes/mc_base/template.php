<?php

function mc_base_nd_location_gmap($field, $latitude, $longitude, $width, $height, $zoom, $autoclick = FALSE) {
  //dsm(theme('nd_location_address', $field));

  $gurl = url(
    "http://maps.google.com/",
    array(
      'query' => array(
        'q' => html_entity_decode(strip_tags(theme('nd_location_address', $field))),
        'external' => true
      )
    )
  );

  $map = array();
  //$bubble_content = _nd_location_theme_bubble($field);
  if (!empty($bubble_content)) {
    $map['markers'][] = array(
      'latitude' => $latitude,
      'longitude' => $longitude,
      //'text' => $bubble_content,
      //'autoclick' => $autoclick,
      'link' => $gurl
    );
  }

  //return gmap_simple_map($latitude, $longitude, '', '', $zoom, $width, $height, $autoclick, $map);

  $settings = array(
    'id' => gmap_get_auto_mapid(),
    'latitude' => $latitude,   // Center the map
    'longitude' => $longitude, // on the marker.
    'markeraction' => 2
  );
  if ($zoom != 'default') {
    $settings['zoom'] = $zoom;
  }
  if ($width != 'default') {
    $settings['width'] = $width;
  }
  if ($height != 'default') {
    $settings['height'] = $height;
  }

  $settings['markers'] = array(array(
    'latitude' => $latitude,
    'longitude' => $longitude,
    'markername' => $markername,
    'offset' => 0,
  ));

  if (!empty($info)) {
    $settings['markers'][0]['text'] = $info;
  }

  if ($autoshow) {
    $settings['markers'][0]['autoclick'] = TRUE;
  }

  if (!empty($map)) {
    $settings = array_merge($settings, $map);
  }

  return theme('gmap', array('#settings' => $settings));
}


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

function mc_base_ud_user_created($field) {
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
      if ($link['href'] == '<front>' && variable_get('menu-home-icon',true)){
        $link['html'] = TRUE;
        $link['title'] = '<span class="ico-menu ico-home">'.$link['title'].'</span>';
      }elseif ($link['title'] == 'Help' && variable_get('menu-help-icon',true)){
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

function mc_base_ds_field($field) {
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

  //per site colors.css file
    $site_colors = conf_path(). "/colors.css";
    if(file_exists($site_colors)){
      $variables['colors_style'] = $site_colors;
    }

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
  $are_tabs_empty = true;
  foreach($quicktabs['tabs'] as $tab){
    if(!empty($tab)){
      $are_tabs_empty = false;
    }
  }
  $tabs_count = count($quicktabs['tabs']);
  if ($tabs_count <= 0 || $are_tabs_empty) {
    $_SESSION['empty_quicktabs'] = $quicktabs['machine_name'];
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
  if($block->module=='quicktabs' && isset($_SESSION['empty_quicktabs']) && $_SESSION['empty_quicktabs']==$block->delta){
    unset($_SESSION['empty_quicktabs']);
    $vars['block']->delta = 'hidden';
    $block->delta = 'hidden';
    $vars['content']='';
    $vars['subject']='<none>';
    return '';
  }
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


function mc_base_pager($tags = array(), $limit = 10, $element = 0, $parameters = array(), $quantity = 9) {
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_first = theme('pager_first', (isset($tags[0]) ? $tags[0] : t('« first')), $limit, $element, $parameters);
  $li_previous = theme('pager_previous', (isset($tags[1]) ? $tags[1] : t('‹ previous')), $limit, $element, 1, $parameters);
  $li_next = theme('pager_next', (isset($tags[3]) ? $tags[3] : t('next ›')), $limit, $element, 1, $parameters);
  $li_last = theme('pager_last', (isset($tags[4]) ? $tags[4] : t('last »')), $limit, $element, $parameters);

  if ($pager_total[$element] > 1) {
    if ($li_first) {
      $items[] = array(
        'class' => 'pager-first',
        'data' => $li_first,
      );
    }
    if ($li_previous) {
      $items[] = array(
        'class' => 'pager-previous',
        'data' => $li_previous,
      );
    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => 'pager-ellipsis',
          'data' => '…',
        );
      }
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'class' => 'pager-item',
            'data' => theme('pager_previous', $i, $limit, $element, ($pager_current - $i), $parameters),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => 'pager-current',
            'data' => $i,
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'class' => 'pager-item',
            'data' => theme('pager_next', $i, $limit, $element, ($i - $pager_current), $parameters),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => 'pager-ellipsis',
          'data' => '…',
        );
      }
    }
    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => 'pager-next',
        'data' => $li_next,
      );
    }
    if ($li_last) {
      $items[] = array(
        'class' => 'pager-last',
        'data' => $li_last,
      );
    }
    return "<div class='pagination clear-block'><div>".theme('item_list', $items, NULL, 'ul', array('class' => 'pager'))."</div></div>";
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

/** theme_fieldset
 * @todo add back the collapse logic if needed, right now commenting two links to avoid collapsible and collapsed classes
 * @param $element
 * @return string
 */

function mc_base_fieldset($element) {
  unset($element['#collapsible']);

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


/**
 * Theme an individual form element.
 *
 * Combine multiple values into a table with drag-n-drop reordering.
 */
function mc_base_content_multiple_values($element) {
  $field_name = $element['#field_name'];
  $field = content_fields($field_name);
  $output = '';

  if ($field['multiple'] >= 1) {
    $table_id = $element['#field_name'] .'_values';
    $order_class = $element['#field_name'] .'-delta-order';
    $required = !empty($element['#required']) ? '<span class="form-required" title="'. t('This field is required.') .'">*</span>' : '';

    $header = array(
      array(
        'data' => t('!title: !required', array('!title' => $element['#title'], '!required' => $required)),
        'colspan' => 2
      ),
      t('Order'),
    );
    $rows = array();

    // Sort items according to '_weight' (needed when the form comes back after
    // preview or failed validation)
    $items = array();
    foreach (element_children($element) as $key) {
      if ($key !== $element['#field_name'] .'_add_more') {
        $items[] = &$element[$key];
      }
    }
    usort($items, '_content_sort_items_value_helper');

    // Add the items as table rows.
    foreach ($items as $key => $item) {
      $item['_weight']['#attributes']['class'] = $order_class;
      $delta_element = drupal_render($item['_weight']);
      $cells = array(
        array('data' => '', 'class' => 'content-multiple-drag'),
        drupal_render($item),
        array('data' => $delta_element, 'class' => 'delta-order'),
      );
      $rows[] = array(
        'data' => $cells,
        'class' => 'draggable',
      );
    }

    $output .= theme('table', $header, $rows, array('id' => $table_id, 'class' => 'content-multiple-table'));
    $output .= '<div class="content-multiple-footer">';
    $output .= $element['#description'] ? '<div class="description">'. $element['#description'] .'</div>' : '';
    $output .= drupal_render($element[$element['#field_name'] .'_add_more']);
    $output .= '</div>';

    drupal_add_tabledrag($table_id, 'order', 'sibling', $order_class);
  }
  else {
    foreach (element_children($element) as $key) {
      $output .= drupal_render($element[$key]);
    }
  }

  if($field['multiple'] >= 1){
    return '<div class="content-multiple-wrapper">'.$output.'</div>';
  }else{
    return $output;
  }
}


function mc_base_preprocess_og_mission(&$variables) {
  $node = $variables['form']['#node'];
  $format = $variables['form']['#node']->format;

  //pass the missing statement through the input format from body field
  $variables['mission'] = check_markup($variables['mission'],$format);

  //expose the group url to the templates
  $url = $node->field_group_url[0]['url'];
  if(!empty($url)){
    $opts = array('attributes'=> array('target'=>"_blank"),'absolute' => true);
    $variables['url'] = l($url,$url,$opts);
  }

}