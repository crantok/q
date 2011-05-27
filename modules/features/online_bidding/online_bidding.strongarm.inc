<?php

/**
 * Implementation of hook_strongarm().
 */
function online_bidding_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_auction';
  $strongarm->value = 0;

  $export['comment_anonymous_auction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_auction_lot';
  $strongarm->value = '0';

  $export['comment_anonymous_auction_lot'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_auction';
  $strongarm->value = '0';

  $export['comment_auction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_auction_lot';
  $strongarm->value = '0';

  $export['comment_auction_lot'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_auction';
  $strongarm->value = '3';

  $export['comment_controls_auction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_auction_lot';
  $strongarm->value = '3';

  $export['comment_controls_auction_lot'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_auction';
  $strongarm->value = '4';

  $export['comment_default_mode_auction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_auction_lot';
  $strongarm->value = '4';

  $export['comment_default_mode_auction_lot'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_auction';
  $strongarm->value = '1';

  $export['comment_default_order_auction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_auction_lot';
  $strongarm->value = '1';

  $export['comment_default_order_auction_lot'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_auction';
  $strongarm->value = '50';

  $export['comment_default_per_page_auction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_auction_lot';
  $strongarm->value = '50';

  $export['comment_default_per_page_auction_lot'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_auction';
  $strongarm->value = '0';

  $export['comment_form_location_auction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_auction_lot';
  $strongarm->value = '0';

  $export['comment_form_location_auction_lot'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_auction';
  $strongarm->value = '1';

  $export['comment_preview_auction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_auction_lot';
  $strongarm->value = '1';

  $export['comment_preview_auction_lot'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_auction';
  $strongarm->value = '1';

  $export['comment_subject_field_auction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_auction_lot';
  $strongarm->value = '1';

  $export['comment_subject_field_auction_lot'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_auction';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '3',
    'author' => '4',
    'options' => '1',
    'comment_settings' => '6',
    'menu' => '2',
    'path' => '5',
    'nodewords' => '7',
  );

  $export['content_extra_weights_auction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_auction_lot';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '-2',
    'author' => '-1',
    'options' => '0',
    'comment_settings' => '1',
    'menu' => '-4',
    'path' => '2',
    'nodewords' => '-3',
  );

  $export['content_extra_weights_auction_lot'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_auction';
  $strongarm->value = array(
    0 => 'revision',
  );

  $export['node_options_auction'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_auction_lot';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_auction_lot'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_auction_lot_pattern';
  $strongarm->value = 'lot/[nid]';

  $export['pathauto_node_auction_lot_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = '';

  $export['pathauto_node_pattern'] = $strongarm;
  return $export;
}
