<?php

function _feedapi_mc_is_updatable($argument){
  if(is_numeric($argument)){
    $query = 'SELECT COUNT(*) FROM feedapi_node_item WHERE nid=' . $argument . ' AND updatable=1';
  }
  else {
    $query = "SELECT COUNT(*) FROM feedapi_node_item WHERE guid='" . $argument . "' AND updatable=1";
  }

  $result = db_result(db_query($query));
  return $result;
}

function _feedapi_mc_get_update_date($nid){
  $query = 'SELECT update_date FROM feedapi_node_item WHERE nid=' . $nid . ' AND updatable=0 LIMIT 1';
  $result = db_result(db_query($query));
  return $result;
}