//"rate-widget-mc_up_down";
Drupal.behaviors.rate_mc_up_down = function (context) {
  var widget_cls = ".rate-widget-mc_up_down";
  $(widget_cls + " a.rate-btn", context).not(".btn-active").each(function(index) {
    $(this).click(function(e){
      $(this).parent(widget_cls).find("a.btn-active").removeClass("btn-active");
      $(this).addClass('.btn-active');
      console.log("test");
    });
  });
};