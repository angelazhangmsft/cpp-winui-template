#include "pch.h"
#include "SettingsPage.xaml.h"
#if __has_include("SettingsPage.g.cpp")
#include "SettingsPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::cpp_winui_template::implementation
{
    SettingsPage::SettingsPage()
    {
        InitializeComponent();
    }

    void SettingsPage::OnThemeRadioButtonChecked(Windows::Foundation::IInspectable const& sender, RoutedEventArgs const& e)
    {
       
        /*var selectedTheme = ((RadioButton)sender) ? .Tag ? .ToString();
        if (selectedTheme is not null)
        {
            Grid content = MainPage.Current.Content as Grid;
            if (content is not null)
            {
                content.RequestedTheme = GetEnum<ElementTheme>(selectedTheme);
                Settings.CurrentTheme = content.RequestedTheme.ToString();
            }
        }*/
    }

}



