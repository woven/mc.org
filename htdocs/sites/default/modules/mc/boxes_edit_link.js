
/*
 * This behavior allows to hide/show boxes edit link.
 */
Drupal.behaviors.bloxes_edit_link = function (context) {
    //By default the links are hidden.
    $('.boxes-box-controls .links .edit a').hide();
    
    //Show links whe the mouse is hovering the zone.
    $('.block-boxes').mouseover(function() {
      $(this).find('.boxes-box-controls .links .edit a').css({'display': 'block', 'color': '#595959', 'font-weight': 'bolder'} );
    });
    //Hide links whe the mouse is out of the zone.
    $('div.block, div.node').mouseout(function() {
      $(this).find('.boxes-box-controls .links .edit a').css({'display': 'none'});
    });
};

