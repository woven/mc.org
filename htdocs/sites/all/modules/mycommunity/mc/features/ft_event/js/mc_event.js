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
        var radioname = 'field_place_choice[value]';
        $choice = $('input:radio[name={name}]'.replace('{name}',radioname));
        $choice.find(":first-child").hide();
        $choice.change(
            function(e){
                $this= $(this);
                id = $this.attr("id");
                cls = "input:radio[name={name}]:checked".replace('{name}',radioname);
                $selected = $(cls);
                switch($selected.val()){
                    case 'nr':
                        $(".group-place .location").slideUp();
                        $(".group-place #edit-field-place-0-nid-nid-wrapper").slideDown();
                    break;
                    case 'new':
                        $(".group-place #edit-field-place-0-nid-nid-wrapper").slideUp();
                        $(".group-place .location").slideDown();
                    break;
                    default:
                        $("#edit-field-place-choice-value-nr").attr('checked','checked');
                        $("#edit-field-place-choice-value-nr").change();
                    break;
                }

                $('.group-place .form-radios label').removeClass('active');
                label = "label[for={id}]".replace("{id}",id);
                $(label).addClass('active');
                console.log(label);
            }
        );

        $choice.change();
    }
}