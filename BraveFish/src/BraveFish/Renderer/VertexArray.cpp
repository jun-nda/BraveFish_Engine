#include "hzpch.h"
#include "BraveFish/Renderer/VertexArray.h"

#include "BraveFish/Renderer/Renderer.h"
#include "Platform/OpenGL/OpenGLVertexArray.h"

namespace BraveFish {

	Ref<VertexArray> VertexArray::Create()
	{
		switch (Renderer::GetAPI())
		{
			case RendererAPI::API::None:    HZ_CORE_ASSERT(false, "RendererAPI::None is currently not supported!"); return nullptr;
			case RendererAPI::API::OpenGL:  return CreateRef<OpenGLVertexArray>();
		}

		HZ_CORE_ASSERT(false, "Unknown RendererAPI!");
		return nullptr;
	}

}