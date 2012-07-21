Drupal.behaviors.FeedBackifyAbout = function (context) {
	if(Drupal.settings.feedbackify.feedbackify_id){
		$("a[rel=feedbackfiy]").click(function (e) {
            FBY.showForm(Drupal.settings.feedbackify.feedbackify_id);
            e.preventDefault();
        });
	}
};