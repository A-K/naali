// For conditions of distribution and use, see copyright notice in license.txt

#pragma once

#if defined (_WINDOWS)
#if defined(SCENEPERSISTENCE_MODULE_EXPORTS) 
#define SCENEPERSISTENCE_MODULE_API __declspec(dllexport)
#else
#define SCENEPERSISTENCE_MODULE_API __declspec(dllimport) 
#endif
#else
#define SCENEPERSISTENCE_MODULE_API
#endif

