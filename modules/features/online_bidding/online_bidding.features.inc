<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function online_bidding_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function online_bidding_imagecache_default_presets() {
  $items = array(
    '200x200' => array(
      'presetname' => '200x200',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '200',
            'height' => '200',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function online_bidding_node_info() {
  $items = array(
    'auction' => array(
      'name' => t('Auction'),
      'module' => 'features',
      'description' => t('This is a description of an auction and an associated PDF catalogue'),
      'has_title' => '1',
      'title_label' => t('Auction number'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => t('This form allows you to create a new auction. You can specify the end time, attach the PDF catalogue and enter a description if you wish'),
    ),
    'auction_lot' => array(
      'name' => t('Auction lot'),
      'module' => 'features',
      'description' => t('An a single item for sale (or a set to be sold together) in an auction.'),
      'has_title' => '1',
      'title_label' => t('Number'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function online_bidding_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
