$(document).ready(function() {
  $('.section-day .duplicates').each(function(){
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

  $('.show-more-events a').click(function(event){
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

});