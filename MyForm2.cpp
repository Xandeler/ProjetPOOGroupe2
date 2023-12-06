#include "MyForm2.h"
//test

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjetPOOGroupe2::MyForm2 monFormulaire;
	Application::Run(% monFormulaire);
}
