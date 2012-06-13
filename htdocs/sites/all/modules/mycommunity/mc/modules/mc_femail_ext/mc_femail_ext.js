$(document).ready(function() {
	ghh_femail_ext.init();
});

var ghh_femail_ext = {
	init: function() {
		ghh_femail_ext.addCheckboxFunction();
	},

	addCheckboxFunction: function () {
		$('input[name=headeroption]:radio').click(function() {
			value=$(this).attr('value');
			$("input[id*=edit-femail-subscribe]").each(
				function(){
					if($(this).attr('id').match(value+'$')){
						this.checked=true;
					}
				}
			)
		});
	}
};

