#pragma once

#include "BraveFish/Core/Base.h"

#include "BraveFish/Core/Window.h"
#include "BraveFish/Core/LayerStack.h"
#include "BraveFish/Events/Event.h"
#include "BraveFish/Events/ApplicationEvent.h"

#include "BraveFish/Core/Timestep.h"

#include "BraveFish/ImGui/ImGuiLayer.h"

int main(int argc, char** argv);

namespace BraveFish {

	class Application
	{
	public:
		Application(const std::string& name = "BraveFish App");
		virtual ~Application();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);

		Window& GetWindow() { return *m_Window; }

		void Close();

		ImGuiLayer* GetImGuiLayer() { return m_ImGuiLayer; }

		static Application& Get() { return *s_Instance; }
	private:
		void Run();
		bool OnWindowClose(WindowCloseEvent& e);
		bool OnWindowResize(WindowResizeEvent& e);
	private:
		std::unique_ptr<Window> m_Window;
		ImGuiLayer* m_ImGuiLayer;
		bool m_Running = true;
		bool m_Minimized = false;
		LayerStack m_LayerStack;
		float m_LastFrameTime = 0.0f;
	private:
		static Application* s_Instance;
		friend int ::main(int argc, char** argv);
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}