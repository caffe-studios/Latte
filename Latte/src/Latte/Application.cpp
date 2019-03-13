#include "ltpch.h"
#include "Application.h"
#include "Latte/Events/ApplicationEvent.h"
#include "./Log.h"

namespace Latte {
	Application::Application()
	{
	}


	Application::~Application()
	{
	}

	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		LT_TRACE(e);
		while (true);
	}
}

