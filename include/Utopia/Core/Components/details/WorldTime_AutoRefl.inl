// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::WorldTime>
    : Ubpa::USRefl::TypeInfoBase<Ubpa::Utopia::WorldTime>
{
    static constexpr AttrList attrs = {};

    static constexpr FieldList fields = {
        Field{"elapsedTime", &Ubpa::Utopia::WorldTime::elapsedTime},
        Field{"deltaTime", &Ubpa::Utopia::WorldTime::deltaTime},
    };
};

