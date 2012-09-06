<?php
/**
 * @file
 * missionsocial_pages.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function missionsocial_pages_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|page|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function missionsocial_pages_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_page_image',
        1 => 'title',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_page_image' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|page|default'] = $ds_layout;

  return $export;
}
