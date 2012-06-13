Drupal.behaviors.ogtrails = function(context) {
  // setting the active trail
  menu = $("#left .block-og_menu");
  if ( $(".active-trail", menu).length == 0){ // do not add another active trail if an active trail is active
    $("a[href=" + Drupal.settings.og_trails.path + "]", menu).parent().addClass('active-trail');
  } 
  primaryLinksMenu = ("#navigation .primary-links");
  $("li", primaryLinksMenu).removeClass("active-trail");
  $("a[href=" + Drupal.settings.og_trails.groupsPath + "]", primaryLinksMenu).parent().addClass("active-trail");
}