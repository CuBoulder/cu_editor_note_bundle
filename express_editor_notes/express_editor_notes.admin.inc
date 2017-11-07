<?php

/**
 * Implements hook_form().
 *
 * Admin Notes config form.
 */
function express_editor_notes_advanced_config_form($form, $form_state) {
  $form = array();
  $form['express_editor_notes_title'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('express_editor_notes_title', ''),
    '#title' => 'Editor Notes Label',
    '#description' => 'The displayed label. Defaults to "Editor Notes"',
  );
  $form['express_editor_notes_link_display'] = array(
    '#type' => 'radios',
    '#options' => array(
      '0' => 'Display "Add/View" link with number of notes',
      '1' => 'Link Editor Notes label'
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('express_editor_notes_link_display', '0'),
    '#title' => 'Editor Notes Link Display',
    '#description' => 'Choose how the link to expand/show the notes and note form should display',
  );
  $form['express_editor_notes_meta_display'] = array(
    '#type' => 'radios',
    '#options' => array(
      '0' => 'Display Note Metadata',
      '1' => 'Hide Note Metadata'
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('express_editor_notes_meta_display', '0'),
    '#title' => 'Editor Notes Metadata Display',
    '#description' => 'Display/Hide Note Metadata (author, date/time, edit link)',
  );
  $form['express_editor_notes_form_disable'] = array(
    '#type' => 'radios',
    '#options' => array(
      '0' => 'Enable',
      '1' => 'Disable'
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('express_editor_notes_form_disable', '0'),
    '#title' => 'Editor Notes Form Display',
    '#description' => 'Disable the Add Note form',
  );
  // Let system_settings_form_submit run first to variable_set vars.
  $form = system_settings_form($form);
  $form['#submit'][] = 'express_editor_notes_title_submit';
  return $form;
}

/**
 * submit function for express_editor_notes_config_form().
 */
function express_editor_notes_title_submit() {
  $title = variable_get('express_editor_notes_title', NULL);
  if ($title == '') {
    variable_del('express_editor_notes_title');
  }
}

function express_editor_notes_config_form($form, $form_state) {
  $form = array();
  $form['express_editor_notes_disable'] = array(
    '#type' => 'radios',
    '#options' => array(
      '0' => 'Enable',
      '1' => 'Disable'
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('express_editor_notes_disable', '0'),
    '#title' => 'Editor Notes Display',
    '#description' => 'Disable Editor Notes',
  );
  // Let system_settings_form_submit run first to variable_set vars.
  $form = system_settings_form($form);
  return $form;
}
