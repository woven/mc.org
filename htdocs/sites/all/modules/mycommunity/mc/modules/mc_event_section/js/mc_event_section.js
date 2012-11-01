//check if jq180 exists,
if(jq180){
    (function($){
        Drupal.behaviors.AnonymousStaring = function (context) {
            $(".flag-events-bookmarks.unknown a.flag-action",context).qtip({
                content: {text: $("#event-staring-tooltip").html()},
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

function ShowMyEventsTooltip() {
    (function($){
        $("#navigation a[href*='events/my-events']").qtip({
            content: {text: "Your starred events will appear here.<br/> <a href=\"#\" onclick=\"$('.ui-tooltip').hide();\">Ok, got it!</a>"},
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
        $(document).scrollTop(0);
    })(jq180);
}


Drupal.behaviors.MyEventsUnStar = function(context){

    $(".flag-events-bookmarks.unknown a.flag-action",context).click(function(e){
        e.preventDefault();
    });

    if(context == document){
        $(document).bind('flagGlobalAfterLinkUpdate', function(event, data) {

            if(data.flagStatus == "flagged" && data.flagName == "events_bookmarks" && !$.cookie("MC-EVENT-STARED")){
                $.cookie('MC-EVENT-STARED', 1, { expires: 300 });
                ShowMyEventsTooltip();
            }

            if(data.flagStatus == "unflagged" && data.flagName == "events_bookmarks" && $(data.link).parents(".my-events").length){
                if ($(data.link).parents('.event').size()){
                    $(data.link).hide().parents('.event').fadeOut('fast', function () {
                        if (!$(this).parents(".section-day").find(".event:visible").length) {
                            $(this).parents(".section-day").fadeOut('fast', function () {
                                if (!$(this).parents(".section-week").find(".event:visible").length) {
                                    $(this).parents(".section-week").fadeOut('fast', function () {
                                        if (!$(this).parents(".section-section").find(".event:visible").length) {
                                            $(this).parents(".section-section").fadeOut('fast');
                                        }
                                    });
                                }
                            });
                        };

                        if (!$('.my-events .event:visible').size()) {
                            $('.my-events .view-content').html("<p class='default-message'>Nothing to show here. Star some upcoming events and they'll show here.</p>");
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
              var firstEvent = $duplicate.find('.first');
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