#pragma once

#ifdef PS_PLATFORM_WINDOWS
	#ifdef PS_BUILD_DLL
		#define PS_API __declspec(dllexport)
	#else
		#define PS_API __declspec(dllimport)
	#endif
#else
	#error Procul Somnio only supports Windows.
#endif