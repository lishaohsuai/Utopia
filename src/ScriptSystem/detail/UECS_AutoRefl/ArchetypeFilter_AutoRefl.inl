// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::UECS::ArchetypeFilter>
    : Ubpa::USRefl::TypeInfoBase<Ubpa::UECS::ArchetypeFilter>
{
    static constexpr AttrList attrs = {};

    static constexpr FieldList fields = {
        Field{"all", &Ubpa::UECS::ArchetypeFilter::all},
        Field{"any", &Ubpa::UECS::ArchetypeFilter::any},
        Field{"none", &Ubpa::UECS::ArchetypeFilter::none},
        Field{"HashCode", &Ubpa::UECS::ArchetypeFilter::HashCode},
        Field{"operator==", &Ubpa::UECS::ArchetypeFilter::operator==,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "rhs"},
                    }
                },
            }
        },
    };
};
