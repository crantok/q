<?php

/**
 * Implementation of hook_input_formats().
 */
function ecobee_feature_wysiwyg_input_formats() {
  $input_formats = array();

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'Full HTML';
  $input_format->roles = array(
    1 => 'anonymous user',
    2 => 'authenticated user',
    5 => 'Editor',
    3 => 'SEO guy',
  );
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
    'imagebrowser' => array(
      // Delta => Weight for: Image Browser Images
      '0' => '10',
    ),
  );
  $input_format->machine = 'full_html';
  $input_formats['full_html'] = $input_format;

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
      'filter_html' => 1,
      'allowed_html' => '<a> <em> <strong> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd>',
      'filter_html_help' => 1,
      'filter_html_nofollow' => FALSE,
    ),
  );
  $input_format->filters = array(
    'filter' => array(
      '2' => '0',
      '0' => '1',
      '1' => '2',
      '3' => '10',
    ),
  );
  $input_format->machine = 'filtered_html';
  $input_formats['filtered_html'] = $input_format;

  return $input_formats;

}
