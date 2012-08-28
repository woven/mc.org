(function($){
    Drupal.behaviors.staringtooltip = function (context) {

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
        })};

})(jq180);