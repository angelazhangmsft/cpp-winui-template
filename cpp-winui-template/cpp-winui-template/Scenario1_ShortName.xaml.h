#pragma once

#include "Scenario1_ShortName.g.h"

namespace winrt::cpp_winui_template::implementation
{
    struct Scenario1_ShortName : Scenario1_ShortNameT<Scenario1_ShortName>
    {
        Scenario1_ShortName();
        void StatusMessage_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
        void ErrorMessage_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
        void ClearMessage_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
    private:
        static cpp_winui_template::MainPage rootPage;
    };

}

namespace winrt::cpp_winui_template::factory_implementation
{
    struct Scenario1_ShortName : Scenario1_ShortNameT<Scenario1_ShortName, implementation::Scenario1_ShortName>
    {
    };
}
