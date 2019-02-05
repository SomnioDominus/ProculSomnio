#pragma once

#include "Core.h"

namespace ProculSomnio {

	class PS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}