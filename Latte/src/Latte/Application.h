#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Latte {
	class LATTE_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Defined inside client
	Application* CreateApplication();
}

