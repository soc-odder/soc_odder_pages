<?php
/**
 * @file
 * soc_odder_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function soc_odder_pages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function soc_odder_pages_node_info() {
  $items = array(
    'soc_basic_page' => array(
      'name' => t('Side'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
