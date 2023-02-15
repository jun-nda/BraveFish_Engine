#include "hzpch.h"
#include "BraveFish/Renderer/GraphicsContext.h"

#include "BraveFish/Renderer/Renderer.h"
#include "Platform/OpenGL/OpenGLContext.h"

namespace BraveFish {

	Scope<GraphicsContext> GraphicsContext::Create(void* window)
	{
		switch (Renderer::GetAPI())
		{
			case RendererAPI::API::None:    HZ_CORE_ASSERT(false, "RendererAPI::None is currently not supported!"); return nullptr;
			case RendererAPI::API::OpenGL:  return CreateScope<OpenGLContext>(static_cast<GLFWwindow*>(window));
		}

		HZ_CORE_ASSERT(false, "Unknown RendererAPI!");
		return nullptr;
	}

}