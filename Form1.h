#pragma once
#include "Function.h"
#include <iostream>
#include <string> 
#include <sstream>

namespace KU {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  butRes;
	protected: 

	protected: 
	private: System::Windows::Forms::TextBox^  tbA;
	private: System::Windows::Forms::TextBox^  tbB;
	private: System::Windows::Forms::TextBox^  tbD;

	private: System::Windows::Forms::TextBox^  tbC;
	private: System::Windows::Forms::Label^  LRez;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->butRes = (gcnew System::Windows::Forms::Button());
			this->tbA = (gcnew System::Windows::Forms::TextBox());
			this->tbB = (gcnew System::Windows::Forms::TextBox());
			this->tbD = (gcnew System::Windows::Forms::TextBox());
			this->tbC = (gcnew System::Windows::Forms::TextBox());
			this->LRez = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// butRes
			// 
			this->butRes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->butRes->Location = System::Drawing::Point(111, 262);
			this->butRes->Name = L"butRes";
			this->butRes->Size = System::Drawing::Size(160, 35);
			this->butRes->TabIndex = 0;
			this->butRes->Text = L"Получить ответ";
			this->butRes->UseVisualStyleBackColor = true;
			this->butRes->Click += gcnew System::EventHandler(this, &Form1::butRes_Click);
			// 
			// tbA
			// 
			this->tbA->Location = System::Drawing::Point(78, 96);
			this->tbA->Name = L"tbA";
			this->tbA->Size = System::Drawing::Size(92, 20);
			this->tbA->TabIndex = 1;
			// 
			// tbB
			// 
			this->tbB->Location = System::Drawing::Point(78, 147);
			this->tbB->Name = L"tbB";
			this->tbB->Size = System::Drawing::Size(92, 20);
			this->tbB->TabIndex = 2;
			// 
			// tbD
			// 
			this->tbD->Location = System::Drawing::Point(216, 147);
			this->tbD->Name = L"tbD";
			this->tbD->Size = System::Drawing::Size(92, 20);
			this->tbD->TabIndex = 4;
			// 
			// tbC
			// 
			this->tbC->Location = System::Drawing::Point(216, 96);
			this->tbC->Name = L"tbC";
			this->tbC->Size = System::Drawing::Size(92, 20);
			this->tbC->TabIndex = 3;
			// 
			// LRez
			// 
			this->LRez->AutoSize = true;
			this->LRez->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->LRez->Location = System::Drawing::Point(119, 186);
			this->LRez->Name = L"LRez";
			this->LRez->Size = System::Drawing::Size(0, 20);
			this->LRez->TabIndex = 5;
			this->LRez->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(41, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"A=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(41, 145);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 20);
			this->label2->TabIndex = 7;
			this->label2->Text = L"B=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(179, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L"D=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(179, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"C=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(361, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Введите коэффициенты уравнения вида";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 45);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(234, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"A*x^3 + B*x^2 + C*x + D = 0:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(391, 325);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LRez);
			this->Controls->Add(this->tbD);
			this->Controls->Add(this->tbC);
			this->Controls->Add(this->tbB);
			this->Controls->Add(this->tbA);
			this->Controls->Add(this->butRes);
			this->Name = L"Form1";
			this->Text = L"Решение кубических уравнений";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void butRes_Click(System::Object^  sender, System::EventArgs^  e) {
	double A,B,C,D,x1,x2,x3; 
	x1=1; x2=0; x3=0;
	Proverka obj1;
	Resh obj2;
	string otvet;

   int n=2, m=3, i;
   double **masrez;
	masrez = new double*[n];
   for(i = 0; i < n; i++)
      masrez[i] = new double [m];

	A = Convert::ToDouble(tbA->Text);
	B = Convert::ToDouble(tbB->Text);
	C = Convert::ToDouble(tbC->Text);
	D = Convert::ToDouble(tbD->Text);

	if (obj1.PR(A)==0)

		LRez->Text="Коэффициент А \nне должен быть равен 0!";
	else{

	obj2.kard(A,B,C,D,masrez,n,m);
	std::stringstream stream;
    stream<<" X1 = "<<masrez[0][0]<<" + i* ("<<masrez[1][0]<<");"<<'\n'
		  <<" X2 = "<<masrez[0][1]<<" + i * ("<<masrez[1][1]<<");"<<'\n'
	      <<" X3 = "<<masrez[0][2]<<" + i * ("<<masrez[1][2]<<")";
	otvet=stream.str();
	System::String^ ot = gcnew System::String(otvet.c_str());
    LRez->Text=ot;
		
    for(i = 0; i < n; i++)
      delete []masrez[i];
	delete []masrez;
	}}
};
}

