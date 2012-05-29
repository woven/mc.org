$(document).ready(function() {
	$('#view-pdf').click(function() {
		var filefield;
		filefield = $('.filefield-file div div');
		if(filefield.length){
			filefield.remove();
			var iframe;
			iframe = $('.filefield-file div iframe');
			iframe.before(filefield);
			filefield.css('margin-top', '-14px');
			filefield.css('margin-left', ' 20px');
			filefield.css('padding-bottom', '5px');
		}
	});
});