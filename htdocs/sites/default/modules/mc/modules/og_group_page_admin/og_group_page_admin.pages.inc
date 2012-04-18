<?php
// $Id:$

/**
 * @file
 * User page callbacks for the og_audience_url module.
 */

/**
* Menu callback. Allows to enable/disable group blocks.
*/
function og_group_page_admin_manage_group_blocks($form, $node){
  $form = array();
    
  drupal_set_title( t('Manage blocks for !group_name group', array('!group_name'=>$node->title)));
  
  $options = array(
    'og_block|views-og_details-block_4|'.$node->nid => t('Follow Block'),
    'og_block|views-og_community-block_1|'.$node->nid => t('Community Block'),
    //'og_block|quicktabs-1|'.$node->nid => t('Latest, Most Popular and Featured')
  );
  
  $default_values = array();
  foreach($options as $option => $title){
    if(variable_get($option, 1)){
      $default_values[$option] = $option;
    }
  }
  
  $form['blocks'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Group Blocks'),
    '#options' => $options,
    '#default_value' => $default_values,
    '#description' => t('Select the blocks to show on the group home page')
  );
  
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit')
  );
    
  return $form;
}
 
/**
 * Submit handler for group blocks management page
 */
function og_group_page_admin_manage_group_blocks_submit($form, &$form_state){
  $options = $form['blocks']['#options'];
  $enabled = $form_state['values']['blocks'];
  foreach($options as $option => $title){
    if(!empty($enabled[$option])){
      variable_set($option,1);
    }else{
      variable_set($option,0);
    }
  }
  drupal_set_message(t('Group Block settings has been succesfully saved'));
}

