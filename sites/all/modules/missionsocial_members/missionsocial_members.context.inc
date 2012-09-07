<?php
/**
 * @file
 * missionsocial_members.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function missionsocial_members_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'members-node';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'member' => 'member',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'members',
  );
  $context->condition_mode = 0;
  $export['members-node'] = $context;

  return $export;
}
