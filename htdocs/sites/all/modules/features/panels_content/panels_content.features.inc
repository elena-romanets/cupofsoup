<?php
/**
 * @file
 * panels_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panels_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function panels_content_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function panels_content_image_default_styles() {
  $styles = array();

  // Exported image style: home_product_image.
  $styles['home_product_image'] = array(
    'label' => 'Home product image',
    'effects' => array(
      1 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 130,
          'height' => 210,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: systemen_overview.
  $styles['systemen_overview'] = array(
    'label' => 'Systemen image',
    'effects' => array(
      3 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 200,
          'height' => 210,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
