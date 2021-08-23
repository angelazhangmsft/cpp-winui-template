#include "pch.h"
#include "MainPage.xaml.h"
#include "SampleConfiguration.h"

using namespace winrt;
using namespace cpp_winui_template;
using namespace Windows::Foundation::Collections;


IVector<Scenario> implementation::MainPage::scenariosInner = winrt::single_threaded_observable_vector<Scenario>(
	{
		Scenario{ L"Copy and paste text", L"ClassName 1"},
		Scenario{ L"Copy and paste an image", L"ClassName 2"},
	});




