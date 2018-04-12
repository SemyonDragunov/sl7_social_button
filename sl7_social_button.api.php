<?php 

/**
 * Implements hook_sl7_social_button_theme().
 * 
 * title - Название.
 * theme - Шаблон описанный в hook_theme.
 * settings - Не обязательно. Форма с настройками. По Form API, но единственный аргумент $default_value,
 * в нём передаются параметры по умолчанию.
 * @see sl7_social_button_theme_sl7_default_settings().
 * img - Ихображение для превью.
 */
function hook_sl7_social_button_theme() {
	
	$themes['sl7_default_square'] = array(
		'title' => 'Стандартный',
		'theme' => 'sl7_social_button__default',
		'settings' => 'sl7_social_button_theme_sl7_default_settings',
		'img' => drupal_get_path('module', 'sl7_social_button') . '/img/sl7_social_button__preview.png',
	);
	
	return $themes;
}