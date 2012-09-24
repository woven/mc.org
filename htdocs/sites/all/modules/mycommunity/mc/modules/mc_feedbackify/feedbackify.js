Drupal.behaviors.feedbackifylink = function (context) {
	if(Drupal.settings.feedbackify.feedbackify_id){
		$("a[rel*='feedbackify']").click(function (e) {
            FBY.showForm(Drupal.settings.feedbackify.feedbackify_id);
            e.preventDefault();
        });
	}
};