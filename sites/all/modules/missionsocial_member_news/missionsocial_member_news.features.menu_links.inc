<?php
/**
 * @file
 * missionsocial_member_news.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function missionsocial_member_news_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-member-news-link:node/add/member-news
  $menu_links['menu-member-news-link:node/add/member-news'] = array(
    'menu_name' => 'menu-member-news-link',
    'link_path' => 'node/add/member-news',
    'router_path' => 'node/add/member-news',
    'link_title' => 'Add a news item',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add a news item');


  return $menu_links;
}
