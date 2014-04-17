<?php
/**
 * @file
 * static_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function static_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Topbar';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'edeveloper_topbar';
  $fe_block_boxes->body = '<p><a href="/" title="Home">Home</a> <a href="/contact" title="contact">Contact</a> <a href="tel:+31-318-743800" title="Call Edeveloper">Tel. +31 (0) 318 743 800</a></p>';

  $export['edeveloper_topbar'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contactgegevens';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_contact';
  $fe_block_boxes->body = '<p>Edeveloper</p><p>Dubceksingel 106,<br />6716 RG Ede</p><p>info@edeveloper.nl<br />(t) +31 (318) 743800</p><p>KvK: 59199326<br />BTW: NL108761344B02<br />Bank:NL42 TRIO 0197 769 381</p>';

  $export['footer_contact'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Parter organisaties';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'footer_partner';
  $fe_block_boxes->body = '<p><a href="http://civicoop.org">CiviCooP</a></p>';

  $export['footer_partner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social media';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'footer_socialmedia';
  $fe_block_boxes->body = '<p><a href="https://www.twitter.com/EdeveloperNL">Twitter @EdeveloeprNL</a></p>';

  $export['footer_socialmedia'] = $fe_block_boxes;

  return $export;
}
