#include "hzpch.h"
#include "BraveFish/Renderer/RenderCommand.h"

namespace BraveFish {

	Scope<RendererAPI> RenderCommand::s_RendererAPI = RendererAPI::Create();

}