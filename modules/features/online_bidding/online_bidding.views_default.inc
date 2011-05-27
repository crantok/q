<?php

/**
 * Implementation of hook_views_default_views().
 */
function online_bidding_views_default_views() {
  $views = array();

  // Exported view: all_auctions
  $view = new view;
  $view->name = 'all_auctions';
  $view->description = 'See all auctions - e.g. to cut and paste content';
  $view->tag = 'auctions';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'All auctions';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => 5,
    3 => 3,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_auction_end_time_value' => 'field_auction_end_time_value',
    'field_auction_catalogue_fid' => 'field_auction_catalogue_fid',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'field_auction_end_time_value' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'field_auction_catalogue_fid' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Number';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: End time (field_auction_end_time) */
  $handler->display->display_options['fields']['field_auction_end_time_value']['id'] = 'field_auction_end_time_value';
  $handler->display->display_options['fields']['field_auction_end_time_value']['table'] = 'node_data_field_auction_end_time';
  $handler->display->display_options['fields']['field_auction_end_time_value']['field'] = 'field_auction_end_time_value';
  $handler->display->display_options['fields']['field_auction_end_time_value']['label'] = 'End time';
  $handler->display->display_options['fields']['field_auction_end_time_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_auction_end_time_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_auction_end_time_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_auction_end_time_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_auction_end_time_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_auction_end_time_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_auction_end_time_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_auction_end_time_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_auction_end_time_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_auction_end_time_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_auction_end_time_value']['link_to_node'] = 0;
  /* Field: Content: Catalogue (field_auction_catalogue) */
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['id'] = 'field_auction_catalogue_fid';
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['table'] = 'node_data_field_auction_catalogue';
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['field'] = 'field_auction_catalogue_fid';
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['label'] = 'Catalogue';
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['link_to_node'] = 0;
  /* Field: Node: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Published?';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'auction' => 'auction',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'all-auctions';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All auctions';
  $handler->display->display_options['menu']['description'] = 'See all auctions, past and future';
  $handler->display->display_options['menu']['weight'] = '0';
  $translatables['all_auctions'] = array(
    t('Defaults'),
    t('All auctions'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Number'),
    t('End time'),
    t('Catalogue'),
    t('Published?'),
    t('Page'),
  );

  $views[$view->name] = $view;

  // Exported view: auction_lots
  $view = new view;
  $view->name = 'auction_lots';
  $view->description = 'Lot from one auction';
  $view->tag = 'lots';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear search';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sort By';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Lots per page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '25, 100, 400, 1600';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_lot_description_value' => 'field_lot_description_value',
    'field_lot_price_value' => 'field_lot_price_value',
    'field_lot_category_value' => 'field_lot_category_value',
    'field_lot_auction_nid' => 'field_lot_auction_nid',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'field_lot_description_value' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'field_lot_price_value' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'field_lot_category_value' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'field_lot_auction_nid' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty auction lots search';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No auction lots were found for your search.<br/>
Tips for searching:<ul>
<li>Check the spelling of your keywords.</li>
<li>Try using fewer keywords.</li>
<li>Try starting with one keyword and narrowing your search by only adding one keyword at a time.</li>
</ul>
<br/><strong>NOTE: If you have not used any search criteria at all then you may be trying to search for lots in the wrong auction.</strong>';
  /* Relationship: Content: Auction (field_lot_auction) */
  $handler->display->display_options['relationships']['field_lot_auction_nid']['id'] = 'field_lot_auction_nid';
  $handler->display->display_options['relationships']['field_lot_auction_nid']['table'] = 'node_data_field_lot_auction';
  $handler->display->display_options['relationships']['field_lot_auction_nid']['field'] = 'field_lot_auction_nid';
  $handler->display->display_options['relationships']['field_lot_auction_nid']['required'] = 0;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'No.';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Description (field_lot_description) */
  $handler->display->display_options['fields']['field_lot_description_value']['id'] = 'field_lot_description_value';
  $handler->display->display_options['fields']['field_lot_description_value']['table'] = 'node_data_field_lot_description';
  $handler->display->display_options['fields']['field_lot_description_value']['field'] = 'field_lot_description_value';
  $handler->display->display_options['fields']['field_lot_description_value']['label'] = 'Description';
  $handler->display->display_options['fields']['field_lot_description_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lot_description_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lot_description_value']['alter']['path'] = 'auction/!1/bid/[nid]';
  $handler->display->display_options['fields']['field_lot_description_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lot_description_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lot_description_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lot_description_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lot_description_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lot_description_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lot_description_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lot_description_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lot_description_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lot_description_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lot_description_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_lot_description_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lot_description_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lot_description_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lot_description_value']['link_to_node'] = 1;
  /* Field: Content: Price (field_lot_price) */
  $handler->display->display_options['fields']['field_lot_price_value']['id'] = 'field_lot_price_value';
  $handler->display->display_options['fields']['field_lot_price_value']['table'] = 'node_data_field_lot_price';
  $handler->display->display_options['fields']['field_lot_price_value']['field'] = 'field_lot_price_value';
  $handler->display->display_options['fields']['field_lot_price_value']['label'] = 'Price';
  $handler->display->display_options['fields']['field_lot_price_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lot_price_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lot_price_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lot_price_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lot_price_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lot_price_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lot_price_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lot_price_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lot_price_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lot_price_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lot_price_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_lot_price_value']['format'] = 'us_0';
  /* Field: Content: Categories (field_lot_category) */
  $handler->display->display_options['fields']['field_lot_category_value']['id'] = 'field_lot_category_value';
  $handler->display->display_options['fields']['field_lot_category_value']['table'] = 'node_data_field_lot_category';
  $handler->display->display_options['fields']['field_lot_category_value']['field'] = 'field_lot_category_value';
  $handler->display->display_options['fields']['field_lot_category_value']['label'] = 'Categories';
  $handler->display->display_options['fields']['field_lot_category_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lot_category_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lot_category_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lot_category_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lot_category_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lot_category_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lot_category_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lot_category_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lot_category_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lot_category_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lot_category_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_lot_category_value']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_lot_category_value']['multiple']['multiple_reversed'] = 0;
  /* Field: Content: Auction (field_lot_auction) */
  $handler->display->display_options['fields']['field_lot_auction_nid']['id'] = 'field_lot_auction_nid';
  $handler->display->display_options['fields']['field_lot_auction_nid']['table'] = 'node_data_field_lot_auction';
  $handler->display->display_options['fields']['field_lot_auction_nid']['field'] = 'field_lot_auction_nid';
  $handler->display->display_options['fields']['field_lot_auction_nid']['label'] = 'Auction';
  $handler->display->display_options['fields']['field_lot_auction_nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lot_auction_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lot_auction_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lot_auction_nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lot_auction_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lot_auction_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lot_auction_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lot_auction_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lot_auction_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lot_auction_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lot_auction_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lot_auction_nid']['link_to_node'] = 0;
  /* Argument: Node: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_lot_auction_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['title'] = 'Search for lots in auction %1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['validate_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'auction' => 'auction',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = 1;
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter: Node: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Specific lot number:';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['optional'] = 1;
  $handler->display->display_options['filters']['title']['case'] = 0;
  /* Filter: Content: Concatenation (field_lot_concatenation) */
  $handler->display->display_options['filters']['field_lot_concatenation_value']['id'] = 'field_lot_concatenation_value';
  $handler->display->display_options['filters']['field_lot_concatenation_value']['table'] = 'node_data_field_lot_concatenation';
  $handler->display->display_options['filters']['field_lot_concatenation_value']['field'] = 'field_lot_concatenation_value';
  $handler->display->display_options['filters']['field_lot_concatenation_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_lot_concatenation_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lot_concatenation_value']['expose']['operator'] = 'field_lot_concatenation_value_op';
  $handler->display->display_options['filters']['field_lot_concatenation_value']['expose']['label'] = 'Keywords:';
  $handler->display->display_options['filters']['field_lot_concatenation_value']['expose']['identifier'] = 'field_lot_concatenation_value';
  $handler->display->display_options['filters']['field_lot_concatenation_value']['expose']['optional'] = 1;
  $handler->display->display_options['filters']['field_lot_concatenation_value']['case'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'auction_lot' => 'auction_lot',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search auction lots';
  $handler->display->display_options['path'] = 'auction/%/search-lots';
  $translatables['auction_lots'] = array(
    t('Defaults'),
    t('more'),
    t('Search'),
    t('Clear search'),
    t('Sort By'),
    t('Asc'),
    t('Desc'),
    t('Lots per page'),
    t('- All -'),
    t('Offset'),
    t('Empty auction lots search'),
    t('No auction lots were found for your search.<br/>
Tips for searching:<ul>
<li>Check the spelling of your keywords.</li>
<li>Try using fewer keywords.</li>
<li>Try starting with one keyword and narrowing your search by only adding one keyword at a time.</li>
</ul>
<br/><strong>NOTE: If you have not used any search criteria at all then you may be trying to search for lots in the wrong auction.</strong>'),
    t('Auction'),
    t('Nid'),
    t('No.'),
    t('Description'),
    t('auction/!1/bid/[nid]'),
    t('Price'),
    t('Categories'),
    t('All'),
    t('Search for lots in auction %1'),
    t('Specific lot number:'),
    t('Keywords:'),
    t('Page'),
    t('Search auction lots'),
  );

  $views[$view->name] = $view;

  // Exported view: latest_auction
  $view = new view;
  $view->name = 'latest_auction';
  $view->description = 'Show the most recently created auctio node';
  $view->tag = 'auctions';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Current auction';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['build_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 1;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: End time (field_auction_end_time) */
  $handler->display->display_options['fields']['field_auction_end_time_value']['id'] = 'field_auction_end_time_value';
  $handler->display->display_options['fields']['field_auction_end_time_value']['table'] = 'node_data_field_auction_end_time';
  $handler->display->display_options['fields']['field_auction_end_time_value']['field'] = 'field_auction_end_time_value';
  $handler->display->display_options['fields']['field_auction_end_time_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_auction_end_time_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_auction_end_time_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_auction_end_time_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_auction_end_time_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_auction_end_time_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_auction_end_time_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_auction_end_time_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_auction_end_time_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_auction_end_time_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_auction_end_time_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_auction_end_time_value']['label_type'] = 'none';
  /* Field: Content: Description (field_body) */
  $handler->display->display_options['fields']['field_body_value']['id'] = 'field_body_value';
  $handler->display->display_options['fields']['field_body_value']['table'] = 'node_data_field_body';
  $handler->display->display_options['fields']['field_body_value']['field'] = 'field_body_value';
  $handler->display->display_options['fields']['field_body_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_body_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_body_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_body_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_body_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_body_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_body_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_body_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_body_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_body_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_body_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_body_value']['label_type'] = 'none';
  /* Field: Content: Catalogue (field_auction_catalogue) */
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['id'] = 'field_auction_catalogue_fid';
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['table'] = 'node_data_field_auction_catalogue';
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['field'] = 'field_auction_catalogue_fid';
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['label'] = 'Catalogue';
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_auction_catalogue_fid']['link_to_node'] = 0;
  /* Sort criterion: Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'auction' => 'auction',
  );
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'current-auction';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Current auction';
  $handler->display->display_options['menu']['description'] = 'Download catclogue for our current auction';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $translatables['latest_auction'] = array(
    t('Defaults'),
    t('Current auction'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<h2>[title]</h2>'),
    t('Catalogue'),
    t('Page'),
  );

  $views[$view->name] = $view;

  return $views;
}
