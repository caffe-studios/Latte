#include <Latte.h>

class Sandbox : public Latte::Application {
public: 
	Sandbox() {}
	~Sandbox() {}
};

Latte::Application* Latte::CreateApplication() {
	return new Sandbox();
}

