$(document).ready(function() {
    $('#edit-field-online-event-value').change(function(){
        var location_wrapper = $('#edit-field-place-0-nid-nid-wrapper').closest('.default-location-wrapper');
        $(location_wrapper).slideToggle();
        $(location_wrapper).find('input').each(function(){
            $(this).val('');
        });
    })
});