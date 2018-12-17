//#include <msclr\marshal_cppstd.h>
//#include <iostream>
#include <atlstr.h>
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CLRtestPROJ::MyForm form;
	Application::Run(%form);
}
