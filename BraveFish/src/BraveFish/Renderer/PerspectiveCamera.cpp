#include "hzpch.h"

#include "PerspectiveCamera.h"

#include <glm/gtc/matrix_transform.hpp>
#include "BraveFish/Core/Application.h"

const glm::vec3 ZERO_POINT_POSITION = glm::vec3(0.0f, 0.0f, 0.0f);
const glm::vec3 UP_DIRECTION        = glm::vec3(0.0f, 1.0f, 0.0f);

const float NEARFACE = 0.1f;
const float FARFACE  = 100.f;

namespace BraveFish {
PerspectiveCamera::PerspectiveCamera(const glm::vec3& position)
    : v_position(position) {
    calculateViewMatrix();
    calculateProjectionMatrix();
}

void PerspectiveCamera::calculateViewMatrix() {
    //// cameraZ is just camera Direction
    // glm::vec3 cameraZ = glm::normalize(v_position - ZERO_POINT_POSITION);
    // glm::vec3 cameraX = glm::normalize(glm::cross(cameraZ, UP_DIRECTION));
    // glm::vec3 cameraY = glm::normalize(glm::cross(cameraZ, cameraX));

    m_viewMatrix = glm::lookAt(v_position, ZERO_POINT_POSITION, UP_DIRECTION);
}

void PerspectiveCamera::calculateProjectionMatrix() {
    Application& app = Application::Get();

    m_projectionMatrix = glm::perspective(
        glm::radians(45.0f), (float)app.GetWindow().GetWidth() / (float)app.GetWindow().GetHeight(), NEARFACE, FARFACE);
}

} // namespace BraveFish