#pragma once

#ifdef LT_PLATFORM_WINDOWS

extern Latte::Application* Latte::CreateApplication();

int main(int argc, char** argv) 
{
	Latte::Log::Init();
	LT_CORE_WARN("Initialized Log!");
	int a = 5;
	LT_INFO("Hello! Var={0}", a);

	auto app = Latte::CreateApplication();
	app->Run();
	delete app;
}

#endif // LT_PLATFORM_WINDOWS
