$(document).ready(function() {
    $('#edit-field-online-event-value').change(function(){
        var location_wrapper = $('#edit-field-place-0-nid-nid-wrapper').closest('.default-location-wrapper');
        $(location_wrapper).slideToggle();
        $(location_wrapper).find('input').each(function(){
            $(this).val('');
        });
    })
});

Drupal.behaviors.EventPlaceSelect = function(context){
    if(context == document){
        $choice = $('input:radio[name=field_place_choice[value]]');
        $choice.find(":first-child").hide();
        $choice.change(
            function(e){
                $this= $(this);
                cls = "input:radio[name=field_place_choice[value]]:checked";
                $selected = $(cls);
                switch($selected.val()){
                    case 'nr':
                        $(".group-place .location").hide();
                        $(".group-place #edit-field-place-0-nid-nid-wrapper").show();
                    break;
                    case 'new':
                        $(".group-place .location").show();
                        $(".group-place #edit-field-place-0-nid-nid-wrapper").hide();
                    break;
                }
            }
        );

        $choice.change();

    }
}