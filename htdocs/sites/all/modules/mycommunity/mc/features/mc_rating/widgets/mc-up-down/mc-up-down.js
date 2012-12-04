/*
Instant Rating for MC UP down widget
 */
Drupal.behaviors.rate_mc_up_down = function (context) {
  var widget_cls = ".rate-widget-mc_up_down";

  //when clicking on non active href
  $(widget_cls + " a.rate-btn", context).not("a.btn-active").click(function(){
    $(this).parents('.rate-widget-mc_up_down').find("a.btn-active").removeClass("btn-active");
    $(this).addClass('btn-active');
  });

  //when clicking on active hrefs
  $(widget_cls + " a.rate-btn.btn-active", context).click(function(){
    $(this).removeClass('btn-active');
  });
};