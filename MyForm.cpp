#include "MyForm.h"
#include <iostream>
#include <stdio.h>

#pragma comment (lib, "User32.lib") //--> 전처리기 --> User32.lib --> 내 노트북에 해당 파일이 있어야 함, 
#pragma comment(lib, "Shell32.lib")   

#include <ShellAPI.h>
#include "C:\Users\user\Downloads\chilkat\chilkat-9.5.0-x86_64-vc2019\chilkat-9.5.0-x86_64-vc2019\include\CkUpload.h"
#include "C:\Users\user\Downloads\vplan\project01\Project1\Project1\MyForm1.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]


void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	operasimmain::MyForm form;
	Application::Run(% form);
}


