<?php
/**
 * @file
 * missionsocial_member_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function missionsocial_member_news_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'member_news_block';
  $context->description = 'Shows a block on a member page for news';
  $context->tag = 'features';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'member' => 'member',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-member_news-block' => array(
          'module' => 'views',
          'delta' => 'member_news-block',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shows a block on a member page for news');
  t('features');
  $export['member_news_block'] = $context;

  return $export;
}
