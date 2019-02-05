#pragma once

#ifdef PS_PLATFORM_WINDOWS

extern ProculSomnio::Application* ProculSomnio::CreateApplication();

int main(int argc, char** argv) {
	auto app = ProculSomnio::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error Procul Somnio only supports Windows.
#endif