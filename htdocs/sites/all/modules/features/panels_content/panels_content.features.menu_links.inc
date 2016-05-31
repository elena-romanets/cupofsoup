<?php
/**
 * @file
 * panels_content.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function panels_content_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_cup-a-soup-systemen:systemen.
  $menu_links['main-menu_cup-a-soup-systemen:systemen'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'systemen',
    'router_path' => 'systemen',
    'link_title' => 'CUP-A-SOUP SYSTEMEN',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_cup-a-soup-systemen:systemen',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_klantenservice:taxonomy/term/9.
  $menu_links['main-menu_klantenservice:taxonomy/term/9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/9',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'KLANTENSERVICE',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_klantenservice:taxonomy/term/9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_product-assortiment:product-assortiment.
  $menu_links['main-menu_product-assortiment:product-assortiment'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'product-assortiment',
    'router_path' => 'product-assortiment',
    'link_title' => 'PRODUCT ASSORTIMENT',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_product-assortiment:product-assortiment',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('CUP-A-SOUP SYSTEMEN');
  t('KLANTENSERVICE');
  t('PRODUCT ASSORTIMENT');

  return $menu_links;
}
