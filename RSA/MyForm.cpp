#include "MyForm.h"
#include <bits/stdc++.h>
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	RSA::MyForm form;
	Application::Run(% form);
}




