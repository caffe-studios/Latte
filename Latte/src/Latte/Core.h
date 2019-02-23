#pragma once

#ifdef LT_PLATFORM_WINDOWS
	#ifdef LT_BUILD_DLL
		#define LATTE_API __declspec(dllexport)
	#else		
		#define LATTE_API __declspec(dllimport)
	#endif
#else
	#error Latte only support Windows
#endif


