#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "BraveFish/Core/Timestep.h"
#include "BraveFish/Events/MouseEvent.h"

namespace BraveFish {

// Defines several possible options for camera movement. Used as abstraction to stay away from window-system specific
// input methods
enum Camera_Movement { FORWARD, BACKWARD, LEFT, RIGHT };

// Default camera values
const float YAW         = -90.0f; // towards -z at start
const float PITCH       =  0.0f;
const float SPEED       = 2.5f;
const float SENSITIVITY = 0.1f;
const float ZOOM        = 45.0f;

class PerspectiveCamera {
public:
    PerspectiveCamera(glm::vec3 position = glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3 up = glm::vec3(0.0f, 1.0f, 0.0f),
                      float yaw = YAW, float pitch = PITCH);

public:
    void OnUpdate(Timestep ts);
    //void SetProjection(float width, float height);
    void OnEvent(BraveFish::Event& e);

    const glm::mat4 GetViewMatrix() const{ return glm::lookAt(m_Position, glm::vec3(0.0f, 0.0f, 0.0f), m_Up); }
    //const glm::mat4& GetProjectionMatrix() { return m_ProjectionMatrix; }

private:
    void updateCameraVectors();

    bool OnMouseMoveCallback(MouseMovedEvent& e);

private:
    //glm::mat4 m_ViewMatrix;
    //glm::mat4 m_ProjectionMatrix;

    // camera Attributes
    glm::vec3 m_Position;
    glm::vec3 m_Front;
    glm::vec3 m_Up;
    glm::vec3 m_Right;
    glm::vec3 m_WorldUp;

    // camera options
    float m_MovementSpeed;
    float m_MouseSensitivity;
    float m_Zoom;

    // euler Angles
    float m_Yaw;
    float m_Pitch;
};
} // namespace BraveFish