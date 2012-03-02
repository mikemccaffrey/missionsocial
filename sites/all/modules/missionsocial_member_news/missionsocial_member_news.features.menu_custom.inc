<?php
/**
 * @file
 * missionsocial_member_news.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function missionsocial_member_news_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-member-news-link
  $menus['menu-member-news-link'] = array(
    'menu_name' => 'menu-member-news-link',
    'title' => 'Member News Link',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Member News Link');


  return $menus;
}
