#include "pch.h"
#include "UI.h"
//VULTURES
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    INTERFAZ::UI form;
    Application::Run(% form);
}