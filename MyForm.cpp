#include "MyForm.h"
//test

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjetPOOGroupe2::MyForm monFormulaire;
	Application::Run(% monFormulaire);
}