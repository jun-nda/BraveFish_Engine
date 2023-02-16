#pragma once
#include <glm/glm.hpp>

namespace BraveFish {
class PerspectiveCamera {
public:
    PerspectiveCamera(const glm::vec3& position);

public:
    const glm::mat4& getViewMatrix() { return m_viewMatrix; }
    const glm::mat4& getProjectionMatrix() { return m_projectionMatrix; }

private:
    void calculateViewMatrix();
    void calculateProjectionMatrix();

private:
    glm::vec3 v_position;

    glm::mat4 m_viewMatrix;
    glm::mat4 m_projectionMatrix;
};
} // namespace BraveFish