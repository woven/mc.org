<?php

/**
 * @file
 * GeoRSS-formatted coordinates field handler.
 */

class views_rss_georss_handler_field_coordinates extends location_views_handler_field_coordinates {

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['style']['#options']['georss_point'] = t('GeoRSS point');
  }

  function render($values) {
    if ($this->options['style'] == 'georss_point') {
      return $values->{$this->field_alias} . ' ' . $values->{$this->aliases['longitude']};
    }
    return parent::render($values);
  }
}
