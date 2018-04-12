<?php

function template_preprocess_sl7_social_button__default(&$variables) {
  $variables['button'] = variable_get('sl7_social_button_url');
  $settings = variable_get('sl7_social_button_theme_settings');
  $variables['style'] = $settings['style'];
  $variables['center'] = $settings['center'] == 1 ? 'yes' : 'no';
  drupal_add_css(drupal_get_path('module', 'sl7_social_button') . '/css/sl7_social_button__default.css');
}

function template_preprocess_sl7_social_button__white(&$variables) {
	$variables['button'] = variable_get('sl7_social_button_url');
	$settings = variable_get('sl7_social_button_theme_settings');
	$variables['center'] = $settings['center'] == 1 ? 'yes' : 'no';
	drupal_add_css(drupal_get_path('module', 'sl7_social_button') . '/css/sl7_social_button__white.css');
}

function theme_sl7_social_button__default(&$variables) {
  if ($variables['button']) {
    $output = '<ul id="sl7-social-button" data-center="' . $variables['center'] . '" data-style="' . $variables['style'] . '">';
    foreach ($variables['button'] as $name => $url) {
      $output .= '<li><a href="' . $url . '" class="' . $name . '" target="_blank" rel="nofollow"></a></li>';
    }
    $output .= '</ul>';

    return $output;
  }

  return FALSE;
}

function theme_sl7_social_button__white(&$variables) {
	if ($variables['button']) {
		$output = '<ul id="sl7-social-button" data-center="' . $variables['center'] . '">';
		foreach ($variables['button'] as $name => $url) {
			$output .= '<li><a href="' . $url . '" class="' . $name . '" target="_blank" rel="nofollow"></a></li>';
		}
		$output .= '</ul>';
		
		return $output;
	}
	
	return FALSE;
}