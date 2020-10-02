// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::DustEngine::Input>
    : Ubpa::USRefl::TypeInfoBase<Ubpa::DustEngine::Input>
{
    static constexpr AttrList attrs = {};

    static constexpr FieldList fields = {
        Field{"DisplaySize", &Ubpa::DustEngine::Input::DisplaySize},
        Field{"MousePos", &Ubpa::DustEngine::Input::MousePos},
        Field{"MouseDown", &Ubpa::DustEngine::Input::MouseDown},
        Field{"MouseWheel", &Ubpa::DustEngine::Input::MouseWheel},
        Field{"MouseWheelH", &Ubpa::DustEngine::Input::MouseWheelH},
        Field{"KeyCtrl", &Ubpa::DustEngine::Input::KeyCtrl},
        Field{"KeyShift", &Ubpa::DustEngine::Input::KeyShift},
        Field{"KeyAlt", &Ubpa::DustEngine::Input::KeyAlt},
        Field{"KeySuper", &Ubpa::DustEngine::Input::KeySuper},
        Field{"KeysDown", &Ubpa::DustEngine::Input::KeysDown},
        Field{"MouseInDisplay", &Ubpa::DustEngine::Input::MouseInDisplay},
        Field{"MouseInDisplayPre", &Ubpa::DustEngine::Input::MouseInDisplayPre},
        Field{"MouseClicked", &Ubpa::DustEngine::Input::MouseClicked},
        Field{"MousePosPrev", &Ubpa::DustEngine::Input::MousePosPrev},
        Field{"MouseDelta", &Ubpa::DustEngine::Input::MouseDelta},
        Field{"MouseClickedPos", &Ubpa::DustEngine::Input::MouseClickedPos},
        Field{"MouseDoubleClicked", &Ubpa::DustEngine::Input::MouseDoubleClicked},
        Field{"MouseReleased", &Ubpa::DustEngine::Input::MouseReleased},
        Field{"MouseDownDuration", &Ubpa::DustEngine::Input::MouseDownDuration},
        Field{"KeysDownDuration", &Ubpa::DustEngine::Input::KeysDownDuration},
    };
};
