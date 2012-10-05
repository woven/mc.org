if(jq180){

Drupal.select2 = {};


Drupal.select2.template = function(item){

    if(item.custom != undefined && item.custom){
        return "<div class='select2-result-special'>"+item.text+"</div>";
    }

    return item.text;
}

Drupal.select2.nodecreate = function(ct,input_id,title){
    query_ob = {'modalframe':1,'select2_input':input_id,'term':title};
    query_str = jQuery.param(query_ob);

    url = '/node/add/'+ct.replace("_","-")+"?"+query_str;

    var modalOptions = {
        url: url,
        //width: $(window).width() - 100,
        width: 600,
        height: 650,
        autoFit: false,
        draggable: false,
        onSubmit: Drupal.select2.NodeSubmitCallback
        /*
        customDialogOptions:{
            autoOpen: true,
            buttons : {
                "Create an account": function() {
                    alert("haha");
                }
            }
        }  */
    };

    //check if modaFrame exists
    if(!Drupal.modalFrame){
        console.log("Can't find Drupal.modalFrame/ModalFrame api");
        return;
    }

    // Open the modal frame.
    Drupal.modalFrame.open(modalOptions);
};

/**
* todo on form load, detect if it has [nid: ] and remove from the selection TEXT value
* todo better logic to sync select2 and input values
*/

(function($){

    Drupal.select2.getnid = function(value){
        var regexp = "/.*?\[nid:(.*?)\]/i";
        var match = regexp.exec(value);
        if (match != null) {
            nid = match[1];
        } else {
            nid = "";
        }

        return nid;
    }

    Drupal.select2.gettitle = function(value){
        var regexp = /(.*?)\[nid:.*?\]/i;
        var match = regexp.exec(value);
        if (match != null) {
            title = match[1];
        } else {
            title = "";
        }

        return title;
    }

    /*
        scope fo the function is jquery object of the input field
    */
    Drupal.select2.setval = function(val){
        this.val(val);
        select2 = $("#"+this.attr("id")+'-select2');
        data = {id: val, text: val};
        select2.select2("data",[data]);
    }

    Drupal.select2.setnr = function(title,nid){

        $this = $(this);
        $select = $("#"+$this.attr("id")+'-select2');

        //set val & and select 2 data
        val = title + " [nid:"+nid+"]";
        data = [{id: val, text: title}];
        //console.log(Drupal.select2.getnid(val));
        //set the original node reference value
        $this.val(val);

        //set the select2 value
        $select.select2("data",data);
    }

    Drupal.select2.NodeSubmitCallback = function(args, statusMessages){
        if(args && args.operation == "updateSingleValue"){


            $this = $("#"+args.input);
            $select = $("#"+$this.attr("id")+'-select2');

            nid = args.nid;
            title = args.title;

            //set val & and select 2 data
            val = title + " [nid:"+nid+"]";
            data = [{id: val, text: title}];

            //set the original node reference value
            $this.val(val);

            //set the select2 value
            $select.select2("data",data);
        }
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

                select2.select2({
                        createSearchChoice: function (term,data){
                            //return {id:term, text:"Just use: " + term,custom: data};
                        },
                        dropdownCssClass: "drupal-autocomplete-select2",
                        //placeholder: "Search for a movie",
                        allowClear: true,
                        multiple: true,
                        minimumInputLength: 1,
                        maximumSelectionSize: 1,
                        width: '70%',
                        formatResult: Drupal.select2.template,
                        //formatSelection: Drupal.select2.template,
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
                                /*
                                if(data.is_nr){

                                    //add newnode field
                                    for (var node in data.allow_nodes){
                                       data.vals.push({id:"newnode:::"+node+":::"+data.term,"text":"Add a "+data.allow_nodes[node]+'...',custom: true});
                                    }

                                    //check if the noderefcreate is enabled (auto create of nodes through title);
                                    if(data.cck.widget.type == "noderefcreate_autocomplete"){
                                        data.vals.push({id:'justuse:::'+data.term,"text":"Just use: " + data.term,custom: true});
                                    }
                                }
                                */

                                return {results: data.vals };
                            }
                        }
                });


                //on change for the original input field
                input.on("change", function(e) {

                    var input = $(this);
                    var select2 = $("#"+this.id+"-select2");
                    if(input.val().length){
                        //nid = Drupal.select2.getnid(input.val());
                        data = {id: input.val(), text: input.val()};
                        select2.select2("data",[data]);
                    }
                });

                //trigger the change event right away
                input.change();

                //on change select2 logic to sync between original input and select2
                select2.on("change", function(e){

                    var input = $("#"+$.data(this,"input_id"));
                    var select2 = $(this);

                    if(e.val.length && e.val[0] != undefined){
                        value = e.val[0];
                    }else{
                        value = "";
                    }

                    var vals = value.split(":::");

                    if(vals.length > 1){
                        switch(vals[0]){
                            case 'newnode':
                                term = vals[2];
                                input.val("");
                                select2.select2("data",[]);
                                Drupal.select2.nodecreate(vals[1],input.attr("id"),term);
                            break;
                            case 'justuse':
                                term = vals[1];
                                input.val(term);
                                select2.select2("data",[{id:term,text:term}]);
                            break;
                        }
                    }else{
                        input.val(value);
                    }
                });
            });
    };
})(jq180);
}