/*
	if feed allows both file and url upload
*/

function feedapi_updateui(val){
	if(val){
	    switch(val){
	        case 'url':
	            $('#edit-feedapi-feedapi-url-wrapper').show();
	            $('#edit-feedapi-feedapi-file-wrapper').hide();
	            break;
	        case 'upload':
	            $('#edit-feedapi-feedapi-url-wrapper').hide();
	            $('#edit-feedapi-feedapi-file-wrapper').show();
	            break;
	    }
	}
}

Drupal.behaviors.FeedApiMethod = function (context) {
	method = $("input[name='feedapi[upload_method]']");
		
    method.change(function () {
        var val = $("input[name='feedapi[upload_method]']:checked").val();
        feedapi_updateui(val);
    });
    
    method.change();
}