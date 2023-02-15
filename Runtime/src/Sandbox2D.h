#pragma once

#include "BraveFish.h"

class Sandbox2D : public BraveFish::Layer
{
public:
	Sandbox2D();
	virtual ~Sandbox2D() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(BraveFish::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(BraveFish::Event& e) override;
private:
	BraveFish::OrthographicCameraController m_CameraController;
	
	// Temp
	BraveFish::Ref<BraveFish::VertexArray> m_SquareVA;
	BraveFish::Ref<BraveFish::Shader> m_FlatColorShader;

	BraveFish::Ref<BraveFish::Texture2D> m_CheckerboardTexture;

	glm::vec4 m_SquareColor = { 0.2f, 0.3f, 0.8f, 1.0f };
};