
#include <Engine.h>

class ExampleLayer : public Engine::Layer
{
public:
	ExampleLayer()
		: Layer("Eample")
	{
	}

	void OnUpdate() override
	{
		if (Engine::Input::IsKeyPressed(HZ_KEY_TAB))
			LOG_TRACE("Tab key is pressed (poll)!");
		//LOG_INFO("ExampleLayer::Update");
	}

	void OnEvent(Engine::Event& event) override
	{
		if (event.GetEventType() == Engine::EventType::KeyPressed)
		{
			Engine::KeyPressedEvent& e = (Engine::KeyPressedEvent&)event;

			if (e.GetKeyCode() == HZ_KEY_TAB)
				LOG_TRACE("Tab key is pressed (event)!");

			LOG_TRACE("{0}", (char)e.GetKeyCode());

		}
		//LOG_TRACE("{0}", event);
	}
};




class Sandbox : public Engine::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new Engine::ImGuiLayer());
	}

	~Sandbox()
	{

	}
};

Engine::Application* Engine::CreateApplication()
{
	return new Sandbox();
}