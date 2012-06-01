<?php
/**
 * @file
 * Defines all forms
 */

/**
 * Implements hook_form().
 */
function dcv_database_form($form, &$form_state) {

  $form['name'] = array(
    '#type' => 'textfield',
    '#title' => t('Name'),
    '#description' => t('Your full name'),
    //'#default_value' => variable_get('dcv_data_name', ''),
    '#size' => 20,
    '#maxlength' => 40,
    //'#required' => TRUE,
  );

  $form['ice_cream'] = array(
    '#type' => 'select',
    '#title' => t('Ice cream'),
    '#options' => array(
      'strawberry',
      'banana',
      'chocolate',
      'cherry',
      'vanilla',
    ),
    //'#default_value' => variable_get('dcv_form_enable_feature', 0),
    '#description' => t('Choose your flavor'),
   );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Add to db',
  );

  return $form;
}

/**
 * Submit callback for settings form
 */
function dcv_database_form_submit($form, &$form_state) {
  // Save the values.
  // variable_set('dcv_form_name', $form_state['values']['name']);
  // variable_set('dcv_form_enable_feature', $form_state['values']['feature_enable']);

  // Inform the user about this.
  drupal_set_message(t('Your form has been saved.'));
}
