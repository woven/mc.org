$(document).ready(function() {
    $('#edit-locations-0-field-online-event-value').change(function(){
        var fieldset = $(this).closest('.fieldset-content');
        var location_wrapper = $(fieldset).find('.default-location-wrapper');
        $(location_wrapper).slideToggle();
        $(location_wrapper).find('input').each(function(){
            $(this).val('');
        });
    })
});