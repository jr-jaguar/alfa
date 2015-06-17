<?php
function sub_bartik_select($variables) {
  $element = $variables ['element'];
  element_set_attributes($element, array('id', 'name', 'size'));
  _form_set_class($element, array('form-select-jr'));

  return '<select' . drupal_attributes($element ['#attributes']) . '>' . form_select_options($element) . '</select>';
}