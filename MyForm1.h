#pragma once
//프로젝트 경로
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
	/// MyForm에 대한 요약입니다.
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
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
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
			this->button1->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
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
			this->button3->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button3->Location = System::Drawing::Point(139, 505);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(194, 39);
			this->button3->TabIndex = 2;
			this->button3->Text = L"인지성능평가시스템";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button4->Location = System::Drawing::Point(421, 508);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(194, 36);
			this->button4->TabIndex = 5;
			this->button4->Text = L"시나리오적용";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button5->Location = System::Drawing::Point(718, 508);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(194, 34);
			this->button5->TabIndex = 6;
			this->button5->Text = L"센서데이터수집";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
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
			this->button7->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button7->Location = System::Drawing::Point(997, 510);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(194, 34);
			this->button7->TabIndex = 8;
			this->button7->Text = L"센서데이터전송";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button8->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button8->Location = System::Drawing::Point(133, 162);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(194, 32);
			this->button8->TabIndex = 9;
			this->button8->Text = L"3DMap업로드";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->button10->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button10->Location = System::Drawing::Point(138, 570);
			this->button10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(194, 38);
			this->button10->TabIndex = 13;
			this->button10->Text = L"위험도분석시뮬레이션";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button11->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button11->Location = System::Drawing::Point(421, 570);
			this->button11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(194, 38);
			this->button11->TabIndex = 14;
			this->button11->Text = L"결과데이터보기";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button12->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button12->Location = System::Drawing::Point(718, 575);
			this->button12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(194, 34);
			this->button12->TabIndex = 15;
			this->button12->Text = L"멀티시나리오생성";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button14
			// 
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button14->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button14->Location = System::Drawing::Point(138, 245);
			this->button14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(194, 34);
			this->button14->TabIndex = 17;
			this->button14->Text = L"샘플시뮬레이션(여수)";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button15->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button15->Location = System::Drawing::Point(139, 401);
			this->button15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(193, 38);
			this->button15->TabIndex = 18;
			this->button15->Text = L"OperaSIM설치파일다운로드";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button17
			// 
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button17->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
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
			this->button13->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button13->Location = System::Drawing::Point(421, 399);
			this->button13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(194, 38);
			this->button13->TabIndex = 21;
			this->button13->Text = L"제품소개다운로드";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button16
			// 
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button16->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button16->Location = System::Drawing::Point(997, 575);
			this->button16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(194, 34);
			this->button16->TabIndex = 22;
			this->button16->Text = L"BagFile다운로드";
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
			this->label3->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->Location = System::Drawing::Point(1035, 674);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(442, 17);
			this->label3->TabIndex = 24;
			this->label3->Text = L"결과값이 20%이하면 Fail, 20%이상이면 Success로 판단합니다.";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// button18
			// 
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button18->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button18->Location = System::Drawing::Point(417, 164);
			this->button18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(197, 31);
			this->button18->TabIndex = 25;
			this->button18->Text = L"3DMap추가(fbx + xodr)";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button19->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button19->Location = System::Drawing::Point(421, 246);
			this->button19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(194, 32);
			this->button19->TabIndex = 26;
			this->button19->Text = L"여수엑스포";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button20->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button20->Location = System::Drawing::Point(718, 248);
			this->button20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(194, 32);
			this->button20->TabIndex = 27;
			this->button20->Text = L"호남대캠퍼스";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button21->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button21->Location = System::Drawing::Point(138, 306);
			this->button21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(194, 32);
			this->button21->TabIndex = 28;
			this->button21->Text = L"군산선유도";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button22->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button22->Location = System::Drawing::Point(421, 307);
			this->button22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(194, 32);
			this->button22->TabIndex = 29;
			this->button22->Text = L"서울과학기술대학교";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button23->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button23->Location = System::Drawing::Point(718, 308);
			this->button23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(194, 35);
			this->button23->TabIndex = 30;
			this->button23->Text = L"전북대학교캠퍼스";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button24->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button24->Location = System::Drawing::Point(718, 400);
			this->button24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(194, 38);
			this->button24->TabIndex = 31;
			this->button24->Text = L"Carla Simulator 설치";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button25->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
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
			this->button26->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
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
			this->button27->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
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
			this->button28->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button28->Location = System::Drawing::Point(720, 165);
			this->button28->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(194, 31);
			this->button28->TabIndex = 35;
			this->button28->Text = L"지도변환시작";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button2->Location = System::Drawing::Point(1253, 571);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(194, 39);
			this->button2->TabIndex = 42;
			this->button2->Text = L"인지성능평가용데이터업로드";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button9
			// 
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button9->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
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
			this->button29->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button29->Location = System::Drawing::Point(996, 248);
			this->button29->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(194, 32);
			this->button29->TabIndex = 44;
			this->button29->Text = L"오픈시나리오생성";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click_1);
			// 
			// button30
			// 
			this->button30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button30->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button30->Location = System::Drawing::Point(1253, 248);
			this->button30->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(194, 32);
			this->button30->TabIndex = 45;
			this->button30->Text = L"xodr시뮬레이션";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button31->Font = (gcnew System::Drawing::Font(L"G마켓 산스 Medium", 7));
			this->button31->Location = System::Drawing::Point(996, 165);
			this->button31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(194, 31);
			this->button31->TabIndex = 46;
			this->button31->Text = L"센서위치설정";
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
		MessageBoxA(NULL, "Carla시뮬레이터를 실행합니다", "OperaSIM", MB_OK);
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("SimulationStart.bat");

	}


	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// carla 시뮬레이터 실행 후 지도 변경
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "시나리오파일 기반으로 시뮬레이션 할 수 있습니다", "OperaSIM", MB_OKCANCEL);
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("ScenarioSimulation.bat");
	}

	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "Carla시뮬레이터를 제기동 합니다", "OperaSIM", MB_OK);
		system("taskkill /im CarlaUE4.exe");
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor");
		system("CarlaUE4");
	}

	private: System::Void eventLog1_EntryWritten(System::Object^ sender, System::Diagnostics::EntryWrittenEventArgs^ e) {
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "인지성능평가시스템 웹페이지로 접속합니다", "OperaSIM", MB_OK);
		ShellExecuteA(NULL, "open", "http://springgo.ai:8089", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Data Annotation Tool 다운로드 및 실행 --> Label-Studio 실행
		system("mkdir OperaSIMAnnotation");
		/*가공데이터위치 : /label-studio/data/export*/
		/*도커 다운로드 및 설치*/
		MessageBoxA(NULL, "도커를 설치하신 후 실행해 주시기 바랍니다 - 다운로드링크 : https://desktop.docker.com/win/main/amd64/Docker%20Desktop%20Installer.exe", "OperaSIM", MB_OK);
		system("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/OperaSIMAnnotation/Docker%20Desktop%20Installer.exe");
		system("docker run -it -p 8080:8080 -v C:/Users/user/Downloads/vplan/project01/Project1/Project1/OperaSIMAnnotation:/label-studio/data heartexlabs/label-studio:latest label-studio --log-level DEBUG");
		ShellExecuteA(NULL, "open", "http://localhost:8080", NULL, NULL, SW_SHOWNORMAL);
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		//파일 추가형태로 3DMap File Upload
		MessageBoxA(NULL, "RoadRunner에서 만든 fbx와 xodr파일을 input 디렉터리에 넣어주세요!", "OperaSIM", MB_OKCANCEL);
		system("git clone https://github.com/carla-simulator/carla.git");
		chdir("carla/Util/Docker");
		system("mkdir input output");
		system("pip install docker");
		system("python3 docker_tools.py --input carla/Util/Docker/input --output carla/Util/Docker/output --packages map_package");
	}


	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "시뮬레이션에 대한 결과데이터를 표출합니다", "OperaSIM", MB_OKCANCEL);
	}

	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "지도 준비중 입니다", "OperaSIM", MB_OKCANCEL);
	}

	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "여수엑스포 시뮬레이션 지도로 변환합니다", "OperaSIM", MB_OKCANCEL);
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("ExchangeMap_yeosu.bat");
		MessageBoxA(NULL, "여수엑스포 시뮬레이션으로 변환 완료 되었습니다.", "OperaSIM", MB_OKCANCEL);
	}

	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "호남대학교 시뮬레이션 지도로 변환합니다.", "OperaSIM", MB_OKCANCEL);
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("ExchangeMap_honamUniv.bat");
		MessageBoxA(NULL, "호남대학교 시뮬레이션으로 변환 완료 되었습니다.", "OperaSIM", MB_OKCANCEL);
	}

	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "군산선유도 시뮬레이션 지도로 변환합니다.", "OperaSIM", MB_OKCANCEL);
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("ExchangeMap_sunyoodo.bat");
		MessageBoxA(NULL, "군산선유도 시뮬레이션으로 변환 완료 되었습니다.", "OperaSIM", MB_OKCANCEL);
	}

	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "전북대학교 시뮬레이션 지도로 변환합니다.", "OperaSIM", MB_OKCANCEL);
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("ExchangeMap_jbnu.bat");
		MessageBoxA(NULL, "전북대학교 시뮬레이션으로 변환 완료 되었습니다.", "OperaSIM", MB_OKCANCEL);
	}

	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "위험도분석화면으로이동합니다, 시뮬레이션 기반의 위험도분석은 우분투 기반으로 Dockerfile을 제공합니다", "OperaSIM", MB_OK);
		system("C:/Users/user/source/repos/ADRiskapp/ADRiskapp/bin/Debug/netcoreapp3.1/ADRiskApp.exe");
	}

	private: System::Void folderBrowserDialog1_HelpRequest(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		//sample 시뮬레이션 여수
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("AutoSimulation.bat");
	}


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "시뮬레이터를 위한 센서데이터를 수집합니다,시뮬레이션 화면이 뜨면 P키 -> R키를 누른 후 1번부터 9번을 차례로 눌러서 센서 데이터를 수집하실 수 있습니다", "OperaSIM", MB_OKCANCEL);
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("GetSensorData.bat");
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "가공을 위하여 Annotation Tool로 센서데이터를 전송합니다", "OperaSIM", MB_OKCANCEL);
		/*데이터이전경로*/
		/*
		수집경로 : C:\Users\user\Downloads\vplan\project01\Project1\Project1\WindowsNoEditor\PythonAPI\examples\_out
		이동경로 : C:\Users\user\Downloads\vplan\project01\Project1\Project1\OperaSIMAnnotation\media\upload
		*/
		system("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/_out/SensorDataMove.bat");
	}

	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "3DMap을 추가해주세요(input 폴더안에 로드러너 등에서 추출한 fbx 와 xodr 파일이 있어야 합니다)", "OperaSIM", MB_OKCANCEL);

	}


	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "case기반 시나리오를 생성합니다", "OperaSIM", MB_OKCANCEL);
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
		MessageBoxA(NULL, "xosc 시나리오 생성완료", "OperaSIM", MB_OKCANCEL);
	}

	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "수집한 원본 데이터를 다운로드 합니다", "OperaSIM", MB_OKCANCEL);
	}


	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("CarlaAutoInstall.bat");
		MessageBoxA(NULL, "OperaSIM 실행을 위한 Carla 설치를 진행합니다.", "OperaSIM", MB_OKCANCEL);
	}


	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		//Carla 관련 PackageInstall
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("CarlaAutoInstall.bat");
		std::string filename = "requirements.txt";
		std::string command = "pip install -r";
		command += filename;
		system(command.c_str());
	}


	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "시뮬레이션 기본 지도 입니다(TownMap).", "OperaSIM", MB_OKCANCEL);
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("ExchangeMap_Town.bat");
		MessageBoxA(NULL, "시뮬레이션 기본 지도로 변환이 완료되었습니다.", "OperaSIM", MB_OKCANCEL);
	}


	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		//패키지 삭제
		std::string filename = "requirements.txt";
		std::string command = "pip uninstall -r";
		command += filename;
		system(command.c_str());
	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		//fbx , xodr 파일 기반으로 시뮬레에션 가능한 Map 으로 컴파일 작업 진행
		MessageBoxA(NULL, "지도 변환작업을 시작합니다, 변환작업 전에 input 디렉터리에 fbx와 xodr 파일이 있어야 작업이 진행됩니다", "OperaSIM", MB_OK);
		MessageBoxA(NULL, "윈도우에 도커가 설치되어 있지 않으면 변환작업이 진행되지 않습니다", "OperaSIM", MB_OK);
		/*Current Directory : C:\Users\user\Downloads\vplan\project01\Project1\Project1*/
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("CarlaMapAutoUpload.bat");
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "오페라심을 구동하기 위한 시뮬레이터 등을 설치합니다", "OperaSIM", MB_OK);
		chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
		system("CarlaAutoInstall.bat");
	}

	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "성능평가를 위한 센서데이터와 정답지를 업로드 합니다(개발중)", "OperaSIM", MB_OK);

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
		//오픈시나리오생성
		//filename = "C:/Users/user/Downloads/연구개발본부/트레이스트로닉/yesoumap_openscenario.xosc"	/*
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
				std::cout << "날짜와 시간을 입력해 주세요";
				std::cin >> insert_date;
				std::string line;
				if (fin.find(insert_date) == std::string::npos)
					std::cout << "해당 파일에 문자열이 없습니다" << std::endl;
				else:
				fin.replace(pos, insert_date.length(), %insert_date%)
			}
			{
				ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/yesoumap_openscenario.xosc");
				string description;
				std::cout << "설명을 입력해 주세요";
				std::cin >> description;
				std::string line;
				if (fin.find(insert_description) == std::string::npos)
					std::cout << "해당 파일에 문자열이 없습니다" << std::endl;
				else:
				fin.replace(pos, insert_description.length(), % description%)
			}
			{
				ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/yesoumap_openscenario.xosc");
				string filepath;
				std::cout << "xodr파일 경로를 입력해 주세요";
				std::cin >> filepath;
				std::string line;
				if (fin.find(insert_xodr_file_path) == std::string::npos)
					std::cout << "해당 파일에 문자열이 없습니다" << std::endl;
				else:
				fin.replace(pos, insert_xodr_file_path.length(), % filepath%)
			}
			{
				ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/yesoumap_openscenario.xosc");
				string azimuth;
				std::cout << "태양의 방위각을 입력해 주세요";
				std::cin >> azimuth;
				std::string line;
				if (fin.find(insert_azimuth) == std::string::npos)
					std::cout << "해당 파일에 문자열이 없습니다" << std::endl;
				else:
				fin.replace(pos, insert_azimuth.length(), % azimuth%)
			}
			{
				ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/yesoumap_openscenario.xosc");
				string elevation;
				std::cout << "태양의 높이를 입력해 주세요";
				std::cin >> elevation;
				std::string line;
				if (fin.find(insert_elevation) == std::string::npos)
					std::cout << "해당 파일에 문자열이 없습니다" << std::endl;
				else:
				fin.replace(pos, insert_elevation.length(), % elevation%)
			}
			{
				ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/yesoumap_openscenario.xosc");
				string intensitry;
				std::cout << "태양의 강도를 입력해 주세요";
				std::cin >> intensitry;
				std::string line;
				if (fin.find(insert_intensity) == std::string::npos)
					std::cout << "해당 파일에 문자열이 없습니다" << std::endl;
				else:
				fin.replace(pos, insert_intensity.length(), % intensity%)
			}
			*/


			//std::ifstream fin("C:/Users/user/Downloads/연구개발본부/트레이스트로닉/yesoumap_openscenario.xosc");
			//std::ofstream fout("C:/Users/user/Downloads/연구개발본부/트레이스트로닉/yesoumap_openscenario.xosc" + ".replace")
	}
	private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
		//xodr 파일기반 시뮬레이션
		/*
		1. osm 파일 다운로드
		2. xodr 파일 변환
		3. xodr 파일을 로드하여 시뮬레이션
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
			std::cout << "라이다 raycast 범위를 입력해 주세요";
			std::cin >> lidar_raycast_range;
			std::string line;
			if (fin.find(lidar_raycast_range) == std::string::npos)
				std::cout << "해당 파일에 문자열이 없습니다" << std::endl;
			else:
			fin.replace(pos, lidar_raycast_range.length(), % lidar_raycast_range%);
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor");
			system("CarlaUE4");
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
			system("python manual_control_for_sensor.py");

			//camera_x_position
			ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/manual_control_for_sensor.py");
			string camera_manager_z_position;
			std::cout << "카메라의 x위치를 입력해 주세요";
			std::cin >> camera_manager_z_position;
			std::string line;
			if (fin.find(camera_manager_z_position) == std::string::npos)
				std::cout << "해당 파일에 문자열이 없습니다" << std::endl;
			else:
			fin.replace(pos, camera_manager_z_position.length(), % camera_manager_z_position%);
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor");
			system("CarlaUE4");
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
			system("python manual_control_for_sensor.py");

			ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/manual_control_for_sensor.py");
			string camera_manager_y_position;
			std::cout << "카메라의 y위치를 입력해 주세요";
			std::cin >> camera_manager_y_position;
			std::string line;
			if (fin.find(camera_manager_y_position) == std::string::npos)
				std::cout << "해당 파일에 문자열이 없습니다" << std::endl;
			else:
			fin.replace(pos, camera_manager_y_position.length(), % camera_manager_y_position%);
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor");
			system("CarlaUE4");
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
			system("python manual_control_for_sensor.py");

			ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/manual_control_for_sensor.py");
			string camera_manager_z_position;
			std::cout << "카메라의 z위치를 입력해 주세요";
			std::cin >> camera_manager_z_position;
			std::string line;
			if (fin.find(camera_manager_z_position) == std::string::npos)
				std::cout << "해당 파일에 문자열이 없습니다" << std::endl;
			else:
			fin.replace(pos, camera_manager_z_position.length(), % camera_manager_z_position%);
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor");
			system("CarlaUE4");
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
			system("python manual_control_for_sensor.py");

			//radar_x_position_setting
			ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/manual_control_for_sensor.py");
			string radar_x_position;
			std::cout << "레이다의 x위치를 입력해 주세요";
			std::cin >> radar_x_position;
			std::string line;
			if (fin.find(radar_x_position) == std::string::npos)
				std::cout << "해당 파일에 문자열이 없습니다" << std::endl;
			else:
			fin.replace(pos, radar_x_position.length(), %radar_x_position%);
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor");
			system("CarlaUE4");
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
			system("python manual_control_for_sensor.py");


			//radar_y_position_setting
			ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/manual_control_for_sensor.py");
			string radar_y_position;
			std::cout << "레이다의 y위치를 입력해 주세요";
			std::cin >> radar_y_position;
			std::string line;
			if (fin.find(radar_y_position) == std::string::npos)
				std::cout << "해당 파일에 문자열이 없습니다" << std::endl;
			else:
			fin.replace(pos, radar_y_position.length(), % radar_y_position%);
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor");
			system("CarlaUE4");
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
			system("python manual_control_for_sensor.py");

			//radar_z_position_setting
			ifstream fin("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples/manual_control_for_sensor.py");
			string radar_z_position;
			std::cout << "레이다의 x위치를 입력해 주세요";
			std::cin >> radar_z_position;
			std::string line;
			if (fin.find(radar_z_position) == std::string::npos)
				std::cout << "해당 파일에 문자열이 없습니다" << std::endl;
			else:
			fin.replace(pos, radar_z_position.length(), % radar_z_position%);
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor");
			system("CarlaUE4");
			chdir("C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/examples");
			system("python manual_control_for_sensor.py");
		}
};