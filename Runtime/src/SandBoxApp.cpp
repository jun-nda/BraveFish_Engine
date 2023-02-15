#include <BraveFish.h>
#include <BraveFish/Core/EntryPoint.h>

#include "Sandbox2D.h"
#include "ExampleLayer.h"

class Sandbox : public BraveFish::Application
{
public:
	Sandbox()
	{
		// PushLayer(new ExampleLayer());
		PushLayer(new Sandbox2D());
	}

	~Sandbox()
	{
	}
};

BraveFish::Application* BraveFish::CreateApplication()
{
	return new Sandbox();
}
