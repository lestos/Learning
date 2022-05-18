#pragma once

#ifdef LRN_PLATFORM_WINDOWS
	#ifdef LRN_BUILD_DLL
		#define ENGINE_API __declspec(dllexport)
	#else
		#define ENGINE_API __declspec(dllimport)
#endif // LRN_BUILD_DLL

#else
	#error Engine supports Windows only!
#endif

#define BIT(x) (1 << x)