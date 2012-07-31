<?php

$query = "SELECT nid,created FROM node WHERE uid=0 AND created>=1343418865";
$result = db_query($query);

while ($row = db_fetch_object($result)) {
  $nid = $row->nid;
  $timestamp = $row->created;
  $uid = db_result(db_query('SELECT uid from node_revisions where nid=%d and timestamp=%d', $nid, $timestamp));
  db_query('UPDATE node SET uid=%d where nid=%d', $uid, $nid);
}