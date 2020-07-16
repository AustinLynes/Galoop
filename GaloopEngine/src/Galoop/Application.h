#pragma once
#include "Core.h"

namespace Galoop
{

	class GALOOP_API Application
	{

	public:
		Application();
		virtual ~Application();
		void Run();

	};

	// To be Defined in Client
	Application* CreateApplication();
}