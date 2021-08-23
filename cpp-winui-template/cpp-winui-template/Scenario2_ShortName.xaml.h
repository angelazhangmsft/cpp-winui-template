#pragma once

#include "Scenario2_ShortName.g.h"

namespace winrt::cpp_winui_template::implementation
{
    struct Scenario2_ShortName : Scenario2_ShortNameT<Scenario2_ShortName>
    {
        Scenario2_ShortName();

    };
}

namespace winrt::cpp_winui_template::factory_implementation
{
    struct Scenario2_ShortName : Scenario2_ShortNameT<Scenario2_ShortName, implementation::Scenario2_ShortName>
    {
    };
}
