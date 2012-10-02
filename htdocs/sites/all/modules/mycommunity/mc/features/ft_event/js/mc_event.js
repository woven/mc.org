Drupal.behaviors.EventOnlineEvent = function(context){
    if(context == document){
        $('#edit-field-online-event-value').change(function(){
            $this = $(this);
            $('.group-place').slideToggle();
        });
    }
}

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
                    default:
                        $("#edit-field-place-choice-value-nr").attr('checked','checked');
                        $("#edit-field-place-choice-value-nr").change();
                    break;
                }
            }
        );

        $choice.change();

    }
}