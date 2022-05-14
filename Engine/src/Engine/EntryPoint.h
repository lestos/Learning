#pragma once

#ifdef LRN_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv)
{
	printf("Engine :D");
	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}

#endif // LRN_PLATFORM_WINDOWS
