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
  $view->name = 'faq';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'FAQ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'faq-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name_1',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'faq-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['required'] = TRUE;
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent_1']['id'] = 'parent_1';
  $handler->display->display_options['relationships']['parent_1']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent_1']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent_1']['relationship'] = 'parent';
  $handler->display->display_options['relationships']['parent_1']['label'] = 'GrandParent';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_class'] = 'faq-question';
  $handler->display->display_options['fields']['name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_type'] = 'span';
  $handler->display->display_options['fields']['description']['element_class'] = 'faq-answer';
  $handler->display->display_options['fields']['description']['element_label_type'] = '0';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['relationship'] = 'parent';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'parent_1';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'faq' => 'faq',
  );
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    4 => '4',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Term ID',
    ),
  );
  $export['faq'] = $view;

  $view = new view();
  $view->name = 'home_products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Home products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'product-items';
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Product image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_image']['element_class'] = 'product-img';
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => 'home_product_image',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="text">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'prod-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Product description */
  $handler->display->display_options['fields']['field_product_description']['id'] = 'field_product_description';
  $handler->display->display_options['fields']['field_product_description']['table'] = 'field_data_field_product_description';
  $handler->display->display_options['fields']['field_product_description']['field'] = 'field_product_description';
  $handler->display->display_options['fields']['field_product_description']['label'] = '';
  $handler->display->display_options['fields']['field_product_description']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_description']['element_class'] = 'details-txt';
  $handler->display->display_options['fields']['field_product_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_description']['element_default_classes'] = FALSE;
  /* Field: Content: Product button */
  $handler->display->display_options['fields']['field_product_button']['id'] = 'field_product_button';
  $handler->display->display_options['fields']['field_product_button']['table'] = 'field_data_field_product_button';
  $handler->display->display_options['fields']['field_product_button']['field'] = 'field_product_button';
  $handler->display->display_options['fields']['field_product_button']['label'] = '';
  $handler->display->display_options['fields']['field_product_button']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_product_button']['alter']['text'] = '<div class="button btn-more">
<a href="/product/[nid]">BESTELLEN</a>
</div>';
  $handler->display->display_options['fields']['field_product_button']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_button']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_button']['click_sort_column'] = 'url';
  /* Field: Content: Product info */
  $handler->display->display_options['fields']['field_product_info']['id'] = 'field_product_info';
  $handler->display->display_options['fields']['field_product_info']['table'] = 'field_data_field_product_info';
  $handler->display->display_options['fields']['field_product_info']['field'] = 'field_product_info';
  $handler->display->display_options['fields']['field_product_info']['label'] = '';
  $handler->display->display_options['fields']['field_product_info']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_product_info']['alter']['text'] = '<div class="product-info">
<a href="/node/[nid]">Meer info</a>
</div>';
  $handler->display->display_options['fields']['field_product_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_info']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_info']['click_sort_column'] = 'url';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');

  /* Display: Content pane owl */
  $handler = $view->new_display('panel_pane', 'Content pane owl', 'panel_pane_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'product-items product-items-owl';
  $export['home_products'] = $view;

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

  $view = new view();
  $view->name = 'systemen_details';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Systemen details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Blue section image */
  $handler->display->display_options['fields']['field_blue_section_image']['id'] = 'field_blue_section_image';
  $handler->display->display_options['fields']['field_blue_section_image']['table'] = 'field_data_field_blue_section_image';
  $handler->display->display_options['fields']['field_blue_section_image']['field'] = 'field_blue_section_image';
  $handler->display->display_options['fields']['field_blue_section_image']['label'] = '';
  $handler->display->display_options['fields']['field_blue_section_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_blue_section_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blue_section_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_blue_section_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Blue section text */
  $handler->display->display_options['fields']['field_blue_section_text']['id'] = 'field_blue_section_text';
  $handler->display->display_options['fields']['field_blue_section_text']['table'] = 'field_data_field_blue_section_text';
  $handler->display->display_options['fields']['field_blue_section_text']['field'] = 'field_blue_section_text';
  $handler->display->display_options['fields']['field_blue_section_text']['label'] = '';
  $handler->display->display_options['fields']['field_blue_section_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_blue_section_text']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="blue-section">
<div class="text">
[field_blue_section_text]
</div>
<div class="image">
[field_blue_section_image]
</div>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Content: Product systemen details */
  $handler->display->display_options['fields']['field_product_systemen_details']['id'] = 'field_product_systemen_details';
  $handler->display->display_options['fields']['field_product_systemen_details']['table'] = 'field_data_field_product_systemen_details';
  $handler->display->display_options['fields']['field_product_systemen_details']['field'] = 'field_product_systemen_details';
  $handler->display->display_options['fields']['field_product_systemen_details']['label'] = '';
  $handler->display->display_options['fields']['field_product_systemen_details']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_systemen_details']['element_default_classes'] = FALSE;
  /* Field: Content: Product systemen details video */
  $handler->display->display_options['fields']['field_product_systemen_details_v']['id'] = 'field_product_systemen_details_v';
  $handler->display->display_options['fields']['field_product_systemen_details_v']['table'] = 'field_data_field_product_systemen_details_v';
  $handler->display->display_options['fields']['field_product_systemen_details_v']['field'] = 'field_product_systemen_details_v';
  $handler->display->display_options['fields']['field_product_systemen_details_v']['label'] = '';
  $handler->display->display_options['fields']['field_product_systemen_details_v']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_systemen_details_v']['element_class'] = 'system-video';
  $handler->display->display_options['fields']['field_product_systemen_details_v']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_systemen_details_v']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_systemen_details_v']['click_sort_column'] = 'input';
  $handler->display->display_options['fields']['field_product_systemen_details_v']['settings'] = array(
    'youtube_size' => 'custom',
    'youtube_width' => '1080',
    'youtube_height' => '400',
    'youtube_autoplay' => 0,
    'youtube_loop' => 0,
    'youtube_showinfo' => 1,
    'youtube_controls' => 0,
    'youtube_autohide' => 0,
    'youtube_iv_load_policy' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="button">
<a href="/product/[nid]">BESTELLEN</a>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'top-95  bottom-120 center';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Systemen details */
  $handler = $view->new_display('panel_pane', 'Systemen details', 'panel_pane_1');
  $export['systemen_details'] = $view;

  $view = new view();
  $view->name = 'systemen_products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Systemen products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'product-items';
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Product color block */
  $handler->display->display_options['fields']['field_product_color_block']['id'] = 'field_product_color_block';
  $handler->display->display_options['fields']['field_product_color_block']['table'] = 'field_data_field_product_color_block';
  $handler->display->display_options['fields']['field_product_color_block']['field'] = 'field_product_color_block';
  $handler->display->display_options['fields']['field_product_color_block']['label'] = '';
  $handler->display->display_options['fields']['field_product_color_block']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_color_block']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="systemen [field_product_color_block]">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Product image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_image']['element_class'] = 'product-img';
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => 'systemen_overview',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class=product-text>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'title prod-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Product details description */
  $handler->display->display_options['fields']['field_product_details_descriptio']['id'] = 'field_product_details_descriptio';
  $handler->display->display_options['fields']['field_product_details_descriptio']['table'] = 'field_data_field_product_details_descriptio';
  $handler->display->display_options['fields']['field_product_details_descriptio']['field'] = 'field_product_details_descriptio';
  $handler->display->display_options['fields']['field_product_details_descriptio']['label'] = '';
  $handler->display->display_options['fields']['field_product_details_descriptio']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_details_descriptio']['element_class'] = 'product-details-desc product-txt';
  $handler->display->display_options['fields']['field_product_details_descriptio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_details_descriptio']['element_default_classes'] = FALSE;
  /* Field: Content: Product details text */
  $handler->display->display_options['fields']['field_product_details_text']['id'] = 'field_product_details_text';
  $handler->display->display_options['fields']['field_product_details_text']['table'] = 'field_data_field_product_details_text';
  $handler->display->display_options['fields']['field_product_details_text']['field'] = 'field_product_details_text';
  $handler->display->display_options['fields']['field_product_details_text']['label'] = '';
  $handler->display->display_options['fields']['field_product_details_text']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_product_details_text']['element_class'] = 'product-details-text product-txt';
  $handler->display->display_options['fields']['field_product_details_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_details_text']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="product-links">';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Field: Content: Product button */
  $handler->display->display_options['fields']['field_product_button']['id'] = 'field_product_button';
  $handler->display->display_options['fields']['field_product_button']['table'] = 'field_data_field_product_button';
  $handler->display->display_options['fields']['field_product_button']['field'] = 'field_product_button';
  $handler->display->display_options['fields']['field_product_button']['label'] = '';
  $handler->display->display_options['fields']['field_product_button']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_product_button']['alter']['text'] = '<div class="button btn-more">
<a href="/product/[nid]">BESTELLEN</a>
</div>';
  $handler->display->display_options['fields']['field_product_button']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_button']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_button']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_product_button']['type'] = 'link_title_plain';
  /* Field: Content: Product details info */
  $handler->display->display_options['fields']['field_product_details_info']['id'] = 'field_product_details_info';
  $handler->display->display_options['fields']['field_product_details_info']['table'] = 'field_data_field_product_details_info';
  $handler->display->display_options['fields']['field_product_details_info']['field'] = 'field_product_details_info';
  $handler->display->display_options['fields']['field_product_details_info']['label'] = '';
  $handler->display->display_options['fields']['field_product_details_info']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_product_details_info']['alter']['text'] = '<div class="product-details-info btn-more product-txt">
<a href="/node/[nid]">Product informatie</a>
</div>';
  $handler->display->display_options['fields']['field_product_details_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_details_info']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_product_details_info']['click_sort_column'] = 'url';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div></div></div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['systemen_products'] = $view;

  return $export;
}
