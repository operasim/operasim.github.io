#pragma once
//������Ʈ ���
//1 > Project1.vcxproj->C:\Users\user\Downloads\vplan\project01\Project1\Debug\Project1.exe

//C:\Users\user\Downloads\mingw - w64 - v10.0.0 (1)\mingw - w64 - v10.0.0\mingw - w64 - headers\crt
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <Shellapi.h>
#include <tchar.h>
#include <commdlg.h>
#include <mciapi.h>
#include <rpcasync.h>
#include "C:\Users\user\Downloads\chilkat\chilkat-9.5.0-x86_64-vc2019\chilkat-9.5.0-x86_64-vc2019\include\CkUpload.h"
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include <stdexcept>
#include <tchar.h>
#include <direct.h>
#include <fstream>
#include "MyForm1.h"

/*
#include "pugixml/OpenDriveMap.h"
#include "pugixml/LaneSection.h"
#include "pugixml/Lane.h"
#include "pugixml/Math.hpp"
#include "pugixml/Road.h"
#include "pugixml/pugiconfig.hpp"
#include "pugixml/pugixml.hpp"
#include <vector>
*/

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// MyForm�� ���� ����Դϴ�.
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::ComponentModel::IContainer^ components;


	protected:

	private:

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����̳� ������ �ʿ��� �޼����Դϴ�. 
		/// �� �޼����� ������ �ڵ� ������� �������� ������.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button1->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button1->Location = System::Drawing::Point(133, 91);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(194, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"SimulationStart";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button3->Location = System::Drawing::Point(139, 505);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(194, 39);
			this->button3->TabIndex = 2;
			this->button3->Text = L"���������򰡽ý���";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button4->Location = System::Drawing::Point(421, 508);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(194, 36);
			this->button4->TabIndex = 5;
			this->button4->Text = L"�ó���������";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button5->Location = System::Drawing::Point(718, 508);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(194, 34);
			this->button5->TabIndex = 6;
			this->button5->Text = L"���������ͼ���";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button6->Location = System::Drawing::Point(1253, 510);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(194, 34);
			this->button6->TabIndex = 7;
			this->button6->Text = L"DataAnnotation";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button7->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button7->Location = System::Drawing::Point(997, 510);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(194, 34);
			this->button7->TabIndex = 8;
			this->button7->Text = L"��������������";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button8->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button8->Location = System::Drawing::Point(133, 162);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(194, 32);
			this->button8->TabIndex = 9;
			this->button8->Text = L"3DMap���ε�";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label1->Location = System::Drawing::Point(1241, 701);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(227, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"SpringCloud,OperaSIM, 2022";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button10
			// 
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button10->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button10->Location = System::Drawing::Point(138, 570);
			this->button10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(194, 38);
			this->button10->TabIndex = 13;
			this->button10->Text = L"���赵�м��ùķ��̼�";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button11->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button11->Location = System::Drawing::Point(421, 570);
			this->button11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(194, 38);
			this->button11->TabIndex = 14;
			this->button11->Text = L"��������ͺ���";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button12->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button12->Location = System::Drawing::Point(718, 575);
			this->button12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(194, 34);
			this->button12->TabIndex = 15;
			this->button12->Text = L"��Ƽ�ó���������";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button14
			// 
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button14->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button14->Location = System::Drawing::Point(138, 245);
			this->button14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(194, 34);
			this->button14->TabIndex = 17;
			this->button14->Text = L"���ýùķ��̼�(����)";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button15->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button15->Location = System::Drawing::Point(139, 401);
			this->button15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(193, 38);
			this->button15->TabIndex = 18;
			this->button15->Text = L"OperaSIM��ġ���ϴٿ�ε�";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button17
			// 
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button17->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button17->Location = System::Drawing::Point(416, 91);
			this->button17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(194, 35);
			this->button17->TabIndex = 20;
			this->button17->Text = L"Restart";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button13
			// 
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button13->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button13->Location = System::Drawing::Point(421, 399);
			this->button13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(194, 38);
			this->button13->TabIndex = 21;
			this->button13->Text = L"��ǰ�Ұ��ٿ�ε�";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button16
			// 
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button16->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button16->Location = System::Drawing::Point(997, 575);
			this->button16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(194, 34);
			this->button16->TabIndex = 22;
			this->button16->Text = L"BagFile�ٿ�ε�";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1014, 268);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 15);
			this->label2->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->Location = System::Drawing::Point(1035, 674);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(442, 17);
			this->label3->TabIndex = 24;
			this->label3->Text = L"������� 20%���ϸ� Fail, 20%�̻��̸� Success�� �Ǵ��մϴ�.";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// button18
			// 
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button18->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button18->Location = System::Drawing::Point(417, 164);
			this->button18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(197, 31);
			this->button18->TabIndex = 25;
			this->button18->Text = L"3DMap�߰�(fbx + xodr)";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button19->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button19->Location = System::Drawing::Point(421, 246);
			this->button19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(194, 32);
			this->button19->TabIndex = 26;
			this->button19->Text = L"����������";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button20->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button20->Location = System::Drawing::Point(718, 248);
			this->button20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(194, 32);
			this->button20->TabIndex = 27;
			this->button20->Text = L"ȣ����ķ�۽�";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button21->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button21->Location = System::Drawing::Point(138, 306);
			this->button21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(194, 32);
			this->button21->TabIndex = 28;
			this->button21->Text = L"���꼱����";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button22->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button22->Location = System::Drawing::Point(421, 307);
			this->button22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(194, 32);
			this->button22->TabIndex = 29;
			this->button22->Text = L"������б�����б�";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button23->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button23->Location = System::Drawing::Point(718, 308);
			this->button23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(194, 35);
			this->button23->TabIndex = 30;
			this->button23->Text = L"���ϴ��б�ķ�۽�";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button24->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button24->Location = System::Drawing::Point(718, 400);
			this->button24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(194, 38);
			this->button24->TabIndex = 31;
			this->button24->Text = L"Carla Simulator ��ġ";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button25->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button25->Location = System::Drawing::Point(997, 402);
			this->button25->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(195, 32);
			this->button25->TabIndex = 32;
			this->button25->Text = L"PackageInstall";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button26->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button26->Location = System::Drawing::Point(997, 308);
			this->button26->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(194, 34);
			this->button26->TabIndex = 33;
			this->button26->Text = L"SampleTownMap";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button27->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button27->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button27->Location = System::Drawing::Point(1253, 402);
			this->button27->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(194, 32);
			this->button27->TabIndex = 34;
			this->button27->Text = L"PackageRemove";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button28->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button28->Location = System::Drawing::Point(720, 165);
			this->button28->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(194, 31);
			this->button28->TabIndex = 35;
			this->button28->Text = L"������ȯ����";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button2->Location = System::Drawing::Point(1253, 571);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(194, 39);
			this->button2->TabIndex = 42;
			this->button2->Text = L"���������򰡿뵥���;��ε�";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button9
			// 
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button9->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button9->Location = System::Drawing::Point(1253, 308);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(194, 34);
			this->button9->TabIndex = 43;
			this->button9->Text = L"OpenDriveViewer";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
			// 
			// button29
			// 
			this->button29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button29->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button29->Location = System::Drawing::Point(996, 248);
			this->button29->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(194, 32);
			this->button29->TabIndex = 44;
			this->button29->Text = L"���½ó���������";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click_1);
			// 
			// button30
			// 
			this->button30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button30->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button30->Location = System::Drawing::Point(1253, 248);
			this->button30->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(194, 32);
			this->button30->TabIndex = 45;
			this->button30->Text = L"xodr�ùķ��̼�";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button31->Font = (gcnew System::Drawing::Font(L"G���� �꽺 Medium", 7));
			this->button31->Location = System::Drawing::Point(996, 165);
			this->button31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(194, 31);
			this->button31->TabIndex = 46;
			this->button31->Text = L"������ġ����";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1487, 732);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"OperaSIM";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "Carla�ùķ����͸� �����մϴ�", "OperaSIM", MB_OK);
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("SimulationStart.bat");

	}


	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// carla �ùķ����� ���� �� ���� ����
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "�ó��������� ������� �ùķ��̼� �� �� �ֽ��ϴ�", "OperaSIM", MB_OKCANCEL);
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("ScenarioSimulation.bat");
	}

	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "Carla�ùķ����͸� ���⵿ �մϴ�", "OperaSIM", MB_OK);
		system("taskkill /im CarlaUE4.exe");
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor");
		system("CarlaUE4");
	}

	private: System::Void eventLog1_EntryWritten(System::Object^ sender, System::Diagnostics::EntryWrittenEventArgs^ e) {
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "���������򰡽ý��� ���������� �����մϴ�", "OperaSIM", MB_OK);
		ShellExecuteA(NULL, "open", "http://springgo.ai:8089", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Data Annotation Tool �ٿ�ε� �� ���� --> Label-Studio ����
		system("mkdir OperaSIMAnnotation");
		/*������������ġ : /label-studio/data/export*/
		/*��Ŀ �ٿ�ε� �� ��ġ*/
		MessageBoxA(NULL, "��Ŀ�� ��ġ�Ͻ� �� ������ �ֽñ� �ٶ��ϴ� - �ٿ�ε帵ũ : https://desktop.docker.com/win/main/amd64/Docker%20Desktop%20Installer.exe", "OperaSIM", MB_OK);
		system("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/OperaSIMAnnotation/Docker%20Desktop%20Installer.exe");
		system("docker run -it -p 8080:8080 -v C:/Users/user/Downloads/vplan/project01/Project1/Project1/OperaSIMAnnotation:/label-studio/data heartexlabs/label-studio:latest label-studio --log-level DEBUG");
		ShellExecuteA(NULL, "open", "http://localhost:8080", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		//���� �߰����·� 3DMap File Upload
		MessageBoxA(NULL, "RoadRunner���� ���� fbx�� xodr������ input ���͸��� �־��ּ���!", "OperaSIM", MB_OKCANCEL);
		system("git clone https://github.com/carla-simulator/carla.git");
		chdir("carla/Util/Docker");
		system("mkdir input output");
		system("pip install docker");
		system("python3 docker_tools.py --input carla/Util/Docker/input --output carla/Util/Docker/output --packages map_package");
	}


	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "�ùķ��̼ǿ� ���� ��������͸� ǥ���մϴ�", "OperaSIM", MB_OKCANCEL);
	}

	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "���� �غ��� �Դϴ�", "OperaSIM", MB_OKCANCEL);
	}

	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "���������� �ùķ��̼� ������ ��ȯ�մϴ�", "OperaSIM", MB_OKCANCEL);
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("ExchangeMap_yeosu.bat");
		MessageBoxA(NULL, "���������� �ùķ��̼����� ��ȯ �Ϸ� �Ǿ����ϴ�.", "OperaSIM", MB_OKCANCEL);
	}

	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "ȣ�����б� �ùķ��̼� ������ ��ȯ�մϴ�.", "OperaSIM", MB_OKCANCEL);
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("ExchangeMap_honamUniv.bat");
		MessageBoxA(NULL, "ȣ�����б� �ùķ��̼����� ��ȯ �Ϸ� �Ǿ����ϴ�.", "OperaSIM", MB_OKCANCEL);
	}

	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "���꼱���� �ùķ��̼� ������ ��ȯ�մϴ�.", "OperaSIM", MB_OKCANCEL);
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("ExchangeMap_sunyoodo.bat");
		MessageBoxA(NULL, "���꼱���� �ùķ��̼����� ��ȯ �Ϸ� �Ǿ����ϴ�.", "OperaSIM", MB_OKCANCEL);
	}

	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "���ϴ��б� �ùķ��̼� ������ ��ȯ�մϴ�.", "OperaSIM", MB_OKCANCEL);
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("ExchangeMap_jbnu.bat");
		MessageBoxA(NULL, "���ϴ��б� �ùķ��̼����� ��ȯ �Ϸ� �Ǿ����ϴ�.", "OperaSIM", MB_OKCANCEL);
	}

	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "���赵�м�ȭ�������̵��մϴ�, �ùķ��̼� ����� ���赵�м��� ����� ������� Dockerfile�� �����մϴ�", "OperaSIM", MB_OK);
		system("C:/Users/user/source/repos/ADRiskapp/ADRiskapp/bin/Debug/netcoreapp3.1/ADRiskApp.exe");
	}

	private: System::Void folderBrowserDialog1_HelpRequest(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		//sample �ùķ��̼� ����
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("AutoSimulation.bat");
	}


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "�ùķ����͸� ���� ���������͸� �����մϴ�,�ùķ��̼� ȭ���� �߸� PŰ -> RŰ�� ���� �� 1������ 9���� ���ʷ� ������ ���� �����͸� �����Ͻ� �� �ֽ��ϴ�", "OperaSIM", MB_OKCANCEL);
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("GetSensorData.bat");
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "������ ���Ͽ� Annotation Tool�� ���������͸� �����մϴ�", "OperaSIM", MB_OKCANCEL);
		/*�������������*/
		/*
		������� : C:\Users\user\Downloads\vplan\project01\Project1\Project1\WindowsNoEditor\PythonAPI\examples\_out
		�̵���� : C:\Users\user\Downloads\vplan\project01\Project1\Project1\OperaSIMAnnotation\media\upload
		*/
		system("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/_out/SensorDataMove.bat");
	}

	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "3DMap�� �߰����ּ���(input �����ȿ� �ε巯�� ��� ������ fbx �� xodr ������ �־�� �մϴ�)", "OperaSIM", MB_OKCANCEL);

	}


	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "case��� �ó������� �����մϴ�", "OperaSIM", MB_OKCANCEL);
		/* C:\Users\user\Downloads\vplan\project01\Project1\Project1\scenariogeneration\SCENARIO\xosc */
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/scenariogeneration/SCENARIO/xosc");
		system("python Acceleration_condition.py");
		system("python catalog_example.py");
		system("python CCRb.py");
		system("python CCRm.py");
		system("python CCRs.py");
		system("python end_of_raod_reset_traffic.py");
		system("python generate_from_main.py");
		system("python generate_with_fixed_parameter_sets.py");
		system("python generate_with_permutations.py");
		system("python multi_conditional_and_triggers.py");
		system("python multi_conditional_different_actions.py");
		system("python multi_conditional_or_triggers.py");
		system("python multiple_maneuvers.py");
		system("python one_action_example.py");
		system("python parallel_distance_actions.py");
		system("python ParameterValueDistribution.py");
		system("python route_in_crossing.py");
		system("python Speed_condition.py");
		system("python Stop_on_offroad.py");
		system("python syncronize_straight_example.py");
		system("python trajectory_example.py");
		system("python withcontoller.py");
		system("python generate_from_main_8lines.py");
		system("python generate_from_main_6lines.py");
		system("python generate_from_main_left2_right4_lines.py");
		system("python CCRs_acc_30.py");
		system("python CCRm_acc_30.py");
		system("python CCRb_acc_30.py");
		MessageBoxA(NULL, "xosc �ó����� �����Ϸ�", "OperaSIM", MB_OKCANCEL);
	}

	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "������ ���� �����͸� �ٿ�ε� �մϴ�", "OperaSIM", MB_OKCANCEL);
	}


	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("CarlaAutoInstall.bat");
		MessageBoxA(NULL, "OperaSIM ������ ���� Carla ��ġ�� �����մϴ�.", "OperaSIM", MB_OKCANCEL);
	}


	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		//Carla ���� PackageInstall
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("CarlaAutoInstall.bat");
		std::string filename = "requirements.txt";
		std::string command = "pip install -r";
		command += filename;
		system(command.c_str());
	}


	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "�ùķ��̼� �⺻ ���� �Դϴ�(TownMap).", "OperaSIM", MB_OKCANCEL);
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("ExchangeMap_Town.bat");
		MessageBoxA(NULL, "�ùķ��̼� �⺻ ������ ��ȯ�� �Ϸ�Ǿ����ϴ�.", "OperaSIM", MB_OKCANCEL);
	}


	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		//��Ű�� ����
		std::string filename = "requirements.txt";
		std::string command = "pip uninstall -r";
		command += filename;
		system(command.c_str());
	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		//fbx , xodr ���� ������� �ùķ����� ������ Map ���� ������ �۾� ����
		MessageBoxA(NULL, "���� ��ȯ�۾��� �����մϴ�, ��ȯ�۾� ���� input ���͸��� fbx�� xodr ������ �־�� �۾��� ����˴ϴ�", "OperaSIM", MB_OK);
		MessageBoxA(NULL, "�����쿡 ��Ŀ�� ��ġ�Ǿ� ���� ������ ��ȯ�۾��� ������� �ʽ��ϴ�", "OperaSIM", MB_OK);
		/*Current Directory : C:\Users\user\Downloads\vplan\project01\Project1\Project1*/
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("CarlaMapAutoUpload.bat");
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "�������� �����ϱ� ���� �ùķ����� ���� ��ġ�մϴ�", "OperaSIM", MB_OK);
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("CarlaAutoInstall.bat");
	}

	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "�����򰡸� ���� ���������Ϳ� �������� ���ε� �մϴ�(������)", "OperaSIM", MB_OK);

	}

	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e) {
		/*OpenDrive Viewer
		odr::OpenDriveMap odr_map("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/yeosu.xodr");

		for (odr::Road road : odr_map.get_roads())
			std::cout << "road: " << road.id << "length:" << road.length << std::endl;

		odr::Road odr_road = odr_map.id_to_road.at("508");
		odr::Vec3D pt_xyz = odr_road.get_xyz(2.1, 1.0, 0.0);

		std::string lane_type = odr_road.get_lanesection(0.0).id_to_lane.at(-1).type;

		odr::RoutingGraph routing_graph = odr_map.get_routing_graph();
		odr::LaneKey from("516", 0.0, 1);
		odr::LaneKey to("501", 0.0, -1);
		std::vector<odr::LaneKey> path = routing_graph.shortest_path(from, to);
	*/
	}

	private: System::Void button29_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//���½ó���������
		//filename = "C:/Users/user/Downloads/�������ߺ���/Ʈ���̽�Ʈ�δ�/yesoumap_openscenario.xosc"	/*
		/*
			date = "2022-11-24T09:39:46"
			description = "SCENARIO-ARCHITECT"
			LogicFile filepath = "../Databases/yeosu_utf8.xodr" /
			Sun azimuth = "5.4" elevation = "0.9" intensity = "100000"
		*/
		/*
		int main()
			{
				ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/yesoumap_openscenario.xosc");
				string insert_date;
				std::cout << "��¥�� �ð��� �Է��� �ּ���";
				std::cin >> insert_date;
				std::string line;
				if (fin.find(insert_date) == std::string::npos)
					std::cout << "�ش� ���Ͽ� ���ڿ��� �����ϴ�" << std::endl;
				else:
				fin.replace(pos, insert_date.length(), %insert_date%)
			}
			{
				ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/yesoumap_openscenario.xosc");
				string description;
				std::cout << "������ �Է��� �ּ���";
				std::cin >> description;
				std::string line;
				if (fin.find(insert_description) == std::string::npos)
					std::cout << "�ش� ���Ͽ� ���ڿ��� �����ϴ�" << std::endl;
				else:
				fin.replace(pos, insert_description.length(), % description%)
			}
			{
				ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/yesoumap_openscenario.xosc");
				string filepath;
				std::cout << "xodr���� ��θ� �Է��� �ּ���";
				std::cin >> filepath;
				std::string line;
				if (fin.find(insert_xodr_file_path) == std::string::npos)
					std::cout << "�ش� ���Ͽ� ���ڿ��� �����ϴ�" << std::endl;
				else:
				fin.replace(pos, insert_xodr_file_path.length(), % filepath%)
			}
			{
				ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/yesoumap_openscenario.xosc");
				string azimuth;
				std::cout << "�¾��� �������� �Է��� �ּ���";
				std::cin >> azimuth;
				std::string line;
				if (fin.find(insert_azimuth) == std::string::npos)
					std::cout << "�ش� ���Ͽ� ���ڿ��� �����ϴ�" << std::endl;
				else:
				fin.replace(pos, insert_azimuth.length(), % azimuth%)
			}
			{
				ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/yesoumap_openscenario.xosc");
				string elevation;
				std::cout << "�¾��� ���̸� �Է��� �ּ���";
				std::cin >> elevation;
				std::string line;
				if (fin.find(insert_elevation) == std::string::npos)
					std::cout << "�ش� ���Ͽ� ���ڿ��� �����ϴ�" << std::endl;
				else:
				fin.replace(pos, insert_elevation.length(), % elevation%)
			}
			{
				ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/yesoumap_openscenario.xosc");
				string intensitry;
				std::cout << "�¾��� ������ �Է��� �ּ���";
				std::cin >> intensitry;
				std::string line;
				if (fin.find(insert_intensity) == std::string::npos)
					std::cout << "�ش� ���Ͽ� ���ڿ��� �����ϴ�" << std::endl;
				else:
				fin.replace(pos, insert_intensity.length(), % intensity%)
			}
			*/


			//std::ifstream fin("C:/Users/user/Downloads/�������ߺ���/Ʈ���̽�Ʈ�δ�/yesoumap_openscenario.xosc");
			//std::ofstream fout("C:/Users/user/Downloads/�������ߺ���/Ʈ���̽�Ʈ�δ�/yesoumap_openscenario.xosc" + ".replace")
	}
	private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
		//xodr ���ϱ�� �ùķ��̼�
		/*
		1. osm ���� �ٿ�ε�
		2. xodr ���� ��ȯ
		3. xodr ������ �ε��Ͽ� �ùķ��̼�
		*/
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("xodrCreate.bat");
	}


	private:System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
			//lidar raycast setting
			ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/manual_control_for_sensor.py");
			string lidar_raycast_range;
			system("C:/anaconda3/Scripts/activate.bat");
			system("conda activate vplan03");
			std::cout << "���̴� raycast ������ �Է��� �ּ���";
			std::cin >> lidar_raycast_range;
			std::string line;
			if (fin.find(lidar_raycast_range) == std::string::npos)
				std::cout << "�ش� ���Ͽ� ���ڿ��� �����ϴ�" << std::endl;
			else:
			fin.replace(pos, lidar_raycast_range.length(), % lidar_raycast_range%);
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor");
			system("CarlaUE4");
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
			system("python manual_control_for_sensor.py");

			//camera_x_position
			ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/manual_control_for_sensor.py");
			string camera_manager_z_position;
			std::cout << "ī�޶��� x��ġ�� �Է��� �ּ���";
			std::cin >> camera_manager_z_position;
			std::string line;
			if (fin.find(camera_manager_z_position) == std::string::npos)
				std::cout << "�ش� ���Ͽ� ���ڿ��� �����ϴ�" << std::endl;
			else:
			fin.replace(pos, camera_manager_z_position.length(), % camera_manager_z_position%);
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor");
			system("CarlaUE4");
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
			system("python manual_control_for_sensor.py");

			ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/manual_control_for_sensor.py");
			string camera_manager_y_position;
			std::cout << "ī�޶��� y��ġ�� �Է��� �ּ���";
			std::cin >> camera_manager_y_position;
			std::string line;
			if (fin.find(camera_manager_y_position) == std::string::npos)
				std::cout << "�ش� ���Ͽ� ���ڿ��� �����ϴ�" << std::endl;
			else:
			fin.replace(pos, camera_manager_y_position.length(), % camera_manager_y_position%);
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor");
			system("CarlaUE4");
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
			system("python manual_control_for_sensor.py");

			ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/manual_control_for_sensor.py");
			string camera_manager_z_position;
			std::cout << "ī�޶��� z��ġ�� �Է��� �ּ���";
			std::cin >> camera_manager_z_position;
			std::string line;
			if (fin.find(camera_manager_z_position) == std::string::npos)
				std::cout << "�ش� ���Ͽ� ���ڿ��� �����ϴ�" << std::endl;
			else:
			fin.replace(pos, camera_manager_z_position.length(), % camera_manager_z_position%);
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor");
			system("CarlaUE4");
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
			system("python manual_control_for_sensor.py");

			//radar_x_position_setting
			ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/manual_control_for_sensor.py");
			string radar_x_position;
			std::cout << "���̴��� x��ġ�� �Է��� �ּ���";
			std::cin >> radar_x_position;
			std::string line;
			if (fin.find(radar_x_position) == std::string::npos)
				std::cout << "�ش� ���Ͽ� ���ڿ��� �����ϴ�" << std::endl;
			else:
			fin.replace(pos, radar_x_position.length(), %radar_x_position%);
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor");
			system("CarlaUE4");
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
			system("python manual_control_for_sensor.py");


			//radar_y_position_setting
			ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/manual_control_for_sensor.py");
			string radar_y_position;
			std::cout << "���̴��� y��ġ�� �Է��� �ּ���";
			std::cin >> radar_y_position;
			std::string line;
			if (fin.find(radar_y_position) == std::string::npos)
				std::cout << "�ش� ���Ͽ� ���ڿ��� �����ϴ�" << std::endl;
			else:
			fin.replace(pos, radar_y_position.length(), % radar_y_position%);
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor");
			system("CarlaUE4");
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
			system("python manual_control_for_sensor.py");

			//radar_z_position_setting
			ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/manual_control_for_sensor.py");
			string radar_z_position;
			std::cout << "���̴��� x��ġ�� �Է��� �ּ���";
			std::cin >> radar_z_position;
			std::string line;
			if (fin.find(radar_z_position) == std::string::npos)
				std::cout << "�ش� ���Ͽ� ���ڿ��� �����ϴ�" << std::endl;
			else:
			fin.replace(pos, radar_z_position.length(), % radar_z_position%);
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor");
			system("CarlaUE4");
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
			system("python manual_control_for_sensor.py");
		}
};