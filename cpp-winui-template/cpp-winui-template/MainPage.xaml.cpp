#include "pch.h"
#include "MainPage.xaml.h"
#if __has_include("MainPage.g.cpp")
#include "MainPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;
using namespace Microsoft::UI::Xaml::Media::Animation;
using namespace Microsoft::UI::Xaml::Navigation;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::cpp_winui_template::implementation
{
    cpp_winui_template::MainPage MainPage::current{ nullptr };

    MainPage::MainPage()
    {
        InitializeComponent();
        MainPage::current = *this;
    }

    void MainPage::NotifyUser(hstring const& strMessage, InfoBarSeverity const& severity, bool isOpen)
    {
        if (DispatcherQueue().HasThreadAccess())
        {
            UpdateStatus(strMessage, severity, isOpen);
        }
        else
        {
            DispatcherQueue().TryEnqueue([strMessage, severity, isOpen, this]() 
                {
                    UpdateStatus(strMessage, severity, isOpen); 
                });
        }
    }

    void MainPage::UpdateStatus(hstring const& strMessage, Microsoft::UI::Xaml::Controls::InfoBarSeverity severity, bool isOpen)
    {
        infoBar().Message(strMessage);
        infoBar().IsOpen(isOpen);
        infoBar().Severity(severity);
    }

    void MainPage::NavView_Loaded(IInspectable const& sender, RoutedEventArgs const& e)
    {
        auto itemCollection = single_threaded_observable_vector<IInspectable>();
   
        for (auto s : MainPage::scenarios())
        {
            FontIcon fontIcon = FontIcon();
            
            //itemCollection.Append(NavigationViewItem(s.Title, s.ClassName, fontIcon));
         
        }
        NavView().MenuItemsSource(itemCollection);

        // NavView doesn't load any page by default, so load home page.
        NavView().SelectedItem(NavView().MenuItems().GetAt(0));

        // If navigation occurs on SelectionChanged, this isn't needed.
        // Because we use ItemInvoked to navigate, we need to call Navigate
        // here to load the home page.
        if (scenarios() != NULL && scenarios().Size() > 0)
        {
            NavView_Navigate(scenarios().GetAt(0).ClassName, EntranceNavigationTransitionInfo());
        }
    }
    void MainPage::NavView_Navigate(hstring const& navItemTag, NavigationTransitionInfo transitionInfo)
    {
    }

    void MainPage::NavView_BackRequested(NavigationView const& sender, NavigationViewBackRequestedEventArgs const& e)
    {
        if (ContentFrame().CanGoBack())
        {
            ContentFrame().GoBack();
        }
    }

    void MainPage::NavView_ItemInvoked(NavigationView const& sender, NavigationViewItemInvokedEventArgs const& e)
    {
    }

    void MainPage::ContentFrame_Navigated(IInspectable const& sender, NavigationEventArgs const& e)
    {
    }

}



