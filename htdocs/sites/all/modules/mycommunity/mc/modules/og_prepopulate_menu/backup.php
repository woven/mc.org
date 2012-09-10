<?php

/**
 * OLD Section &
 */

function _og_prepopulate_menu_create_links($node){
  $menu_name = 'menu-og-'. $node->nid;

  $small_path = $node->field_small_name[0]['value'];
  $other_path = "groups/".$node->field_small_name[0]['value'];
  $node_path = 'node/'.$node->nid;

  //Insert menu items
  $items = array();

  //HOME
  $items[] = array(
    'link_title' => 'Home',
    'link_path' => $node_path,
    'mlid' => 0,
    'plid' => 0,
    'menu_name' => $menu_name,
    'weight' => -1,
    'options' => array(),
    'module' => 'og_prepopulate_menu',
    'expanded' => 0,
    'hidden' => 0,
    'has_children' => 0,
    'customized' => 0,
  );

  $items[] = array(
    'link_title' => 'About',
    'link_path' => $node_path . '/about',
    'mlid' => 0,
    'plid' => 0,
    'menu_name' => $menu_name,
    'weight' => 0,
    'options' => array(),
    'module' => 'og_prepopulate_menu',
    'expanded' => 0,
    'hidden' => 0,
    'has_children' => 0,
    'customized' => 0,
  );
  $items[] = array(
    'link_title' => 'Latest',
    'link_path' => $node_path . '/latest',
    'mlid' => 0,
    'plid' => 0,
    'menu_name' => $menu_name,
    'weight' => 1,
    'options' => array(),
    'module' => 'og_prepopulate_menu',
    'expanded' => 0,
    'hidden' => 0,
    'has_children' => 0,
    'customized' => 0,
  );
  $items[] = array(
    'link_title' => 'Events',
    'link_path' => $node_path. '/events',
    'mlid' => 0,
    'plid' => 0,
    'menu_name' => $menu_name,
    'weight' => 3,
    'options' => array(),
    'module' => 'og_prepopulate_menu',
    'expanded' => 0,
    'hidden' => 0,
    'has_children' => 0,
    'customized' => 0,
  );
  $items[] = array(
    'link_title' => 'Articles',
    'link_path' => $node_path . '/articles',
    'mlid' => 0,
    'plid' => 0,
    'menu_name' => $menu_name,
    'weight' => 4,
    'options' => array(),
    'module' => 'og_prepopulate_menu',
    'expanded' => 0,
    'hidden' => 0,
    'has_children' => 0,
    'customized' => 0,
  );
  $items[] = array(
    'link_title' => 'Files',
    'link_path' => $node_path . '/files',
    'mlid' => 0,
    'plid' => 0,
    'menu_name' => $menu_name,
    'weight' => 5,
    'options' => array(),
    'module' => 'og_prepopulate_menu',
    'expanded' => 0,
    'hidden' => 0,
    'has_children' => 0,
    'customized' => 0,
  );
  /* temporary disable photos
  $items[] = array(
      'link_title' => 'Photos',
      'link_path' => 'groups/' . $small_path . '/photos',
      'mlid' => 0,
      'plid' => 0,
      'menu_name' => $menu_name,
      'weight' => 6,
      'options' => array(),
      'module' => 'og_prepopulate_menu',
      'expanded' => 0,
      'hidden' => 0,
      'has_children' => 0,
      'customized' => 0,
    );
  */
  $items[] = array(
    'link_title' => 'Videos',
    'link_path' => $node_path . '/videos',
    'mlid' => 0,
    'plid' => 0,
    'menu_name' => $menu_name,
    'weight' => 7,
    'options' => array(),
    'module' => 'og_prepopulate_menu',
    'expanded' => 0,
    'hidden' => 0,
    'has_children' => 0,
    'customized' => 0,
  );

  $disabled_discussions = ($node->field_enable_discussions['0']['value'] == '0');
  if (!$disabled_discussions){
    $items[] = array(
      'link_title' => 'Discussions',
      'link_path' => $node_path . '/discussions',
      'mlid' => 0,
      'plid' => 0,
      'menu_name' => $menu_name,
      'weight' => 7,
      'options' => array('attributes' => array('class' => 'new-class')),
      'module' => 'og_prepopulate_menu',
      'expanded' => 0,
      'hidden' => 0,
      'has_children' => 0,
      'customized' => 0,
    );
  }

  // Create menu item
  $items[] = array(
    'link_title' => 'Contact',
    'link_path' => $node_path .'/contact',
    'mlid' => 0,
    'plid' => 0,
    'menu_name' => $menu_name,
    'weight' => 8,
    'options' => array(),
    'module' => 'og_prepopulate_menu',
    'expanded' => 0,
    'hidden' => 0,
    'has_children' => 0,
    'customized' => 0,
  );

  // SAVE MENU
  foreach($items as $item){
    menu_link_save($item);
  }
}


function old_webformcreate(){
  // Create webform

  if(module_exists('webform')){

    module_load_include('inc', 'webform', 'includes/webform.components');
    $webform_node = new stdClass;
    $webform_node->title = t('Contact');
    $webform_node->type = 'webform';
    //$webform_node->body = 'You can leave a message to the group administrator using the contact form below.';
    $webform_node->webform['roles'] = array();

    //Add the node to the group.
    $webform_node->og_groups = array($node->nid => $node->nid);
    $webform_node->og_groups_both = array($node->nid => $node->title);
    // setup path
    $webform_node->path = $other_path . '/contact';
    //$webform_node->old_alias = $other_path . '/contact';
    $webform_node->pathauto_perform_alias = 0;

    if ($webform_node = node_submit($webform_node)){

      // set group manager as owner
      $webform_node->uid = $node->uid;
      $webform_node->pathauto_perform_alias = 0;
      node_save($webform_node);

      // add components

      $components = array();
      $components[] = array(
        'type' => 'textfield',
        'nid' => $webform_node->nid,
        'cid' => NULL,
        'clone' => FALSE,
        'name' => t('Your Name'),
        'form_key' => 'contact_name',
        'title_display' => 0,
        'mandatory' => TRUE,
        'weight' => 0
      );
      $components[] = array(
        'type' => 'email',
        'nid' => $webform_node->nid,
        'cid' => NULL,
        'clone' => FALSE,
        'name' => t('Your E-mail'),
        'form_key' => 'contact_email',
        'title_display' => 0,
        'mandatory' => TRUE,
        'weight' => 1
      );
      $components[] = array(
        'type' => 'textfield',
        'nid' => $webform_node->nid,
        'cid' => NULL,
        'clone' => FALSE,
        'name' => t('Subject'),
        'form_key' => 'contact_subject',
        'title_display' => 0,
        'mandatory' => TRUE,
        'weight' => 2
      );
      $components[] = array(
        'type' => 'textarea',
        'nid' => $webform_node->nid,
        'cid' => NULL,
        'clone' => FALSE,
        'name' => t('Message'),
        'form_key' => 'contact_message',
        'title_display' => 0,
        'mandatory' => TRUE,
        'weight' => 3
      );

      // insert components
      foreach($components as $component){
        webform_component_insert($component);
      }




      // Add permissions to submit

      db_query("INSERT INTO webform_roles (nid, rid) VALUES (".$webform_node->nid." , 1)");
      db_query("INSERT INTO webform_roles (nid, rid) VALUES (".$webform_node->nid." , 2)");

      // Re - save the node

      $nodeWebform = node_load($webform_node->nid);
      node_save($nodeWebform);

    }else{
      drupal_set_message(t('Error creating webform node for the group'), 'error');
    }


  }

}

/**
 * Implementation of hook_nodeapi
 */
function _og_prepopulate_menu_nodeapi(&$node, $op){
  if ($node->type == group){
    if ($op == 'insert' || $op == 'update'){
      // verify menu
      $menu_name = 'menu-og-'. $node->nid;
      if (in_array($menu_name, menu_get_names())){

      }
      // if the menu does not exist, create it
      if (!in_array($menu_name, menu_get_names())){

        // check if it exists in menu_custom
        $sql = "SELECT count(*) FROM {menu_custom} WHERE menu_name = '%s'";
        $count = db_result(db_query($sql, $menu_name));
        if (!$count){
          _og_prepopulate_menu_create_custom_menu($node);
        }
        _og_prepopulate_menu_create_links($node);
      }
    }

    if ($op == 'update'){
      $disabled_discussions = ($node->field_enable_discussions['0']['value'] == '0');
      $small_name = $node->field_small_name[0]['value'];
      if ($disabled_discussions){
        $discussion_link = menu_get_item('groups/' . $small_name . '/discussions');
        if ($discussion_link){
          menu_link_delete(NULL, 'groups/' . $small_name . '/discussions');
        }
      }else{
        $discussion_link = menu_get_item('groups/' . $small_name . '/discussions');

        //if (!($discussion_link)){
        $menu_name = 'menu-og-' . $node->nid;
        $items = array();
        $items[] = array(
          'link_title' => 'Discussions',
          'link_path' => 'groups/' . $small_name . '/discussions',
          'mlid' => 0,
          'plid' => 0,
          'menu_name' => $menu_name,
          'weight' => 7,
          'options' => array('attributes' => array('class' => 'new-class')),
          'module' => 'og_prepopulate_menu',
          'expanded' => 0,
          'hidden' => 0,
          'has_children' => 0,
          'customized' => 0,
        );
        foreach($items as $item){
          menu_link_delete(NULL, $discussion_link['href']);
          menu_link_save($item);
        }
        //menu_link_save($discussion_link);
        //}
        //menu_link_save($discussion_link);
      }
    }
  }

}

/**
 * Implements hook_init().
 *
 * Verify if a group allow to post discussions.
 * implementation.
 */
function og_prepopulate_menu_init() {
  $path = arg();
  if ($path['0'] == 'groups' && $path['2'] == 'discussions') {
    $group_uid = _get_group_id($path['1']);
    $group = node_load($group_uid);
    if (isset($group) && $group->field_enable_discussions['0']['value'] == '0'){
      drupal_access_denied();
      module_invoke_all('exit');
      exit();
    }
  }
}

/**
 * Implementation of hook_form_alter()
 * Functionality to hide discussion link from the menu, when the group has disabled the discussions.
 */
function og_prepopulate_menu_form_alter(&$form, &$form_state, $form_id){
//  $group = menu_get_object('node');
//  $disabled_discussions = ($group->field_enable_discussions['0']['value'] == '0' || !isset($group->field_enable_discussions['0']['value']));
//  if (isset($group) && $group->type == 'group' && $disabled_discussions){
//    $path = drupal_get_path('module', 'og_prepopulate_menu');
//    drupal_add_js($path . '/js/discussion.js');
//  }
//  //This conditional help when we got to the url: small_group_name/contact.
//  if ($group->type == webform){
//    $node = node_load(end($group->og_groups));
//    $disabled_discussions = ($node->field_enable_discussions['0']['value'] == 0 || !isset($node->field_enable_discussions['0']['value']));
//    if ($node->type == 'group' && $group->path ==  $node->field_small_name['0']['value'] . '/contact' && $disabled_discussions){
//      $path = drupal_get_path('module', 'og_prepopulate_menu');
//      drupal_add_js($path . '/js/discussion.js');
//    }
//  }
//
//  $menu = menu_list_system_menus();
//  $menuDos = menu_get_names();
//  $a = 4;
}

