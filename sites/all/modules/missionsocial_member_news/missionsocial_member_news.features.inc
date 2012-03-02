<?php
/**
 * @file
 * missionsocial_member_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function missionsocial_member_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function missionsocial_member_news_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function missionsocial_member_news_node_info() {
  $items = array(
    'member_news' => array(
      'name' => t('Member News'),
      'base' => 'node_content',
      'description' => t('News from a member organization.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
