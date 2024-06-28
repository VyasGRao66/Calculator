#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::Calculator::implementation
{
    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    double secondValue = 0;
    std::string function;
    bool secondTime = true;
    hstring labelValue;
    bool decimalOnce = false;
    void MainPage::seven_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        labelValue = labelValue + L"7";        
        topLbl().Text(labelValue);
    }


    void MainPage::eight_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        labelValue = labelValue + L"8";
        topLbl().Text(labelValue);
    }


    void MainPage::nine_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        labelValue = labelValue + L"9";
        topLbl().Text(labelValue);
    }


    void MainPage::four_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        labelValue = labelValue + L"4";
        topLbl().Text(labelValue);
    }


    void MainPage::five_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        labelValue = labelValue + L"5";
        topLbl().Text(labelValue);
    }


    void MainPage::six_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        labelValue = labelValue + L"6";
        topLbl().Text(labelValue);
    }

    void MainPage::one_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        labelValue = labelValue + L"1";
        topLbl().Text(labelValue);
    }



    void MainPage::two_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        labelValue = labelValue + L"2";
        topLbl().Text(labelValue);
    }


    void MainPage::three_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        labelValue = labelValue + L"3";
        topLbl().Text(labelValue);
    }


    void MainPage::decimal_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        if (decimalOnce == false) {
            labelValue = labelValue + L".";
            topLbl().Text(labelValue);
        }
        decimalOnce = true;
    }


    void MainPage::zero_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        labelValue = labelValue + L"0";
        topLbl().Text(labelValue);
    }


    void MainPage::equal_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        if (labelValue != L"") {
            double total = 0;
            if (function == "+") {
                total = secondValue + stod(to_string(labelValue));
                labelValue = to_hstring(total);
            }
            else if (function == "-") {
                total = secondValue - stod(to_string(labelValue));
                labelValue = to_hstring(total);
            }
            else if (function == "*") {
                total = secondValue * stod(to_string(labelValue));
                labelValue = to_hstring(total);
            }
            else if (function == "/") {

                if (labelValue != L"0") {
                    total = secondValue / stod(to_string(labelValue));
                    labelValue = to_hstring(total);

                }
                else {
                    labelValue = L"You can not divide by 0";
                }
            }
            topLbl().Text(labelValue);
            if (labelValue != L"You can not divide by 0") {
                secondValue = stod(to_string(labelValue));
            }
            labelValue = L"";
        } 
    }

    void MainPage::clear_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        labelValue = L"";
        secondValue = 0;
        topLbl().Text(labelValue);
    }

    void MainPage::add_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        if (labelValue != L"") {
            if (secondValue == 0) {
                secondValue = stod(to_string(labelValue));
            }
            function = "+";
            decimalOnce = false;
            labelValue = L"";
        }
    }


    void MainPage::subtract_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        if (labelValue != L"") {
            if (secondValue == 0) {
                secondValue = stod(to_string(labelValue));
            }
            function = "-";
            decimalOnce = false;
            labelValue = L"";
        }
    }


    void MainPage::divide_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        if (labelValue != L"") {
            if (secondValue == 0) {
                secondValue = stod(to_string(labelValue));
            }
            function = "/";
            decimalOnce = false;
            labelValue = L"";
        }
        
    }


    void MainPage::multiply_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
    {
        if (labelValue != L"") {
            if (secondValue == 0) {
                secondValue = stod(to_string(labelValue));
            }
            function = "*";
            decimalOnce = false;
            labelValue = L"";
        }
    }
}


