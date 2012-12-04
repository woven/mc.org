<?php

print '<div class="buttons">';
print theme('item_list', $buttons_updown);
print '</div>';

if ($info) {
  //print '<div class="rate-info">' . $info . '</div>';
}

?>
<?php //print "Rating: " . $results['rating'] ." - " . time(); ?>