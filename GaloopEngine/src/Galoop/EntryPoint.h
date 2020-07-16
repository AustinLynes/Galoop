#pragma once

#ifdef GAL_PLATFORM_WINDOWS

extern Galoop::Application* Galoop::CreateApplication();

int main(int argc, char** argv) {
	printf("Welcome to Galoop Engine");
	auto app = Galoop::CreateApplication();
	app->Run();
	delete app;
}

#endif