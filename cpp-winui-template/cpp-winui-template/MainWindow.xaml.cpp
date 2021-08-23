#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#include "microsoft.ui.xaml.window.h"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::cpp_winui_template::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
   
        Title(L"Feature Name");
        HWND hwnd = GetWindowHandle();
        HANDLE hIcon = LoadImage(NULL, L"Assets/logo-winui.ico", IMAGE_ICON, 16, 16, LR_LOADFROMFILE);
        SendMessage(hwnd, WM_SETICON, 0, (LPARAM)hIcon);
    }

    HWND MainWindow::GetWindowHandle()
    {
        HWND hwnd;
        Window window = this->try_as<Window>();
        window.as<IWindowNative>()->get_WindowHandle(&hwnd);
        return hwnd;
    }

}
