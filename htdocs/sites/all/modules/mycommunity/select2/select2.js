/**
 * Provide the HTML to create the modal dialog.
 */

Drupal.theme.prototype.CToolsModalNodeForm = function () {
    var html = '';
    html += '  <div id="ctools-modal">';
    html += '    <div class="ctools-modal-content">'; // panels-modal-content
    html += '      <div class="modal-header">';
    html += '        <a class="close" href="#">X</a>';
    html += '        <h3 id="modal-title" class="modal-title">&nbsp;</h3>';
    html += '      </div>';
    html += '      <div id="modal-content" class="modal-content"></div>';
    //html += '    <div id="modal-footer" class="modal-footer"><input value="Save" class="button form-submit"> <input type="submit" name="op" id="edit-submit" value="Close" class="button form-cancel"></div>';
    html += '    </div>';
    html += '  </div>';

    return html;
};

/*
* todo on form load, detect if it has [nid: ] and remove from the selection
* todo better logic to sync select2 and input values
*/

(function($){

    Drupal.CTools.AJAX.commands.select2_val = function(data){
        //define the input and select2 shadow input
        input = $("#"+data.selector);
        select2 = $("#"+data.selector+"-select2");

        //select2 value array
        select2_data = [{id: data.value, text: data.value_title}];

        //update both select2 and input with the new node value
        select2.select2("data",select2_data);
        input.val(data.value);
    };

    Drupal.behaviors.select2 = function (context) {
            $('input.autocomplete:not(.autocomplete-processed)', context).each(function () {

                //auto complete input field
                var ac = $(this);
                ac.addClass("autocomplete-processed");

                //the actual text-box , id and input
                var input_id = this.id.substr(0, this.id.length - 13);
                var input_wrapper_id = input_id+'-wrapper';
                var input_select2_id = input_id+'-select2';
                var input = $('#'+input_id);


                var select2 = $("<input />").attr("id",input_select2_id).attr("type","hidden");

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
                        minimumInputLength: 1,
                        maximumSelectionSize: 1,
                        width: '60%',
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
                                if(data.is_nr){
                                    data.vals.push({id:"new","text":"Add new node...",custom: true});
                                }

                                data.vals.push({id:data.term,"text":"Just use: " + data.term,custom: true});
                                return {results: data.vals };
                            }
                        }
                });


                //on change for the original input field
                input.on("change", function(e) {
                    input = $(this);
                    if(input.val().length){
                        data = {id: input.val(), text: input.val()};
                        select2.select2("data",[data]);
                    }
                });

                //trigger the change event right away
                input.change();

                //on change select2 logic to sync between original input and select2
                select2.on("change", function(e) {
                    input = $("#"+$.data(this,"input_id"));
                    select2 = $(this);

                    if(e.val[0] == undefined){
                        value = "";
                    }else{
                        value = e.val[0];
                    }

                    if(value == "new"){
                        select2.select2("data",[]);
                            l = $("<a></a>").attr('href',"/select2/ajax/add/place/"+input.attr("id")).addClass('ctools-use-modal-processed ctools-use-modal ctools-modal-modal-node-form');
                            Drupal.CTools.Modal.clickAjaxLink.apply(l);
                    }else{
                        input.val(value);
                    }
                });

            });

    };
})(jq180);