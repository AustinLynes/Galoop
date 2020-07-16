#pragma once

#ifdef GAL_PLATFORM_WINDOWS
#ifdef GAL_BUILD_DLL
#define GALOOP_API __declspec(dllexport)
#else 
#define GALOOP_API __declspec(dllimport)
#endif
#else
#error Galoop only supports Windows!
#endif


