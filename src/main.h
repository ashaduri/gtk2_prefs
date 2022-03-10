/***************************************************************************
                          main.cpp  -  description
                             -------------------
    begin                : Wed Jan  1 2003
    copyright            : (C) 2003 - 2005 by Alexander Shaduri
    email                : ashaduri '@' gmail.com
 ***************************************************************************/

#ifndef _MAIN_H_
#define _MAIN_H_

#include <string>


/**
 * Get a reference to original theme
 * \return
 */
std::string& get_orig_theme_ref();


/**
 * Get a reference to original font description
 * \return
 */
std::string& get_orig_font_description_ref();


/**
 * Get current theme name
 * \return
 */
std::string get_current_theme();


/**
 * Get current font description
 * \return
 */
std::string get_current_font_description();


/**
 * Get selected theme name form UI
 * \return
 */
std::string get_selected_theme();


/**
 * Get selected font description from UI
 * \return
 */
std::string get_selected_font_description();


/**
 * Set current GTK theme by name, applying the theme to GTK and setting the current treeview index.
 * \param theme_name
 * \param font
 */
void set_theme(const std::string& theme_name, const std::string& font);


/**
 * Apply a theme to GTK
 * \param theme_name
 * \param font
 */
void apply_theme(const std::string& theme_name, const std::string& font);

/**
 * Save current theme to GTK settings
 * \return
 */
bool save_current_theme();


/**
 * Quit the program
 */
void quit_program();


#endif
