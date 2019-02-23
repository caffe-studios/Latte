#pragma once

#include "Core.h"

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

