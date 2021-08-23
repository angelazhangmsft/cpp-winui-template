#include "pch.h"
#include "Scenario1_ShortName.xaml.h"
#if __has_include("Scenario1_ShortName.g.cpp")
#include "Scenario1_ShortName.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::cpp_winui_template::implementation
{
    cpp_winui_template::MainPage Scenario1_ShortName::rootPage{ nullptr };

    Scenario1_ShortName::Scenario1_ShortName()
    {
        InitializeComponent();
        Scenario1_ShortName::rootPage = cpp_winui_template::MainPage::Current();
    }

    void winrt::cpp_winui_template::implementation::Scenario1_ShortName::StatusMessage_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        rootPage.NotifyUser(L"Hello", InfoBarSeverity::Informational, true);
    }


    void winrt::cpp_winui_template::implementation::Scenario1_ShortName::ErrorMessage_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        rootPage.NotifyUser(L"Oh dear.\nSomething went wrong. Very wrong.", InfoBarSeverity::Error, true);
    }


    void winrt::cpp_winui_template::implementation::Scenario1_ShortName::ClearMessage_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        rootPage.NotifyUser(L"", InfoBarSeverity::Informational, false);
    }
}



