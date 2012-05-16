$(document).ready(function() {
	$("#disclaimer-link").colorbox({width:"720", height:"530", inline:true, href:"#disclaimer", opacity: 0.6});
	$('#ok-button').click(function(){
  		$.fn.colorbox.close();
	});
});

