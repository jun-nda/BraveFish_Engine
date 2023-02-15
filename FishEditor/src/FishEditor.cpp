#include <BraveFish.h>
#include <BraveFish/Core/EntryPoint.h>

#include "EditorLayer.h"

namespace BraveFish {

class FishEditor : public Application {
public:
    FishEditor()
        : Application("FishEditor") {
        PushLayer(new EditorLayer());
    }

    ~FishEditor() {}
};

Application* CreateApplication() { return new FishEditor(); }

} // namespace BraveFish