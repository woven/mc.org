(function ($) {

Drupal.cck_manage_inactive_fields = Drupal.cck_manage_inactive_fields || {};

Drupal.cck_manage_inactive_fields_toggle = function() {
  
}

Drupal.behaviors.cck_manage_inactive_fields = function() {
  var table = $('.cck-manage-inactive-fields-tableselect');

  var firedAll = false;
  var selectAll = $('<input type="checkbox" />').change(function() {
    firedAll = true;
    // Toggle individual checkboxes
    if (selectAll.is(':checked')) {
      table.find('.field-selector:not(.select-all) :checkbox:not(:checked)').attr('checked', 'checked').change();
    }
    else {
      table.find('.field-selector:not(.select-all) :checkbox:checked').removeAttr('checked').change();
    }
    firedAll = false;
  });
  table.find('.field-selector.select-all')
    .append($('<div class="form-item" />').append(selectAll))
  .end()

  .find('tbody tr').each(function() {
    var self = $(this);
    var checkbox = self.find('td.field-selector :checkbox');
    var fired = false;
    checkbox.click(function(event) {
      fired = true;
    });
    self.click(function(event) {
      if (!fired) {
        if (checkbox.is(':checked')) {
          checkbox.removeAttr('checked');
        }
        else {
          checkbox.attr('checked', 'checked');
        }
        checkbox.change();
      }
      else {
        fired = false;
      }
    });
    checkbox.change(function(event) {
      if (checkbox.is(':checked')) {
        self.addClass('selected');
      }
      else {
        self.removeClass('selected');
      }

      if (!firedAll) {
        // Toggle select-all
        selectAll.attr('checked', 'checked');
        table.find('.field-selector:not(.select-all) :checkbox:not(:checked):first').each(function() {
          selectAll.removeAttr('checked');
        });
      }
    });
  });
}

})(jQuery);
