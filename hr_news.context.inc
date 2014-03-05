<?php
/**
 * @file
 * hr_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hr_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hr_news_space';
  $context->description = 'News page per space';
  $context->tag = 'News';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*/news' => 'node/*/news',
        'node/*/news/*' => 'node/*/news/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-hr_news-list' => array(
          'module' => 'views',
          'delta' => '-exp-hr_news-list',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'current_search-hr_current_search' => array(
          'module' => 'current_search',
          'delta' => 'hr_current_search',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-ZXNTNWz3w05hh3aLGFw0ofPRZUa5biIZ' => array(
          'module' => 'facetapi',
          'delta' => 'ZXNTNWz3w05hh3aLGFw0ofPRZUa5biIZ',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-sp6ljjoCBKBVws0uia1DCKcDmln6TeUq' => array(
          'module' => 'facetapi',
          'delta' => 'sp6ljjoCBKBVws0uia1DCKcDmln6TeUq',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-w7XuwcVu1l6DNu4aCenMydri96KBLxYh' => array(
          'module' => 'facetapi',
          'delta' => 'w7XuwcVu1l6DNu4aCenMydri96KBLxYh',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-uulIYjH3ZtSu9hhI5ARgBYQeEUNqWe17' => array(
          'module' => 'facetapi',
          'delta' => 'uulIYjH3ZtSu9hhI5ARgBYQeEUNqWe17',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-9GGN5HfHaQpjLAfMWHJknvdGmR74ha9v' => array(
          'module' => 'facetapi',
          'delta' => '9GGN5HfHaQpjLAfMWHJknvdGmR74ha9v',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'mefibs-mefibs_hr_news--list--sorts' => array(
          'module' => 'mefibs',
          'delta' => 'mefibs_hr_news--list--sorts',
          'region' => 'sidebar_first',
          'weight' => '-1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  t('News page per space');
  $export['hr_news_space'] = $context;

  return $export;
}
