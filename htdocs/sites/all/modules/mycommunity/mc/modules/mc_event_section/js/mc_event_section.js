//check if jq180 exists,
if(jq180){
    (function($){
        Drupal.behaviors.AnonymousStaring = function (context) {
          var delay = 1.5 * 1000;
          var inactive = 1 * 1000;
            $(".flag-link-toggle.not-logged-in",context).qtip({
                content: {text: Drupal.settings.mc_event_section.msg_anonymous},
                position: {my: "bottom center",at: "top center",
                    adjust:{x:-2,y:-3},
                    viewport: $(window)
                },
              show: {solo: true},
              hide: {fixed:true, delay: 600},
                style: {
                    classes: 'ui-tooltip ui-tooltip-shadow ui-tooltip-rounded ui-tooltip-mc'
                }
            });
        }; //end of staringtooltips

      Drupal.behaviors.logged_in_tooltips = function (context) {
        var delay = 1.5 * 1000;
        var inactive = 1 * 1000;

        $("a.flag-action",context).not(".not-logged-in").qtip({
          content: {text: "Save this"},
          position: {my: "bottom center",at: "top center",
            adjust:{x:-2,y:-3},
            viewport: $(window)
          },
          show: {solo: true,delay: Drupal.settings.mc_event_section.tooltip_show_deplay},
          hide: {fixed:true,event: 'click mouseleave',inactive: Drupal.settings.mc_event_section.tooltip_hide_inactive},
          style: {
            classes: 'ui-tooltip ui-tooltip-shadow ui-tooltip-rounded ui-tooltip-mc'
          }
        });

        $("a.unflag-action",context).not(".not-logged-in").qtip({
          content: {text: "Undo save"},
          position: {my: "bottom center",at: "top center",
            adjust:{x:-2,y:-3},
            viewport: $(window)
          },
          show: {solo: true,delay: Drupal.settings.mc_event_section.tooltip_show_deplay},
          hide: {fixed:true,event: 'click mouseleave',inactive: Drupal.settings.mc_event_section.tooltip_hide_inactive},
          style: {
            classes: 'ui-tooltip ui-tooltip-shadow ui-tooltip-rounded ui-tooltip-mc'
          }
        });
      }; //end of staringtooltips

    })(jq180);
}

function ShowMyEventsTooltip() {
      //scroll up and show the tooltip msg
      (function($){

        //check if the user has not stared before
        //mark user that he has stared
        if(!Drupal.settings.mc_event_section.has_stared){
          href = $(Drupal.settings.mc_event_section.has_stared_link).find('a').attr("href");

          //star the user has_stared before
          $.get(href);

          //set current local value as stared
          Drupal.settings.mc_event_section.has_stared = true;

          //scroll to top
          $(document).scrollTop(0);

          //show the tooltip for first time
          $("#navigation a[href*='events/my-events']").qtip({
            content: {text: Drupal.settings.mc_event_section.msg_myevents_help},
            show: {solo: true},
            position: {my: "top center",at: "bottom center",
              adjust:{x:-2,y:0},
              viewport: $(window)
            },
            hide: false,
            show: {
              event: false,
              ready: true
            },
            style: {
              classes: 'ui-tooltip ui-tooltip-shadow ui-tooltip-rounded ui-tooltip-mc'
            }
          });
        }
      })(jq180);
}


Drupal.behaviors.MyEventsStaring = function(context){

    $(".flag-events-bookmarks.unknown a.flag-action",context).click(function(e){
        e.preventDefault();
    });

    if(context == document){
        $(document).bind('flagGlobalAfterLinkUpdate', function(event, data) {

            if(data.flagStatus == "flagged" && data.flagName == "events_bookmarks"){
                ShowMyEventsTooltip();
            }

            if(data.flagStatus == "unflagged" && data.flagName == "events_bookmarks" && $(data.link).parents(".my-events").length){
                if ($(data.link).parents('.event').size()){
                    $(data.link).hide().parents('.event').slideUp('fast', function () {
                        if (!$(this).parents(".section-day").find(".event:visible").length) {
                            $(this).parents(".section-day").slideUp('fast', function () {
                                if (!$(this).parents(".section-week").find(".event:visible").length) {
                                    $(this).parents(".section-week").slideUp('fast', function () {
                                        if (!$(this).parents(".section-section").find(".event:visible").length) {
                                            $(this).parents(".section-section").slideUp('fast');
                                        }
                                    });
                                }
                            });
                        };

                        if (!$('.my-events .event:visible').size()) {
                            $('.my-events .view-content').html(Drupal.settings.mc_event_section.msg_myevents_empty);
                        }
                    });
                }
            }
        });
    }
}

Drupal.behaviors.EventDuplicates = function (context) {
  $('.section-day .duplicates',context).each(function(){
      var $duplicate = $(this);
      if(!$duplicate.parents(".my-events").length){
          var events = $duplicate.find('.event');
          if($(events).length>1){
              var count = $(events).length - 1;
              var firstEvent = $duplicate.find('.row.first');
              $duplicate.find(".event").not('.first').hide();
              var showMoreDiv = '<div class="show-more-events"><a href="#">Show ' + count + ' similar</a></div>';
              firstEvent.append(showMoreDiv);
          }
      }
  });

  $('.show-more-events a',context).click(function(event){
    var duplicates = $(this).closest('.duplicates');
    var events = $(duplicates).find('.event');
    $(events).each(function(){
      var eventElement  = $(this);
      var isFirst = $(eventElement).hasClass('first');
      if(!isFirst){
        $(eventElement).slideToggle();
      }
    });
    $(this).toggleClass('clicked');
    if($(this).hasClass('clicked')){
      $(this).text('Hide similar');
    }
    else {
      var events = $(duplicates).find('.event');
      var count = $(events).length - 1;
      $(this).text('Show ' + count + ' similar');
    }
    event.preventDefault();
  });
};