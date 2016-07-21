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
  $ds_view_mode->view_mode = 'faculty_leadership';
  $ds_view_mode->label = 'Faculty Leadership';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['faculty_leadership'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'faculty_one';
  $ds_view_mode->label = 'Faculty One';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['faculty_one'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'faculty_teaching_programs';
  $ds_view_mode->label = 'Faculty Teaching Programs';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['faculty_teaching_programs'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'faculty_two';
  $ds_view_mode->label = 'Faculty Two';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['faculty_two'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'field_program_faculty';
  $ds_view_mode->label = 'Program Faculty block';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['field_program_faculty'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'field_program_who_should_attend';
  $ds_view_mode->label = 'Program Who Should Attend';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['field_program_who_should_attend'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'guest_speakers_advisors';
  $ds_view_mode->label = 'Guest Speakers and Advisors';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['guest_speakers_advisors'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'main_list';
  $ds_view_mode->label = 'Main list';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['main_list'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'program_contact';
  $ds_view_mode->label = 'Program Contact';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['program_contact'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'program_explore_other';
  $ds_view_mode->label = 'Explore Other Programs';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['program_explore_other'] = $ds_view_mode;

  return $export;
}
