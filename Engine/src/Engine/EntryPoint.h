#pragma once

#ifdef LRN_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv)
{
	Engine::Log::Init();
	LOG_CORE_WARN("Initialized Log!");
	LOG_INFO("Hello in Engine ;)");

	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}

#endif // LRN_PLATFORM_WINDOWS
