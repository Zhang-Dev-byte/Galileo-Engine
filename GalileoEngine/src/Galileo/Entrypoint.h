#pragma once
#include "Log.h"

#ifdef GL_PLATFORM_WINDOWS
extern GALILEO::Application* GALILEO::CreateApplication();
int main(int argc,char** argv ) {
	GALILEO::Log::Init();

	GL_CORE_INFO("Initialized Log!");

	auto app = GALILEO::CreateApplication();
	app->Run();
	delete app;
}
#endif // GL_PLATFORM_WINDOWS
