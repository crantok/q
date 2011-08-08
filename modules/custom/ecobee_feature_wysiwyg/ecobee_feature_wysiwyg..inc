<?php

/**
 * Implementation of hook_default_wysiwyg().
 */
function ecobee_feature_wysiwyg_default_wysiwyg() {
  $export = array();
  $wysiwyg = new stdClass;
  $wysiwyg->disabled = FALSE; /* Edit this to true to make a default wysiwyg disabled initially */
  $wysiwyg->api_version = 2;
  $wysiwyg->editor = 'tinymce';
  $wysiwyg->settings = array(
    'default' => 1,
    'user_choose' => 0,
    'show_toggle' => 1,
    'theme' => 'advanced',
    'language' => 'en',
    'buttons' => array(
      'default' => array(
        'bold' => 1,
        'italic' => 1,
        'underline' => 1,
        'strikethrough' => 1,
        'justifyleft' => 1,
        'justifycenter' => 1,
        'justifyright' => 1,
        'justifyfull' => 1,
        'bullist' => 1,
        'numlist' => 1,
        'outdent' => 1,
        'indent' => 1,
        'undo' => 1,
        'redo' => 1,
        'link' => 1,
        'unlink' => 1,
        'anchor' => 1,
        'image' => 1,
        'sup' => 1,
        'sub' => 1,
        'blockquote' => 1,
        'code' => 1,
        'hr' => 1,
        'cut' => 1,
        'copy' => 1,
        'paste' => 1,
        'visualaid' => 1,
        'removeformat' => 1,
      ),
      'font' => array(
        'formatselect' => 1,
      ),
      'paste' => array(
        'pastetext' => 1,
        'pasteword' => 1,
      ),
      'table' => array(
        'tablecontrols' => 1,
      ),
      'drupal' => array(
        'break' => 1,
      ),
    ),
    'toolbar_loc' => 'top',
    'toolbar_align' => 'left',
    'path_loc' => 'bottom',
    'resizing' => 1,
    'verify_html' => 1,
    'preformatted' => 0,
    'convert_fonts_to_spans' => 1,
    'remove_linebreaks' => 1,
    'apply_source_formatting' => 0,
    'paste_auto_cleanup_on_paste' => 0,
    'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
    'css_setting' => 'theme',
    'css_path' => '',
    'css_classes' => '',
  );
  $wysiwyg->machine = 'filtered_html';

  $export['filtered_html'] = $wysiwyg;
  $wysiwyg = new stdClass;
  $wysiwyg->disabled = FALSE; /* Edit this to true to make a default wysiwyg disabled initially */
  $wysiwyg->api_version = 2;
  $wysiwyg->editor = 'tinymce';
  $wysiwyg->settings = array(
    'default' => 1,
    'user_choose' => 0,
    'show_toggle' => 1,
    'theme' => 'advanced',
    'language' => 'en',
    'buttons' => array(
      'default' => array(
        'bold' => 1,
        'italic' => 1,
        'underline' => 1,
        'strikethrough' => 1,
        'justifyleft' => 1,
        'justifycenter' => 1,
        'justifyright' => 1,
        'justifyfull' => 1,
        'bullist' => 1,
        'numlist' => 1,
        'outdent' => 1,
        'indent' => 1,
        'undo' => 1,
        'redo' => 1,
        'link' => 1,
        'unlink' => 1,
        'anchor' => 1,
        'image' => 1,
        'cleanup' => 1,
        'sup' => 1,
        'sub' => 1,
        'blockquote' => 1,
        'code' => 1,
        'hr' => 1,
        'cut' => 1,
        'copy' => 1,
        'paste' => 1,
        'removeformat' => 1,
        'charmap' => 1,
      ),
      'advimage' => array(
        'advimage' => 1,
      ),
      'advlink' => array(
        'advlink' => 1,
      ),
      'contextmenu' => array(
        'contextmenu' => 1,
      ),
      'emotions' => array(
        'emotions' => 1,
      ),
      'font' => array(
        'formatselect' => 1,
        'styleselect' => 1,
      ),
      'fullscreen' => array(
        'fullscreen' => 1,
      ),
      'paste' => array(
        'pastetext' => 1,
      ),
      'style' => array(
        'styleprops' => 1,
      ),
      'table' => array(
        'tablecontrols' => 1,
      ),
      'drupal' => array(
        'imagebrowser' => 1,
      ),
    ),
    'toolbar_loc' => 'top',
    'toolbar_align' => 'left',
    'path_loc' => 'bottom',
    'resizing' => 1,
    'verify_html' => 1,
    'preformatted' => 0,
    'convert_fonts_to_spans' => 1,
    'remove_linebreaks' => 0,
    'apply_source_formatting' => 1,
    'paste_auto_cleanup_on_paste' => 0,
    'block_formats' => 'p,h2,h3,h4,h5,h6,div',
    'css_setting' => 'theme',
    'css_path' => '',
    'css_classes' => '',
  );
  $wysiwyg->machine = 'full_html';

  $export['full_html'] = $wysiwyg;
  return $export;
}
