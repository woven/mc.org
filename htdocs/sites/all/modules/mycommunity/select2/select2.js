
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

(function($){

    Drupal.behaviors.select2 = function (context) {
            $('input.autocomplete:not(.autocomplete-processed)', context).each(function () {

                //auto complete input field
                var ac = $(this);

                //the actual text-box , id and input
                var input_id = this.id.substr(0, this.id.length - 13);
                var input_wrapper_id = input_id+'-wrapper';
                var input_select2_id = input_id+'-select2';
                var input = $('#'+input_id);


                var select2 = $("<input></input>").attr("id",input_select2_id).attr("type","hidden");

                input.hide();
                select2.insertAfter(input);
                select2.data("input_id",input_id);

                var ac_url = ac.attr("value");

                //var event = $.Event("modal-select");

                select2.select2({
                        createSearchChoice: function (term,data){
                            return {id:term, text:"Just use: " + term,custom: data};
                        },
                        dropdownCssClass: "drupal-autocomplete-select2",
                        //placeholder: "Search for a movie",
                        allowClear: true,
                        multiple: true,
                        maximumSelectionSize: 1,
                        width: '75%',
                        ajax: {
                            url: "/select2/autocomplete",
                            dataType: 'json',
                            data: function (term,page){
                                return {
                                    url:ac_url,
                                    term: term,
                                    field_id: input.attr("id")
                                }
                            },
                            results: function(data,page){
                                return {results: data.vals };
                            }
                        }
                });


                //on change for the original input field
                input.on("change", function(e) {
                    input = $(this);
                    data = {id: input.val(), text: input.val()};
                    select2.select2("data",[data]);
                });

                //trigger the change event right away
                input.change();

                //on change select2 logic to sync between original input and select2
                select2.on("change", function(e) {
                    input = $("#"+$.data(this,"input_id"));
                     console.log(e);
                    if(e.val[0] == undefined){
                        value = "";
                    }else{
                        value = e.val[0];
                    }
                    input.val(value);


                });

            });

    };
})(jq180);