Drupal.behaviors.toogle = function (context) {
      // Define the selectors of the fields that needs hiding/showing
      var times = new Array("#edit-event-start-exploded-hour", "#edit-event-start-exploded-minute", "#edit-event-end-exploded-hour", "#edit-event-end-exploded-minute", "#edit-event-start-exploded-ampm", "#edit-event-end-exploded-ampm");
      var end_date = new Array("#edit-event-end-exploded-wrapper");

      // Show/hide those fields after page load
      event_switch(times, $("#edit-event-has-time").attr("checked") ? 'show' : 'hide');
      event_switch(end_date, $("#edit-event-has-end-date").attr("checked") ? 'show' : 'hide');

      // Attaching action for the "click" event
      $("#edit-event-has-time").click(function () {
          if(this.checked){
              event_switch(times, 'show');
          }else{
              event_switch(times, 'hide');
          }
      });

      $("#edit-event-has-end-date").click(function () {
          if(this.checked){
              event_switch(end_date, 'show');
          }else{
              event_switch(end_date, 'hide');
          }
      });
}

/**
 * Helper function needed for showing/hiding fields
 */
function event_switch(selectors, effect) {
  $.each(selectors, function() {
    var code = '$("' + this + '").' + effect + '();';
    eval(code);
  });
}