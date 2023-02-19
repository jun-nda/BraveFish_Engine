#include "hzpch.h"

#include "BraveFish/Renderer/PerspectiveCamera.h"

#include "BraveFish/Core/Application.h"

namespace BraveFish {
PerspectiveCamera::PerspectiveCamera(glm::vec3 position,
                                     glm::vec3 up, float yaw, float pitch)
    : m_Front(glm::vec3(0.0f, 0.0f, -1.0f))
    , m_MovementSpeed(SPEED)
    , m_MouseSensitivity(SENSITIVITY)
    , m_Zoom(ZOOM) {
    m_Position = position;
    m_WorldUp  = up;
    m_Yaw      = yaw;
    m_Pitch    = pitch;
    updateCameraVectors();
}

void PerspectiveCamera::OnUpdate(Timestep ts) {
    HZ_PROFILE_FUNCTION();

    float velocity = m_MovementSpeed * ts;
    if (Input::IsKeyPressed(HZ_KEY_A)) {
        m_Position -= velocity * m_Right;
    } else if (Input::IsKeyPressed(HZ_KEY_D)) {
        m_Position += velocity * m_Right;
    }else if (Input::IsKeyPressed(HZ_KEY_W)) {
        m_Position += velocity * m_Front;
    } else if (Input::IsKeyPressed(HZ_KEY_S)) {
        m_Position -= velocity * m_Front;
    }
}

void PerspectiveCamera::OnEvent( BraveFish::Event& e ) {

    EventDispatcher dispatcher(e);
    dispatcher.Dispatch<MouseMovedEvent>(HZ_BIND_EVENT_FN(PerspectiveCamera::OnMouseMoveCallback));
}

void PerspectiveCamera::updateCameraVectors( ){
    glm::vec3 front(0.f);

    front.x = cos(glm::radians(m_Yaw)) * cos(glm::radians(m_Pitch));
    front.y = sin(glm::radians(m_Pitch));
    front.z = sin(glm::radians(m_Yaw)) * cos(glm::radians(m_Pitch));

    m_Front = glm::normalize(front);
    m_Right = glm::normalize(glm::cross(m_Front, m_WorldUp));
    m_Up = glm::normalize(glm::cross(m_Front, m_Right));
}

bool PerspectiveCamera::OnMouseMoveCallback(MouseMovedEvent& e) { return false; }

} // namespace BraveFish