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

#ifdef LOG_ENABLE_ASSERTS
	#define LOG_ASSERT(x, ...) { if(!(x)) { LOG_ERROR("Assertion Failed: {0}", __VA_ARGS__)}; __debugbreak(); } }
	#define LOG_CORE_ASSERT(x, ...) { if(!(x)) { LOG_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__)}; __debugbreak(); } }
#else
	#define LOG_ASSERT(x, ...)
	#define LOG_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)