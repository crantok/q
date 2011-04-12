<?php

/**
 * Implementation of hook_input_formats().
 */
function ecobee_feature_wysiwyg_input_formats() {
  $input_formats = array();

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'Filtered HTML';
  $input_format->roles = array(
    1 => 'anonymous user',
    2 => 'authenticated user',
  );
  $input_format->cache = TRUE;
  $input_format->settings = array(
    // Settings for: filter module
    'filter' => array(
      // Filter HTML tags
      'filter_html' => 1,
      // Allowed HTML tags
      'allowed_html' => '<a> <em> <strong> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd>',
      // Display HTML help
      'filter_html_help' => 1,
      // Spam link deterrent
      'filter_html_nofollow' => FALSE,
    ),
  );
  $input_format->filters = array(
    'filter' => array(
      // Delta => Weight for: URL filter
      '2' => '0',
      // Delta => Weight for: HTML filter
      '0' => '1',
      // Delta => Weight for: Line break converter
      '1' => '2',
      // Delta => Weight for: HTML corrector
      '3' => '10',
    ),
  );
  $input_format->machine = 'filtered_html';
  $input_formats['filtered_html'] = $input_format;

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'Full HTML';
  $input_format->roles = array();
  $input_format->cache = TRUE;
  $input_format->settings = array(
    // Settings for: filter module
    'filter' => array(
      // Maximum link text length
      'filter_url_length' => '72',
    ),
  );
  $input_format->filters = array(
    'filter' => array(
      // Delta => Weight for: URL filter
      '2' => '0',
      // Delta => Weight for: Line break converter
      '1' => '1',
      // Delta => Weight for: HTML corrector
      '3' => '10',
    ),
  );
  $input_format->machine = 'full_html';
  $input_formats['full_html'] = $input_format;

  return $input_formats;

}
