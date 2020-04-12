#pragma once
#include "Core.h"
namespace GALILEO {
	class GALILEO_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};
	Application* CreateApplication();
}

