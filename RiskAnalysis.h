#pragma once

#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <Shellapi.h>
#include <tchar.h>
#include <commdlg.h>
#include <mciapi.h>
#include <rpcasync.h>
#include "C:\Users\user\Downloads\chilkat\chilkat-9.5.0-x86_64-vc2019\chilkat-9.5.0-x86_64-vc2019\include\CkUpload.h"


namespace Project03 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// RiskAnalysis에 대한 요약입니다.
	/// </summary>
	public ref class RiskAnalysis : public System::Windows::Forms::Form
	{
	public:
		RiskAnalysis(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~RiskAnalysis()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label8;

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RiskAnalysis::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(354, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1023, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"OperaSIM 위험도 분석은 EgoCar와 추종차(앞차) 사이의 안전거리를 측정/산출합니다, feedback 시간은 0.5초 고정, 앞차의 최대"
				L" 감가속도는 -5m/s 고정";
			this->label1->Click += gcnew System::EventHandler(this, &RiskAnalysis::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(445, 204);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 15);
			this->label2->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(582, 142);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(552, 333);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(791, 573);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(343, 25);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(620, 579);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 15);
			this->label3->TabIndex = 5;
			this->label3->Text = L"EgoCar최소감가속도";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(791, 614);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(343, 25);
			this->textBox3->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(623, 620);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 15);
			this->label4->TabIndex = 7;
			this->label4->Text = L"EgoCar속도";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(623, 660);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 15);
			this->label5->TabIndex = 9;
			this->label5->Text = L"EgoCar최대속도";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(791, 654);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(343, 25);
			this->textBox4->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(623, 697);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(152, 15);
			this->label6->TabIndex = 11;
			this->label6->Text = L"앞차의 최대 감가속도";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(791, 694);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(343, 25);
			this->textBox5->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(623, 742);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 15);
			this->label7->TabIndex = 13;
			this->label7->Text = L"앞차의속도";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(791, 739);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(343, 25);
			this->textBox6->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button1->Location = System::Drawing::Point(623, 787);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(511, 68);
			this->button1->TabIndex = 14;
			this->button1->Text = L"위험도분석 산출하기";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RiskAnalysis::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"맑은 고딕", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label8->Location = System::Drawing::Point(637, 95);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 25);
			this->label8->TabIndex = 15;
			this->label8->Click += gcnew System::EventHandler(this, &RiskAnalysis::label8_Click);
			// 
			// RiskAnalysis
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1863, 928);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RiskAnalysis";
			this->Text = L"RiskAnalysis";
			this->Load += gcnew System::EventHandler(this, &RiskAnalysis::RiskAnalysis_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RiskAnalysis_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBoxA(NULL, "앞차와의 최대 유지 안전거리는 xxxM 로 산출되었습니다", "OperaSIM", MB_OKCANCEL);
	}
	};
}
