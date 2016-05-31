<?php
/**
 * @file
 * panels_content.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function panels_content_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'product_assortiment';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Product assortiment';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Classic';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_product_assortiment_image' => 'field_product_assortiment_image',
    'title' => 'title',
    'field_product_assortiment_link' => 'field_product_assortiment_link',
    'field_product_assortiment_amount' => 'field_product_assortiment_amount',
    'field_product_assortiment_price' => 'field_product_assortiment_price',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_product_assortiment_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_product_assortiment_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_product_assortiment_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_product_assortiment_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'product_category' => 'product_category',
    'product_assortiment_category' => 'product_assortiment_category',
    'tags' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Popup content */
  $handler->display->display_options['fields']['field_popup_content']['id'] = 'field_popup_content';
  $handler->display->display_options['fields']['field_popup_content']['table'] = 'field_data_field_popup_content';
  $handler->display->display_options['fields']['field_popup_content']['field'] = 'field_popup_content';
  $handler->display->display_options['fields']['field_popup_content']['label'] = '';
  $handler->display->display_options['fields']['field_popup_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_popup_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popup_content']['element_default_classes'] = FALSE;
  /* Field: Content: Product assortiment image */
  $handler->display->display_options['fields']['field_product_assortiment_image']['id'] = 'field_product_assortiment_image';
  $handler->display->display_options['fields']['field_product_assortiment_image']['table'] = 'field_data_field_product_assortiment_image';
  $handler->display->display_options['fields']['field_product_assortiment_image']['field'] = 'field_product_assortiment_image';
  $handler->display->display_options['fields']['field_product_assortiment_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_assortiment_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_assortiment_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_assortiment_image']['element_class'] = 'prod-image';
  $handler->display->display_options['fields']['field_product_assortiment_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_assortiment_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'prod-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Product assortiment link */
  $handler->display->display_options['fields']['field_product_assortiment_link']['id'] = 'field_product_assortiment_link';
  $handler->display->display_options['fields']['field_product_assortiment_link']['table'] = 'field_data_field_product_assortiment_link';
  $handler->display->display_options['fields']['field_product_assortiment_link']['field'] = 'field_product_assortiment_link';
  $handler->display->display_options['fields']['field_product_assortiment_link']['label'] = 'OMSCHRIJVING';
  $handler->display->display_options['fields']['field_product_assortiment_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_product_assortiment_link']['alter']['text'] = '<div>
  <div class="product-assortiment-image">[field_product_assortiment_image]</div>
  <div class="pane-title sm-title">[title]</div>
  <div class="product-assortiment-link">[field_product_assortiment_link]</div>
  <div class="product-assortiment-popup hide"><span class="close-btn"></span>[field_popup_content]</div>
</div>';
  $handler->display->display_options['fields']['field_product_assortiment_link']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_assortiment_link']['element_class'] = 'prod-link';
  $handler->display->display_options['fields']['field_product_assortiment_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_product_assortiment_link']['type'] = 'link_title_plain';
  /* Field: Content: Product assortiment amount */
  $handler->display->display_options['fields']['field_product_assortiment_amount']['id'] = 'field_product_assortiment_amount';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['table'] = 'field_data_field_product_assortiment_amount';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['field'] = 'field_product_assortiment_amount';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['label'] = 'SACHETS';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['element_class'] = 'prod-amount';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_amount']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_amount']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Product assortiment price */
  $handler->display->display_options['fields']['field_product_assortiment_price']['id'] = 'field_product_assortiment_price';
  $handler->display->display_options['fields']['field_product_assortiment_price']['table'] = 'field_data_field_product_assortiment_price';
  $handler->display->display_options['fields']['field_product_assortiment_price']['field'] = 'field_product_assortiment_price';
  $handler->display->display_options['fields']['field_product_assortiment_price']['label'] = 'PRIJS';
  $handler->display->display_options['fields']['field_product_assortiment_price']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_product_assortiment_price']['alter']['text'] = '<div class="product-assortiment-price-value" data-price="[field_product_assortiment_price-value]">[field_product_assortiment_price]</div>';
  $handler->display->display_options['fields']['field_product_assortiment_price']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_assortiment_price']['element_class'] = 'prod-price';
  $handler->display->display_options['fields']['field_product_assortiment_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'AANTAL';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="form-placeholder total" data-id="[nid]"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'product_category' => 'product_category',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product_assortiment' => 'product_assortiment',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'product_assortiment_category';

  /* Display: Classic */
  $handler = $view->new_display('panel_pane', 'Classic', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:field_collection_item.host',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Term ID',
    ),
  );

  /* Display: DRINKBOUILLON */
  $handler = $view->new_display('panel_pane', 'DRINKBOUILLON', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'DRINKBOUILLON';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product_assortiment' => 'product_assortiment',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'product_assortiment_category';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:field_collection_item.host',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Term ID',
    ),
  );

  /* Display: POPULAIR */
  $handler = $view->new_display('panel_pane', 'POPULAIR', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'POPULAIR';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product_assortiment' => 'product_assortiment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Populair (field_populair) */
  $handler->display->display_options['filters']['field_populair_value']['id'] = 'field_populair_value';
  $handler->display->display_options['filters']['field_populair_value']['table'] = 'field_data_field_populair';
  $handler->display->display_options['filters']['field_populair_value']['field'] = 'field_populair_value';
  $handler->display->display_options['filters']['field_populair_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:field_collection_item.host',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Term ID',
    ),
  );

  /* Display: SELECTIE BOXEN */
  $handler = $view->new_display('panel_pane', 'SELECTIE BOXEN', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'SELECTIE BOXEN';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product_assortiment' => 'product_assortiment',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'product_assortiment_category';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:field_collection_item.host',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Term ID',
    ),
  );

  /* Display: SYSTEM - CLASIC */
  $handler = $view->new_display('panel_pane', 'SYSTEM - CLASIC', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CLASSIC';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: List of products (field_list_of_products) */
  $handler->display->display_options['relationships']['field_list_of_products_nid']['id'] = 'field_list_of_products_nid';
  $handler->display->display_options['relationships']['field_list_of_products_nid']['table'] = 'field_data_field_list_of_products';
  $handler->display->display_options['relationships']['field_list_of_products_nid']['field'] = 'field_list_of_products_nid';
  $handler->display->display_options['relationships']['field_list_of_products_nid']['label'] = 'nr';
  $handler->display->display_options['relationships']['field_list_of_products_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_list_of_products_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Popup content */
  $handler->display->display_options['fields']['field_popup_content']['id'] = 'field_popup_content';
  $handler->display->display_options['fields']['field_popup_content']['table'] = 'field_data_field_popup_content';
  $handler->display->display_options['fields']['field_popup_content']['field'] = 'field_popup_content';
  $handler->display->display_options['fields']['field_popup_content']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['field_popup_content']['label'] = '';
  $handler->display->display_options['fields']['field_popup_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_popup_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popup_content']['element_default_classes'] = FALSE;
  /* Field: Content: Product assortiment image */
  $handler->display->display_options['fields']['field_product_assortiment_image']['id'] = 'field_product_assortiment_image';
  $handler->display->display_options['fields']['field_product_assortiment_image']['table'] = 'field_data_field_product_assortiment_image';
  $handler->display->display_options['fields']['field_product_assortiment_image']['field'] = 'field_product_assortiment_image';
  $handler->display->display_options['fields']['field_product_assortiment_image']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['field_product_assortiment_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_assortiment_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_assortiment_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_assortiment_image']['element_class'] = 'prod-image';
  $handler->display->display_options['fields']['field_product_assortiment_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_assortiment_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'prod-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Product assortiment link */
  $handler->display->display_options['fields']['field_product_assortiment_link']['id'] = 'field_product_assortiment_link';
  $handler->display->display_options['fields']['field_product_assortiment_link']['table'] = 'field_data_field_product_assortiment_link';
  $handler->display->display_options['fields']['field_product_assortiment_link']['field'] = 'field_product_assortiment_link';
  $handler->display->display_options['fields']['field_product_assortiment_link']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['field_product_assortiment_link']['label'] = 'OMSCHRIJVING';
  $handler->display->display_options['fields']['field_product_assortiment_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_product_assortiment_link']['alter']['text'] = '<div>
  <div class="product-assortiment-image">[field_product_assortiment_image]</div>
  <div class="pane-title sm-title">[title]</div>
  <div class="product-assortiment-link">[field_product_assortiment_link]</div>
  <div class="product-assortiment-popup hide"><span class="close-btn"></span>[field_popup_content]</div>
</div>';
  $handler->display->display_options['fields']['field_product_assortiment_link']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_assortiment_link']['element_class'] = 'prod-link';
  $handler->display->display_options['fields']['field_product_assortiment_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_product_assortiment_link']['type'] = 'link_title_plain';
  /* Field: Content: Product assortiment amount */
  $handler->display->display_options['fields']['field_product_assortiment_amount']['id'] = 'field_product_assortiment_amount';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['table'] = 'field_data_field_product_assortiment_amount';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['field'] = 'field_product_assortiment_amount';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['label'] = 'SACHETS';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['element_class'] = 'prod-amount';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_amount']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_amount']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Product assortiment price */
  $handler->display->display_options['fields']['field_product_assortiment_price']['id'] = 'field_product_assortiment_price';
  $handler->display->display_options['fields']['field_product_assortiment_price']['table'] = 'field_data_field_product_assortiment_price';
  $handler->display->display_options['fields']['field_product_assortiment_price']['field'] = 'field_product_assortiment_price';
  $handler->display->display_options['fields']['field_product_assortiment_price']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['field_product_assortiment_price']['label'] = 'PRIJS';
  $handler->display->display_options['fields']['field_product_assortiment_price']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_product_assortiment_price']['alter']['text'] = '<div class="product-assortiment-price-value" data-price="[field_product_assortiment_price-value]">[field_product_assortiment_price]</div>';
  $handler->display->display_options['fields']['field_product_assortiment_price']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_assortiment_price']['element_class'] = 'prod-price';
  $handler->display->display_options['fields']['field_product_assortiment_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'AANTAL';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="form-placeholder total" data-id="[nid]"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'product_assortiment_category';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: SYSTEM - DRINKBOUILLON */
  $handler = $view->new_display('panel_pane', 'SYSTEM - DRINKBOUILLON', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'DRINKBOUILLON';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: List of products (field_list_of_products) */
  $handler->display->display_options['relationships']['field_list_of_products_nid']['id'] = 'field_list_of_products_nid';
  $handler->display->display_options['relationships']['field_list_of_products_nid']['table'] = 'field_data_field_list_of_products';
  $handler->display->display_options['relationships']['field_list_of_products_nid']['field'] = 'field_list_of_products_nid';
  $handler->display->display_options['relationships']['field_list_of_products_nid']['label'] = 'nr';
  $handler->display->display_options['relationships']['field_list_of_products_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_list_of_products_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Popup content */
  $handler->display->display_options['fields']['field_popup_content']['id'] = 'field_popup_content';
  $handler->display->display_options['fields']['field_popup_content']['table'] = 'field_data_field_popup_content';
  $handler->display->display_options['fields']['field_popup_content']['field'] = 'field_popup_content';
  $handler->display->display_options['fields']['field_popup_content']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['field_popup_content']['label'] = '';
  $handler->display->display_options['fields']['field_popup_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_popup_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popup_content']['element_default_classes'] = FALSE;
  /* Field: Content: Product assortiment image */
  $handler->display->display_options['fields']['field_product_assortiment_image']['id'] = 'field_product_assortiment_image';
  $handler->display->display_options['fields']['field_product_assortiment_image']['table'] = 'field_data_field_product_assortiment_image';
  $handler->display->display_options['fields']['field_product_assortiment_image']['field'] = 'field_product_assortiment_image';
  $handler->display->display_options['fields']['field_product_assortiment_image']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['field_product_assortiment_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_assortiment_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_assortiment_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_assortiment_image']['element_class'] = 'prod-image';
  $handler->display->display_options['fields']['field_product_assortiment_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_assortiment_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'prod-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Product assortiment link */
  $handler->display->display_options['fields']['field_product_assortiment_link']['id'] = 'field_product_assortiment_link';
  $handler->display->display_options['fields']['field_product_assortiment_link']['table'] = 'field_data_field_product_assortiment_link';
  $handler->display->display_options['fields']['field_product_assortiment_link']['field'] = 'field_product_assortiment_link';
  $handler->display->display_options['fields']['field_product_assortiment_link']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['field_product_assortiment_link']['label'] = 'OMSCHRIJVING';
  $handler->display->display_options['fields']['field_product_assortiment_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_product_assortiment_link']['alter']['text'] = '<div>
  <div class="product-assortiment-image">[field_product_assortiment_image]</div>
  <div class="pane-title sm-title">[title]</div>
  <div class="product-assortiment-link">[field_product_assortiment_link]</div>
  <div class="product-assortiment-popup hide"><span class="close-btn"></span>[field_popup_content]</div>
</div>';
  $handler->display->display_options['fields']['field_product_assortiment_link']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_assortiment_link']['element_class'] = 'prod-link';
  $handler->display->display_options['fields']['field_product_assortiment_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_product_assortiment_link']['type'] = 'link_title_plain';
  /* Field: Content: Product assortiment amount */
  $handler->display->display_options['fields']['field_product_assortiment_amount']['id'] = 'field_product_assortiment_amount';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['table'] = 'field_data_field_product_assortiment_amount';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['field'] = 'field_product_assortiment_amount';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['label'] = 'SACHETS';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['element_class'] = 'prod-amount';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_amount']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_amount']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Product assortiment price */
  $handler->display->display_options['fields']['field_product_assortiment_price']['id'] = 'field_product_assortiment_price';
  $handler->display->display_options['fields']['field_product_assortiment_price']['table'] = 'field_data_field_product_assortiment_price';
  $handler->display->display_options['fields']['field_product_assortiment_price']['field'] = 'field_product_assortiment_price';
  $handler->display->display_options['fields']['field_product_assortiment_price']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['field_product_assortiment_price']['label'] = 'PRIJS';
  $handler->display->display_options['fields']['field_product_assortiment_price']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_product_assortiment_price']['alter']['text'] = '<div class="product-assortiment-price-value" data-price="[field_product_assortiment_price-value]">[field_product_assortiment_price]</div>';
  $handler->display->display_options['fields']['field_product_assortiment_price']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_assortiment_price']['element_class'] = 'prod-price';
  $handler->display->display_options['fields']['field_product_assortiment_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'AANTAL';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="form-placeholder total" data-id="[nid]"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'product_assortiment_category';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: SYSTEM - POPULAIR */
  $handler = $view->new_display('panel_pane', 'SYSTEM - POPULAIR', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'POPULAIR';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: List of products (field_list_of_products) */
  $handler->display->display_options['relationships']['field_list_of_products_nid']['id'] = 'field_list_of_products_nid';
  $handler->display->display_options['relationships']['field_list_of_products_nid']['table'] = 'field_data_field_list_of_products';
  $handler->display->display_options['relationships']['field_list_of_products_nid']['field'] = 'field_list_of_products_nid';
  $handler->display->display_options['relationships']['field_list_of_products_nid']['label'] = 'nr';
  $handler->display->display_options['relationships']['field_list_of_products_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_list_of_products_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Popup content */
  $handler->display->display_options['fields']['field_popup_content']['id'] = 'field_popup_content';
  $handler->display->display_options['fields']['field_popup_content']['table'] = 'field_data_field_popup_content';
  $handler->display->display_options['fields']['field_popup_content']['field'] = 'field_popup_content';
  $handler->display->display_options['fields']['field_popup_content']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['field_popup_content']['label'] = '';
  $handler->display->display_options['fields']['field_popup_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_popup_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popup_content']['element_default_classes'] = FALSE;
  /* Field: Content: Product assortiment image */
  $handler->display->display_options['fields']['field_product_assortiment_image']['id'] = 'field_product_assortiment_image';
  $handler->display->display_options['fields']['field_product_assortiment_image']['table'] = 'field_data_field_product_assortiment_image';
  $handler->display->display_options['fields']['field_product_assortiment_image']['field'] = 'field_product_assortiment_image';
  $handler->display->display_options['fields']['field_product_assortiment_image']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['field_product_assortiment_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_assortiment_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_assortiment_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_assortiment_image']['element_class'] = 'prod-image';
  $handler->display->display_options['fields']['field_product_assortiment_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_assortiment_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'prod-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Product assortiment link */
  $handler->display->display_options['fields']['field_product_assortiment_link']['id'] = 'field_product_assortiment_link';
  $handler->display->display_options['fields']['field_product_assortiment_link']['table'] = 'field_data_field_product_assortiment_link';
  $handler->display->display_options['fields']['field_product_assortiment_link']['field'] = 'field_product_assortiment_link';
  $handler->display->display_options['fields']['field_product_assortiment_link']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['field_product_assortiment_link']['label'] = 'OMSCHRIJVING';
  $handler->display->display_options['fields']['field_product_assortiment_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_product_assortiment_link']['alter']['text'] = '<div>
  <div class="product-assortiment-image">[field_product_assortiment_image]</div>
  <div class="pane-title sm-title">[title]</div>
  <div class="product-assortiment-link">[field_product_assortiment_link]</div>
  <div class="product-assortiment-popup hide"><span class="close-btn"></span>[field_popup_content]</div>
</div>';
  $handler->display->display_options['fields']['field_product_assortiment_link']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_assortiment_link']['element_class'] = 'prod-link';
  $handler->display->display_options['fields']['field_product_assortiment_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_product_assortiment_link']['type'] = 'link_title_plain';
  /* Field: Content: Product assortiment amount */
  $handler->display->display_options['fields']['field_product_assortiment_amount']['id'] = 'field_product_assortiment_amount';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['table'] = 'field_data_field_product_assortiment_amount';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['field'] = 'field_product_assortiment_amount';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['label'] = 'SACHETS';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['element_class'] = 'prod-amount';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_amount']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_amount']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Product assortiment price */
  $handler->display->display_options['fields']['field_product_assortiment_price']['id'] = 'field_product_assortiment_price';
  $handler->display->display_options['fields']['field_product_assortiment_price']['table'] = 'field_data_field_product_assortiment_price';
  $handler->display->display_options['fields']['field_product_assortiment_price']['field'] = 'field_product_assortiment_price';
  $handler->display->display_options['fields']['field_product_assortiment_price']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['field_product_assortiment_price']['label'] = 'PRIJS';
  $handler->display->display_options['fields']['field_product_assortiment_price']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_product_assortiment_price']['alter']['text'] = '<div class="product-assortiment-price-value" data-price="[field_product_assortiment_price-value]">[field_product_assortiment_price]</div>';
  $handler->display->display_options['fields']['field_product_assortiment_price']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_assortiment_price']['element_class'] = 'prod-price';
  $handler->display->display_options['fields']['field_product_assortiment_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'AANTAL';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="form-placeholder total" data-id="[nid]"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Populair (field_populair) */
  $handler->display->display_options['filters']['field_populair_value']['id'] = 'field_populair_value';
  $handler->display->display_options['filters']['field_populair_value']['table'] = 'field_data_field_populair';
  $handler->display->display_options['filters']['field_populair_value']['field'] = 'field_populair_value';
  $handler->display->display_options['filters']['field_populair_value']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['filters']['field_populair_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: SYSTEM - SELECTIE BOXEN */
  $handler = $view->new_display('panel_pane', 'SYSTEM - SELECTIE BOXEN', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'SELECTIE BOXEN';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: List of products (field_list_of_products) */
  $handler->display->display_options['relationships']['field_list_of_products_nid']['id'] = 'field_list_of_products_nid';
  $handler->display->display_options['relationships']['field_list_of_products_nid']['table'] = 'field_data_field_list_of_products';
  $handler->display->display_options['relationships']['field_list_of_products_nid']['field'] = 'field_list_of_products_nid';
  $handler->display->display_options['relationships']['field_list_of_products_nid']['label'] = 'nr';
  $handler->display->display_options['relationships']['field_list_of_products_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_list_of_products_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Popup content */
  $handler->display->display_options['fields']['field_popup_content']['id'] = 'field_popup_content';
  $handler->display->display_options['fields']['field_popup_content']['table'] = 'field_data_field_popup_content';
  $handler->display->display_options['fields']['field_popup_content']['field'] = 'field_popup_content';
  $handler->display->display_options['fields']['field_popup_content']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['field_popup_content']['label'] = '';
  $handler->display->display_options['fields']['field_popup_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_popup_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_popup_content']['element_default_classes'] = FALSE;
  /* Field: Content: Product assortiment image */
  $handler->display->display_options['fields']['field_product_assortiment_image']['id'] = 'field_product_assortiment_image';
  $handler->display->display_options['fields']['field_product_assortiment_image']['table'] = 'field_data_field_product_assortiment_image';
  $handler->display->display_options['fields']['field_product_assortiment_image']['field'] = 'field_product_assortiment_image';
  $handler->display->display_options['fields']['field_product_assortiment_image']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['field_product_assortiment_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_assortiment_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_assortiment_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_assortiment_image']['element_class'] = 'prod-image';
  $handler->display->display_options['fields']['field_product_assortiment_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_assortiment_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'prod-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Product assortiment link */
  $handler->display->display_options['fields']['field_product_assortiment_link']['id'] = 'field_product_assortiment_link';
  $handler->display->display_options['fields']['field_product_assortiment_link']['table'] = 'field_data_field_product_assortiment_link';
  $handler->display->display_options['fields']['field_product_assortiment_link']['field'] = 'field_product_assortiment_link';
  $handler->display->display_options['fields']['field_product_assortiment_link']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['field_product_assortiment_link']['label'] = 'OMSCHRIJVING';
  $handler->display->display_options['fields']['field_product_assortiment_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_product_assortiment_link']['alter']['text'] = '<div>
  <div class="product-assortiment-image">[field_product_assortiment_image]</div>
  <div class="pane-title sm-title">[title]</div>
  <div class="product-assortiment-link">[field_product_assortiment_link]</div>
  <div class="product-assortiment-popup hide"><span class="close-btn"></span>[field_popup_content]</div>
</div>';
  $handler->display->display_options['fields']['field_product_assortiment_link']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_assortiment_link']['element_class'] = 'prod-link';
  $handler->display->display_options['fields']['field_product_assortiment_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_product_assortiment_link']['type'] = 'link_title_plain';
  /* Field: Content: Product assortiment amount */
  $handler->display->display_options['fields']['field_product_assortiment_amount']['id'] = 'field_product_assortiment_amount';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['table'] = 'field_data_field_product_assortiment_amount';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['field'] = 'field_product_assortiment_amount';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['label'] = 'SACHETS';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['element_class'] = 'prod-amount';
  $handler->display->display_options['fields']['field_product_assortiment_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_amount']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_amount']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Product assortiment price */
  $handler->display->display_options['fields']['field_product_assortiment_price']['id'] = 'field_product_assortiment_price';
  $handler->display->display_options['fields']['field_product_assortiment_price']['table'] = 'field_data_field_product_assortiment_price';
  $handler->display->display_options['fields']['field_product_assortiment_price']['field'] = 'field_product_assortiment_price';
  $handler->display->display_options['fields']['field_product_assortiment_price']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['fields']['field_product_assortiment_price']['label'] = 'PRIJS';
  $handler->display->display_options['fields']['field_product_assortiment_price']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_product_assortiment_price']['alter']['text'] = '<div class="product-assortiment-price-value" data-price="[field_product_assortiment_price-value]">[field_product_assortiment_price]</div>';
  $handler->display->display_options['fields']['field_product_assortiment_price']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_assortiment_price']['element_class'] = 'prod-price';
  $handler->display->display_options['fields']['field_product_assortiment_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_assortiment_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'AANTAL';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="form-placeholder total" data-id="[nid]"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_list_of_products_nid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'product_assortiment_category';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['product_assortiment'] = $view;

  $view = new view();
  $view->name = 'product_category';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Product category';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'tabs-items';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'product_category' => 'product_category',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_class'] = 'assortiment-link';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;

  /* Display: FAQ */
  $handler = $view->new_display('panel_pane', 'FAQ', 'panel_pane_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'faq' => 'faq',
  );
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['value']['value'] = '0';
  $export['product_category'] = $view;

  return $export;
}
