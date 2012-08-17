/*******************************************************************************

 CSS on Sails Framework
 Title: Pocketlistings
 Author: XHTMLized (http://www.xhtmlized.com/)
 Date: February 2011

 *******************************************************************************/
(function($){
Drupal.behaviors.defaultJoinLoginColorbox = function (context) {
    if(!(/iPhone|iPod/i.test(navigator.userAgent))){
        $("#login-button,a.login",context).colorbox({width:"410", height:"380", inline:true, href:"#login", opacity:0.6, onComplete:function () {
            $('#login input[name=name]').focus();
        }});

        $("#register-button,a.join",context).colorbox({width:"720", height:"300", inline:true, href:"#register", opacity:0.6, onComplete:function () {
            $('#register input[name=mail]').focus();
        }});
    }
};
})(jQuery);

$(document).ready(function() {
	GHH.init();
});

$(".node-type-gallery-image .field-gallery a").html("« Back to album");
$(".node-type-gallery-image .field-gallery").css('display', 'block');
$(".field-gallery-image").addClass("cursor-pointer");
var aux = $(".node-type-gallery-image .browse.right").attr('href');
$(".field-gallery-image").attr("onClick", "location.href='"+aux+"'");
$(".button-print").attr('target', '_blank');

var GHH = {
	init: function() {
		GHH.likeButton();
		GHH.fixesIE();
		GHH.featuredSlideshow();
		GHH.articleSlideshow();
		GHH.tabs();
		GHH.tooltips();
		GHH.overlay();
		GHH.lightbox();
		GHH.newsletterPlaceholder();
		GHH.followButton();
        GHH.starJoin();
	},

    starJoin: function(){

        $(document).bind('flagGlobalAfterLinkUpdate', function(event, data) {
            if(data.flagStatus == "unflagged" && data.flagName == "events_bookmarks" && $('body').hasClass('page-user')){

                if ($(data.link).parents('.event').size()){
                    $(data.link).hide().parents('.event').fadeOut('fast',function(){
                        $(this).remove();

                        if(!$('.col-main .event:visible').size()){
                            $('.col-main').html("<p>Nothing to show here. Star some upcoming events and they'll show here.</p>");
                        }
                    });
                }
            }

            // alert('Object #' + data.contentId + ' (of type ' +
            //data.contentType + ') has been ' + data.flagStatus +
            //' using flag "' + data.flagName + '"');
        });



        $(".flag-events-bookmarks.unknown a.flag-action").click(function(e){
            e.preventDefault();
        });

        /*
        $(".flag-events-bookmarks.unknown a.flag-action").tooltip({
                tip: '#event-staring-tooltip',
                delay: 1250,
                position: 'bottom center'
                //offset: [-20,-2]
                //layout: '<div><span class="b"></span></div>'
        }).hover(GHH.tooltipOverStaring, function(){});
         */
    },

    tooltipOverStaring: function(){
        var api = $(this).data('tooltip');
        if(!api.isShown(true)){
            api.show();
        }
    },

	likeButton: function(){
		var nid=$("#nid").val();
		if(typeof FB!='undefined'){
		FB.Event.subscribe('edge.create',
		    function(response) {
		    	$.get('/facebook/like/' + nid);
		    }
		);
		}
	},

	followButton: function(){
		$("#anonymous-follow").click(function(){ 
			var array=$('body').attr('class').split(' ');
			var nid='';
			for(var element in array){ 
				if(array[element].match('^og-context-')){ 
					var desired_element = array[element]; 
					nid = desired_element.replace("og-context-",""); 
				}
			}
			var link = $('#login').find('.item-list').find('.first').find('a');
			//link.attr('href', link.attr('href') + '?follow=' + nid);
			$.get('/follow/anonymous/'+nid);
		});
	},
	
	fixesIE: function() {
		//Add Stuff Dropdown
		$('#add-stuff, #left li, button').hover(function(){ 
			$(this).addClass('hover');
		},function(){
			$(this).removeClass('hover');
		});
	},
	
	featuredSlideshow: function() {
		var container = $('#featured .view'),
			carousel = null,
			items = null;

		items = container.find('.items');

		// Exist carousel initialization if there aren't more than 3 items
		if (items.find('.featured-item').size() < 4) return;

		carousel = items.jcarousel({
			scroll: 3,
			speed: 'slow',
			setupCallback: function(carousel) {
				container.addClass('jcarousel-processed');
			}
		});
	
	},
	
	articleSlideshow: function() {
		var s = $('.slideshow > div.scrollable').scrollable({
			onSeek: function(el,ind){
				this.getRoot().siblings('.title').html(this.getItems().eq(ind).attr('title'));
			} 
		}).data('scrollable');
		if(s){
			s.seekTo(0);
		}

		// Enlarge functionality
		$('.slideshow .enlarge').click(function(){
			var currentPhoto = $('.slideshow .scrollable .items a').get(s.getIndex())
			$(currentPhoto).trigger('click');

			return false;
		});
	},
	
	tabs: function() {
		$('.block .tabs').each(function(){
			$('ul',this).tabs($(this).siblings('.block-content').children('div'),{
				tabs: 'li',
				current: 'active'
			});
		});
	},
	
	tooltipOver: function(){
	  var api = $(this).data('tooltip');
    if(!api.isShown(true)){
      api.show();
    }
	},
	
	tooltipLeave: function(){
	  var api = $(this).data('tooltip');
        api.hide();
	},

    tooltipLeaveSlow: function(){
        var api = $(this).data('tooltip');
        api.hide(1000);
    },
	
	tooltips: function() {
	  $('ul a[title]').each(function(i, e){
	    // cannot trust only in 'ul a[title]' selector, need to verify
	    // one by one if title is set, otherwise this causes a bug  
	    if ($(e).attr('title') != ''){
	      $(e).tooltip({
            position: 'bottom center',
            delay: 0,
			layout: '<div><span class="b"></span></div>'
        }).hover(GHH.tooltipOver, GHH.tooltipLeave);
	    }
    });
	},
	
	overlay: function() {
		//$('.block-overlay').hide();
		/*$('a[rel].overlay').overlay({
			mask: {
				color: '#000000',
				loadSpeed: 200,
				opacity: 0.7
			}
		});*/
	},
	
	lightbox: function(){
		$('a[rel=lightbox]').colorbox({
			opacity: 0.6,
			loop: false,
			minWidth: 640,
			minHeight: 440,
			onComplete: function(){
				var wrapper = null,
					img = null
				
				wrapper = $('#cboxLoadedContent');
				img = wrapper.find('img');
					
				img.css('margin-top', (wrapper.height() - img.height()) / 2);
			}
		});
		if(!(/iPhone|iPod/i.test(navigator.userAgent))){
			$("#anonymous-follow").colorbox({width:"410", height:"380", inline:true, href:"#login", opacity: 0.6});
			$("#view-pdf").colorbox({width:"830", height:"500", inline:true, href:".filefield-file", opacity: 0.6});
			$('#block-boxes-join_mc a[href$="/user/register"]').colorbox({width:"720", height:"300", inline:true, href:"#register", opacity: 0.6, onComplete:function(){ $('#register [name=mail]').focus(); }});
			$("#fb-friends").colorbox({
				width:"500",
				opacity: 0.6,
				title: "Your Facebook Friends on GetHealthyHarlem.org"
			});
	  }
	},
	
	newsletterPlaceholder: function () {
		$('#newsletter-block input').one('focus',function(){
			$(this).val('');
			$(this).css('color','#000');
		});
	}
	
};

function follow_group(uid)
{
	$.get('/follow/'+uid);
	$('#follow').hide();
	$('#unfollow').css('display', 'block');
	$('#text-follow').html('You are now following this group');
}

function follow_group_comments(uid)
{
  node = window.location;
  $.get( '/follow/'+uid, null,function(response){
    $('.subscribe').remove();
    window.location = node;
  });
}