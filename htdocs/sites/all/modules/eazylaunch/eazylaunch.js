// $Id: eazylaunch.js,v 1.1.2.3 2010/08/16 19:23:47 tdway Exp $
$(document).ready(function () {
	$.getJSON("/eazylaunch/js", function (data){
		//init eazylaunch html
		var content = '<input id="eazylaunch-input"/><div id="eazylaunch-desc">'+data.eazylaunch.details+'</div>';
		var adminblock = $('#admin-toolbar #block-eazylaunch-0');
		if ($(adminblock).length > 0) {
			$(adminblock).html('<div id="eazylaunch-div" class="el-div">'+content+'</div>');
			$('.admin-tabs .eazylaunch-0').click(function(){ $('#eazylaunch-input').focus().select(); });
		}
		else $('body').prepend('<div id="el-wrap"><div id="eazylaunch-div" class="el-div"><h2>EazyLaunch</h2>'+content+'</div></div>');
		//$('#eazylaunch-input').blur(function(){alert(1)});
		
		//handle keydown events
		$(document).keydown(function (e) {
		  if (!e) e = window.event;
		  var ctrlZ = e.keyCode == "Z".charCodeAt(0) && e.ctrlKey;
		  var esc = e.keyCode == 27; //esc key
		  if (!ctrlZ && !esc) return true;
		  var el = $('#eazylaunch-div');
		  if ($(adminblock).length > 0) {
			  if (ctrlZ && (!$(el).parent().hasClass('admin-active') || $('.admin-blocks').is(':hidden'))) {
				  if (!$(document.body).is('.admin-expanded')) $('.admin-toggle').click();
				  $('.admin-tabs .eazylaunch-0').click();
			  } else if ((ctrlZ || esc) && $(document.body).is('.admin-expanded')) $('.admin-toggle').click();
		  }	else { 
			  if (ctrlZ && $(el).is(':hidden')) {
				$(el).show();
				$('#eazylaunch-input').focus().select();
			    return false;
			  } else if (ctrlZ || esc) $(el).hide(); 
			  else return true;
		  }
		});
		
		//init eazylaunch autocomplete
		$("#eazylaunch-input").autocomplete(data.eazylaunch.links, {
			formatItem : function(item) {
				return item.title;
			},
			formatMatch : function(item) {
				var title = item.title;
				if (item.root) return '? '+title;
				else return title;
			},
			scrollHeight : 550,
			matchContains : 1,
			minChars : 0,
			max : 25
		}).result(function(event, item) {
			if ($(adminblock).length > 0) $('.admin-toggle').click();
			else $('#eazylaunch-div').hide();
			if (item.href.indexOf(Drupal.settings.basePath+"eazylaunch/flush") === 0) //add destination to our flush calls
				item.href += "?destination="+location.pathname.substr(Drupal.settings.basePath.length);
			location.href = item.href;
			
		});
	});
});