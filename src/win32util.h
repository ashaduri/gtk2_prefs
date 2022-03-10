/***************************************************************************
                          win32util.h  -  description
                             -------------------
    begin                : Tue Jan 14 2003
    copyright            : (C) 2003 by Alexander Shaduri
    email                : ashaduri 'at' gmail.com
 ***************************************************************************/
#ifndef WIN32UTIL_H
#define WIN32UTIL_H

#ifdef _WIN32

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <string>


/**
 * Get registry value
 */
std::string win32_get_registry_value_string(HKEY base, const std::string& keydir, const std::string& key);

/**
 * Set registry value
 */
void win32_set_registry_value_string(HKEY base, const std::string& keydir, const std::string& key, const std::string& value);




#endif //_WIN32

#endif // WIN32UTIL_H
