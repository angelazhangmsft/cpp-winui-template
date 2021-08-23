#pragma once

#include "MainPage.g.h"

namespace winrt::cpp_winui_template::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();
        static cpp_winui_template::MainPage Current() { return current;  }
        static Windows::Foundation::Collections::IVector<cpp_winui_template::Scenario> scenarios() { return scenariosInner; }
        void NotifyUser(hstring const& strMessage, Microsoft::UI::Xaml::Controls::InfoBarSeverity const& severity, bool isOpen);
        void NavView_Loaded(winrt::Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& e);
        void NavView_Navigate(hstring const& navItemTag, Microsoft::UI::Xaml::Media::Animation::NavigationTransitionInfo transitionInfo);
        void NavView_BackRequested(Microsoft::UI::Xaml::Controls::NavigationView const& sender, Microsoft::UI::Xaml::Controls::NavigationViewBackRequestedEventArgs const& e);
        void NavView_ItemInvoked(Microsoft::UI::Xaml::Controls::NavigationView const& sender, Microsoft::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs const& e);
        void ContentFrame_Navigated(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::Navigation::NavigationEventArgs const& e);    
    private:
        static cpp_winui_template::MainPage current;
        static winrt::Windows::Foundation::Collections::IVector<Scenario> scenariosInner;
        void UpdateStatus(hstring const& strMessage, Microsoft::UI::Xaml::Controls::InfoBarSeverity severity, bool isOpen);
    };
}
namespace winrt::cpp_winui_template::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
