<?php
/**
 * Define this Export UI plugin.
 */
$plugin = array(
  'schema' => 'jvectormap',
  'access' => 'administer jvectormap',
  'menu' => array(
    'menu item' => 'jvectormap',
    'menu title' => 'jVectorMap',
    'menu description' => 'Administer jVectorMap maps',
  ),
  'title singular' => t('map'),
  'title plural' => t('maps'),
  'title singular proper' => t('jVectorMap map'),
  'title plural proper' => t('jVectorMap maps'),
  'form' => array(
    'settings' => 'jvectormap_ctools_export_ui_form',
  ),
);

/**
 * Define the map add/edit form.
 */

function jvectormap_ctools_export_ui_form(&$form, &$form_state) {
  $map = $form_state['item'];
  $form['description'] = array(
    '#type' => 'textfield',
    '#title' => t('Description'),
    '#description' => t('The human readable name or description of this map.'),
    '#default_value' => $map->description,
    '#required' => true,
  );
  $form['map_area'] = array(
    '#type' => 'select',
    '#title' => t('Map Area'),
    '#description' => t('The geographical area this map shows.'),
    '#default_value' => $map->map_area,
    '#required' => TRUE,
    '#options' => array(
      0 => t('Custom'),
      1 => t('World'),
      2 => t('United States'),
      3 => t('Europe'),
      4 => t('Germany'),
    ),
  );
  $form['map_area_custom'] = array(
    '#type' => 'textarea',
    '#description' => 'The generated code for this custom map.',
    '#default_value' => $map->map_area_custom,
    '#states' => array(
      'visible' => array(
        ':input[name=map_area]' => array('value' => 0),
      ),
    ),
  );
  $form['width'] = array(
    '#type' => 'textfield',
    '#title' => t('Width'),
    '#description' => t('The width of the map in pixels. Set to 0 to rely on CSS styling.'),
    '#default_value' => $map->width,
    '#field_suffix' => 'px',
  );
  $form['height'] = array(
    '#type' => 'textfield',
    '#title' => t('Height'),
    '#description' => t('The height of the map in pixels. Set to 0 to rely on CSS styling.'),
    '#default_value' => $map->height,
    '#field_suffix' => 'px',
    '#required' => TRUE,
  );
  $form['background_color'] = array(
    '#type' => 'textfield',
    '#title' => t('Background color'),
    '#description' => t('Background color of map.  Examples: transparent, red, or #505050'),
    '#default_value' => $map->background_color,
  );
  $form['foreground_color'] = array(
    '#type' => 'textfield',
    '#title' => t('Foreground color'),
    '#description' => t('Foreground color for regions of the map.'),
    '#default_value' => $map->foreground_color,
  );
  $form['hover_color'] = array(
    '#type' => 'textfield',
    '#title' => t('Hover color'),
    '#description' => t('Hover color for regions of the map.'),
    '#default_value' => $map->hover_color,
  );
}

?>