#include "pch.h"
#include "Application.h"

#include "Engine/Events/ApplicationEvent.h"
#include "Engine/Log.h"

namespace Engine {
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowsResizeEvent e(1280, 720);
		LOG_TRACE(e);

		while (true)
		{
		}
	}
}