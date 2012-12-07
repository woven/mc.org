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
    var delay = 4 * 1000;
    var inactive = 1 * 1000;
    Drupal.behaviors.rate_mc_up_down_help = function (context) {
      $("a.rate-button.rate-up",context).not(".rate-reset").qtip({
        content: {text: "Promote this"},
        position: {my: "right center",at: "left center",
          adjust:{x:0,y:0},
          viewport: $(window)
        },
        show: {solo: true},
        hide: {delay: delay,fixed:true,inactive:inactive},
        style: {
          classes: 'ui-tooltip ui-tooltip-shadow ui-tooltip-rounded ui-tooltip-mc'
        }
      });
      $("a.rate-button.rate-up.rate-reset",context).qtip({
        content: {text: "Undo promote"},
        position: {my: "right center",at: "left center",
          adjust:{x:0,y:0},
          viewport: $(window)
        },
        show: {solo: true},
        hide: {delay: delay,fixed:true,inactive:inactive},
        style: {
          classes: 'ui-tooltip ui-tooltip-shadow ui-tooltip-rounded ui-tooltip-mc'
        }
      });

      $("a.rate-button.rate-down",context).not(".rate-reset").qtip({
        content: {text: "Demote this"},
        position: {my: "top center",at: "bottom center",
          adjust:{x:0,y:0},
          viewport: $(window)
        },
        show: {solo: true},
        hide: {delay: delay,fixed:true,inactive:inactive},
        style: {
          classes: 'ui-tooltip ui-tooltip-shadow ui-tooltip-rounded ui-tooltip-mc'
        }
      });
      $("a.rate-button.rate-down.rate-reset",context).qtip({
        content: {text: "Undo demote"},
        position: {my: "top center",at: "bottom center",
          adjust:{x:0,y:0},
          viewport: $(window)
        },
        show: {solo: true},
        hide: {delay: delay,fixed:true,inactive:inactive},
        style: {
          classes: 'ui-tooltip ui-tooltip-shadow ui-tooltip-rounded ui-tooltip-mc'
        }
      });
    };

    Drupal.behaviors.rate_mc_up_down_anonymous = function (context) {
      $("span.rate-button.rate-up",context).qtip({
        content: {text: Drupal.settings.mc_event_section.msg_anonymous_stuff},
        position: {my: "right center",at: "left center",
          adjust:{x:0,y:0},
          viewport: $(window)
        },
        show: {solo: true},
        hide: {delay: 1000,fixed:true},
        style: {
          classes: 'ui-tooltip ui-tooltip-shadow ui-tooltip-rounded ui-tooltip-mc'
        }
      });

      $("span.rate-button.rate-down",context).qtip({
        content: {text: Drupal.settings.mc_event_section.msg_anonymous_stuff},
        position: {my: "top center",at: "bottom center",
          adjust:{x:0,y:0},
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