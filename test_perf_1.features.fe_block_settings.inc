<?php
/**
 * @file
 * test_perf_1.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function test_perf_1_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-test_perf_1-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'test_perf_1-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -12,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-test_perf_1-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'test_perf_1-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
