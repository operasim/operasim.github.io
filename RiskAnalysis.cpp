#include "RiskAnalysis.h"

#include <iostream>
#include <stdio.h>

#pragma comment (lib, "User32.lib") //--> ��ó���� --> User32.lib --> �� ��Ʈ�Ͽ� �ش� ������ �־�� ��, 
#pragma comment(lib, "Shell32.lib")   

#include <ShellAPI.h>
#include "C:\Users\user\Downloads\chilkat\chilkat-9.5.0-x86_64-vc2019\chilkat-9.5.0-x86_64-vc2019\include\CkUpload.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Project03::RiskAnalysis form;	// Project1 - ���� ������Ʈ �̸�
	Application::Run(% form);
}
