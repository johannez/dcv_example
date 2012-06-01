<?php
/**
 * @file
 * Defines all forms
 */

/**
 * Implements hook_form().
 */
function dcv_form_settings_form($form, &$form_state) {

  $form['name'] = array(
    '#type' => 'textfield',
    '#title' => t('Name'),
    '#description' => t('Your full name'),
    '#default_value' => variable_get('dcv_form_name', ''),
    '#size' => 20,
    '#maxlength' => 40,
    //'#required' => TRUE,
  );

  $form['feature_enable'] = array(
    '#type' => 'select',
    '#title' => t('Enable a feature'),
    '#options' => array(
      0 => t('No'),
      1 => t('Yes'),
    ),
    '#default_value' => variable_get('dcv_form_enable_feature', 0),
    '#description' => t('Choose your answer'),
   );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Save settings',
  );

  return $form;
}

/**
 *  Validation callback for settings form
 */
function dcv_form_settings_form_validate($form, &$form_state) {
  if ($form_state['values']['name'] == '') {
    form_set_error('name', t('You must select a name.'));
  }
}

/**
 * Submit callback for settings form
 */
function dcv_form_settings_form_submit($form, &$form_state) {
  // Save the values.
  variable_set('dcv_form_name', $form_state['values']['name']);
  variable_set('dcv_form_enable_feature', $form_state['values']['feature_enable']);

  // Inform the user about this.
  drupal_set_message(t('Your form has been saved.'));
}
