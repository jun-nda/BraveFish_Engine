#pragma once

#include "BraveFish/Core/Base.h"
#include "BraveFish/Core/KeyCodes.h"
#include "BraveFish/Core/MouseCodes.h"

namespace BraveFish {

class Input {
public:
    static bool IsKeyPressed(KeyCode key);

    static bool                    IsMouseButtonPressed(MouseCode button);
    static std::pair<float, float> GetMousePosition();
    static float                   GetMouseX();
    static float                   GetMouseY();
};
} // namespace BraveFish