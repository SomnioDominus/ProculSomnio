#include <ProculSomnio.h>

class Sandbox : public ProculSomnio::Application {
public:
	Sandbox() {}
	~Sandbox() {}
};

ProculSomnio::Application* ProculSomnio::CreateApplication() {
	return new Sandbox();
}