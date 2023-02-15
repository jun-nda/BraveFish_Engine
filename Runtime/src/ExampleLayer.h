#pragma once

#include "BraveFish.h"

class ExampleLayer : public BraveFish::Layer
{
public:
	ExampleLayer();
	virtual ~ExampleLayer() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(BraveFish::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(BraveFish::Event& e) override;
private:
	BraveFish::ShaderLibrary m_ShaderLibrary;
	BraveFish::Ref<BraveFish::Shader> m_Shader;
	BraveFish::Ref<BraveFish::VertexArray> m_VertexArray;

	BraveFish::Ref<BraveFish::Shader> m_FlatColorShader;
	BraveFish::Ref<BraveFish::VertexArray> m_SquareVA;

	BraveFish::Ref<BraveFish::Texture2D> m_Texture, m_ChernoLogoTexture;

	BraveFish::OrthographicCameraController m_CameraController;
	glm::vec3 m_SquareColor = { 0.2f, 0.3f, 0.8f };
};

