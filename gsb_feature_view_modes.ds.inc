<?php
/**
 * @file
 * gsb_feature_view_modes.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function gsb_feature_view_modes_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'compact';
  $ds_view_mode->label = 'Compact';
  $ds_view_mode->entities = array(
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'node' => 'node',
  );
  $export['compact'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'expanded';
  $ds_view_mode->label = 'Expanded';
  $ds_view_mode->entities = array(
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'node' => 'node',
  );
  $export['expanded'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'main_list';
  $ds_view_mode->label = 'Main list';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['main_list'] = $ds_view_mode;

  return $export;
}
