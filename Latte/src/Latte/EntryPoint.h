#pragma once

#ifdef LT_PLATFORM_WINDOWS

extern Latte::Application* Latte::CreateApplication();

int main(int argc, char** argv) {
	auto app = Latte::CreateApplication();
	app->Run();
	delete app;
}

#endif // LT_PLATFORM_WINDOWS
