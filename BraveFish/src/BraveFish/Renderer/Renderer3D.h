#pragma once

#include "BraveFish/Renderer/PerspectiveCamera.h"
namespace BraveFish {

class Renderer3D {
public:
    static void Init();
    static void BeginScene(const PerspectiveCamera& camera);
    static void InitCube();
    static void Flush();
private:
};

} // namespace Hazel