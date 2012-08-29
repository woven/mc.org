
var og_audience_inline_nid = 0;

function og_audience_inline_showhide_form(nid, openlabel, closelabel) {
  ogaudiencebox = $("div[@id=node-ogaudience]");
  
  if(og_audience_inline_nid == nid) {
    if(ogaudiencebox.is('div')) {
      if (ogaudiencebox.css('display')=='block') {
        ogaudiencebox.hide();
        $('#link_og_audience_' + og_audience_inline_nid).html(openlabel);        
      }
      else if(ogaudiencebox.css('display')=='none') {
        ogaudiencebox.show();
        $('#link_og_audience_' + og_audience_inline_nid).html(closelabel);        
      }
    }
    else {
      og_audience_inline_form(nid);
      og_audience_inline_nid = nid;
      $('#link_og_audience_' + og_audience_inline_nid).html(closelabel);        
    }
  }
  else {
    if(ogaudiencebox.is('div')) {
      ogaudiencebox.hide();
      ogaudiencebox.remove();
      $('#link_og_audience_' + og_audience_inline_nid).html(openlabel);  
    }
    og_audience_inline_form(nid);
    og_audience_inline_nid = nid;
    $('#link_og_audience_' + og_audience_inline_nid).html(closelabel);
  }
};

function og_audience_inline_form(nid) {
  $.ajax({
    type: "GET",
    async: false,
    url: Drupal.settings.ogAudienceInline.urlForm + Drupal.encodeURIComponent(nid),
    dataType: "string",
    success: function (html_form) {
      $("div[@id=node-" + nid + "]/div.content").append('<div id="node-ogaudience" style="display: block;">' + html_form + '</div>');
    }
  });
};

function og_audience_inline_submit() {
  var els = $("#-og-audience-inline-build-form").get(0).getElementsByTagName("input");
  if (!els) {
    alert('Nothing to save !');
    return;
  }
  var params = [];
  for(var i=0, max=els.length; i < max; i++) {
    var el = els[i];
    if (el.name.indexOf("add_to")>=0 || el.name.indexOf("remove_from")>=0) {
      if(el.checked) {
        params.push({name: el.name, value: el.value});
      }
    }
    if(el.name.indexOf("og_public")>=0) {
      if(el.checked) {
        params.push({name: el.name, value: el.value});
      }
    }
  }
  $.post(Drupal.settings.ogAudienceInline.urlFormSubmit + og_audience_inline_nid, params, og_audience_inline_submit_callback);
};

function og_audience_inline_submit_callback(response) {
  ogaudiencebox = $("div[@id=node-ogaudience]");
  ogaudiencebox.remove();
  og_audience_inline_form(og_audience_inline_nid);
  
};
