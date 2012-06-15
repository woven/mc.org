<?php

## TODO:
## @mc_base_ghh_user_picture: make the default image as file node or variable so it's more dynamic
 
/**
 * Implementation of theme_links
 * 
 * Adds the proper html to the home link and the help link in the primary menu (top of the page).
 * 
 */
function miamitech_links($links, $attributes = array('class' => 'links')){
    
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
function miamitech_textfield($element){
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
function miamitech_button($element){
    // Make sure not to overwrite classes.
  if (isset($element['#attributes']['class'])) {
    $element['#attributes']['class'] = 'form-' . $element['#button_type'] . ' ' . $element['#attributes']['class'];
  }
  else {
    $element['#attributes']['class'] = 'form-' . $element['#button_type'];
  }

  return '<span class="submit-wrapper"><button type="submit" ' . (empty($element['#name']) ? '' : 'name="' . $element['#name'] . '" ') . 'id="' . $element['#id'] . '" value="' . check_plain($element['#value']) . '" ' . drupal_attributes($element['#attributes']) . "><span>" . check_plain($element['#value']) ."</span></button></span>\n";

}

/**
 * 
 * Helper module that returns the carousel with the featured elements. It
 * arranges them in groups so they can be displayed properly
 * 
 */
function _miamitech_get_featured_carousel_array($field_array){
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

/**
 * Implementation of theme_preprocess_age
 * 
 * Adds classes as appropriate to the page, so we can apply the right css styles 
 * to different pages. 
 * 
 */
function miamitech_preprocess_page(&$variables){
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
        //if ( $page_mode == 'view' || empty($page_mode) ){
        //  $page_classes = 'two-columns-equal';
        //}
      }else{
        $page_classes .= 'secondary-page';
      }

      if ($node->field_page_subtype[0]['value'] == 'home'){
        // featured items carousel
        $variables['featured_items'] = _miamitech_get_featured_carousel_array($node->field_featured_items);
      }
    }
    
  }
  // hide default title in user page
  if (arg(0) == 'user' && is_numeric(arg(1)) ){
    $variables['title'] = '';
  }
  
  $variables['page_classes'] = $page_classes;
  
}

/**
 * Implementation of theme_quicktabs_tabs
 * 
 * Adds format to the quicktabs across the website
 * 
 */
function miamitech_quicktabs_tabs($quicktabs, $active_tab = 'none') {
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
function miamitech_filter_tips_more_info() {
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
function miamitech_filter_tips(){
  return '';  // just hide it
}

/**
 * Implementation of template_preprocess
 * 
 * This is adding the classes need to display object like fieldsets in a proper
 * way. 
 * 
 */
function miamitech_preprocess(&$vars){
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
function miamitech_preprocess_block(&$vars){

        //support sub title feature TITLE | SUB TITLE
        if(isset($vars['title'])){
            if(strstr($vars['title'],'|')){
                $titles = explode("|",$vars['title']);
                $vars['title'] = $titles[0]."<span>".$titles[1]."</span>";
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
function miamitech_pager($tags = array(), $limit = 10, $element = 0, $parameters = array(), $quantity = 9) {
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



function miamitech_boxes_box($block) {
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
}


/**
 * Add a "Comments" heading above comments except on forum pages.
 */
function miamitech_preprocess_comment_wrapper(&$vars) {

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
