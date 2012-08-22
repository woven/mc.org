(function($){
    Drupal.behaviors.newauto = function (context) {
            $('input.autocomplete:not(.autocomplete-processed)', context).each(function () {

                var ac = $(this);
                var text_id = this.id.substr(0, this.id.length - 13);

                var input = $('#'+text_id);

                var ac_url = ac.attr("value");

                var select = $('#'+text_id+'-autocomplete-select');

                ac.width("150px");
                ac.removeAttr("disabled");

                console.log(ac.attr("id")+":"+ac_url);

                ac.select2({
                        placeholder: "Search for a movie",
                        minimumInputLength: 1,
                        allowClear: true,
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

                                return {results: items };
                            }
                            //formatResult: drupalformatresult,
                            //formatSelection: drupalFormatSelection
                        }
                });

            });

    };
})(jq180);