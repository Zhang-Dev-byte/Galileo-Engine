#pragma once
#define GL_PLATFORM_WINDOWS true
#ifdef GL_PLATFORM_WINDOWS
#ifdef GL_BUILD_DLL
#define GALILEO_API __declspec(dllexport)
#else
#define GALILEO_API __declspec(dllimport)
#endif // GL_BUILD_DLL
#else
#error GALILEO only supports Windows!
#endif
#define BIT(x) (1 << x)
