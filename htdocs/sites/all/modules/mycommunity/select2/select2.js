
/**
 * Provide the HTML to create the modal dialog.

Drupal.theme.prototype.CToolsModalDialog = function () {
    var html = ''

    html += "<div id=\"ctools-modal\" class=\"\">";
    html += "  <div class=\"ctools-modal-content\">";
    html += "  <div class=\"modal-header\">";
    html += "    <button type=\"button\" class=\"close\" data-dismiss=\"modal\" aria-hidden=\"true\">&times;<\/button>";
    html += "    <h3 id=\"modal-title\"><\/h3>";
    html += "  <\/div>";
    html += "  <div id=\"modal-content\" class=\"modal-body\"><\/div>";
    html += "  <div class=\"modal-footer\">";
    html += "    <a href=\"#\" class=\"btn close\">Close<\/a>";
    html += "    <a href=\"#\" class=\"btn btn-primary\">Save changes<\/a>";
    html += "  <\/div>";
    html += "<\/div>";
    html += "<\/div>";

    return html;
};

 */
function selectChanged(me){
//    link = "<a href='/select2/ajax/add/place' id='REMOVEMELATER' class='ctools-use-modal ctools-use-ajax'></a>";


}

(function($){

    Drupal.behaviors.newauto = function (context) {
            $('input.autocomplete:not(.autocomplete-processed)', context).each(function () {

                var ac = $(this);
                var text_id = this.id.substr(0, this.id.length - 13);

                var input = $('#'+text_id);

                var ac_url = ac.attr("value");

                var select = $('#'+text_id+'-autocomplete-select');

                ac.width("90%");
                ac.removeAttr("disabled");
                ac.val(input.val());

                //console.log(ac.attr("id")+":"+ac_url);

                ac.select2({
                        dropdownCssClass: "drupal-autocomplete-select2",
                        //placeholder: "Search for a movie",
                        minimumInputLength: 1,
                        ajax: {
                            url: "http://w.miamitech.org/select2/autocomplete",
                            dataType: 'json',
                            data: function (term,page){
                                return {
                                    url:ac_url,
                                    term: term
                                }
                            },
                            results: function(data,page){
                                console.log(data);

                                items = new Array();

                                for(var key in data) {
                                    items.push({id: key,text: data[key]})
                                }

                                items.push({id: "new",text: "Add a new Node..."});
                                items.push({id: 'new_term', text: "Just use it"});

                                return {results: items };
                            }
                        }
                });

                ac.on("change", function(e) {
                    console.log(e);
                    if(e.val == 'new'){
                        selectChanged(this);
                    }
                })

            });

    };
})(jq180);