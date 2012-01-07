<?php
/**
 * @file
 * jvectormapdevlopment.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jvectormapdevlopment_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_dropdown_key';
  $strongarm->value = '#';
  $export['admin_menu_dropdown_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  return $export;
}
