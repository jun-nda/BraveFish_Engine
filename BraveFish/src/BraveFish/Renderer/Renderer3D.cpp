#include "hzpch.h"

#include "Renderer3D.h"

#include "BraveFish/Renderer/PerspectiveCamera.h"
#include "BraveFish/Renderer/Shader.h"
#include "BraveFish/Renderer/VertexArray.h"
#include "BraveFish/Renderer/RenderCommand.h"

namespace BraveFish {

struct Render3DData {
    Ref<VertexBuffer> m_3dVertexBuffer;
    Ref<VertexArray>  m_3dVertexArray;
    Ref<Shader>       m_shader;
};

void Renderer3D::Init() { InitCube(); }

static Render3DData data;

void Renderer3D::InitCube() {
    PerspectiveCamera camera(glm::vec3(0.0f, 0.0f, 3.0f));

    const glm::mat4& view       = camera.getViewMatrix();
    const glm::mat4& projection = camera.getProjectionMatrix();

    // set up vertex data (and buffer(s)) and configure vertex attributes
    // ------------------------------------------------------------------
    float vertices[] = {
        -0.5f, -0.5f, -0.5f, 0.5f,  -0.5f, -0.5f, 0.5f,  0.5f,  -0.5f,
        0.5f,  0.5f,  -0.5f, -0.5f, 0.5f,  -0.5f, -0.5f, -0.5f, -0.5f,

        -0.5f, -0.5f, 0.5f,  0.5f,  -0.5f, 0.5f,  0.5f,  0.5f,  0.5f,
        0.5f,  0.5f,  0.5f,  -0.5f, 0.5f,  0.5f,  -0.5f, -0.5f, 0.5f,

        -0.5f, 0.5f,  0.5f,  -0.5f, 0.5f,  -0.5f, -0.5f, -0.5f, -0.5f,
        -0.5f, -0.5f, -0.5f, -0.5f, -0.5f, 0.5f,  -0.5f, 0.5f,  0.5f,

        0.5f,  0.5f,  0.5f,  0.5f,  0.5f,  -0.5f, 0.5f,  -0.5f, -0.5f,
        0.5f,  -0.5f, -0.5f, 0.5f,  -0.5f, 0.5f,  0.5f,  0.5f,  0.5f,

        -0.5f, -0.5f, -0.5f, 0.5f,  -0.5f, -0.5f, 0.5f,  -0.5f, 0.5f,
        0.5f,  -0.5f, 0.5f,  -0.5f, -0.5f, 0.5f,  -0.5f, -0.5f, -0.5f,

        -0.5f, 0.5f,  -0.5f, 0.5f,  0.5f,  -0.5f, 0.5f,  0.5f,  0.5f,
        0.5f,  0.5f,  0.5f,  -0.5f, 0.5f,  0.5f,  -0.5f, 0.5f,  -0.5f,
    };

    data.m_3dVertexArray  = VertexArray::Create();
    data.m_3dVertexBuffer = VertexBuffer::Create(vertices, sizeof(vertices));
    data.m_3dVertexBuffer->SetLayout({{ShaderDataType::Float3, "Position"}});
    data.m_3dVertexArray->AddVertexBuffer(data.m_3dVertexBuffer);
    data.m_shader = Shader::Create("assets/shaders/cube.glsl");
    data.m_shader->Bind();

    data.m_shader->SetMat4("model", glm::mat4(1.0f));
    data.m_shader->SetMat4("view", view);
    data.m_shader->SetMat4("projection", projection);
    data.m_shader->SetFloat3("color", glm::vec3(1.0f, 0.0f, 0.0f));
}

void Renderer3D::Flush( ) { 
    RenderCommand::SetClearColor({0.2f, 0.3f, 0.3f, 1.0f});
    RenderCommand::Clear();

    data.m_shader->Bind();
    data.m_3dVertexArray->Bind();
    RenderCommand::DrawArray(36);
}


} // namespace BraveFish