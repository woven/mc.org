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

if(jq180){
  (function($){
    Drupal.behaviors.rate_mc_up_down_anonymous = function (context) {
      $("span.rate-button",context).qtip({
        content: {text: Drupal.settings.mc_event_section.msg_anonymous},
        position: {my: "top center",at: "bottom center",
          adjust:{x:-2,y:0},
          viewport: $(window)
        },
        show: {solo: true},
        hide: {delay: 1000,fixed:true},
        style: {
          classes: 'ui-tooltip ui-tooltip-shadow ui-tooltip-rounded ui-tooltip-mc'
        }
      });
    }; //end of staringtooltips
  })(jq180);
}