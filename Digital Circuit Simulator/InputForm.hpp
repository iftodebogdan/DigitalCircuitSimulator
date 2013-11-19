#pragma once
#include <stdio.h>
#include <Windows.h>

namespace DigitalCircuitSimulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for InputForm
	/// </summary>
	public ref class InputForm : public System::Windows::Forms::Form
	{
	public:
		ref struct tGate {
			String^ index;
			String^ func;
			String^ input1;
			String^ input2;
			String^ output;

			tGate() {
				index = gcnew String(L"");
				func = gcnew String(L"");
				input1 = gcnew String(L"");
				input2 = gcnew String(L"");
				output = gcnew String(L"");
			}
		};

	public:
		InputForm(int inputCount, int outputCount, int gateCount, array<tGate^>^ gateParser)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			m_inputCount = inputCount;
			m_outputCount = outputCount;
			m_gateCount = gateCount;
			m_gateParser = gateParser;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~InputForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown9;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown10;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown11;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown12;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown13;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown14;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown15;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown16;
	private: array<System::Windows::Forms::Label^>^ labelArray;
	private: array<System::Windows::Forms::NumericUpDown^>^ numericUpDownArray;
	private: int m_inputCount, m_outputCount, m_gateCount;
	private: array<tGate^>^ m_gateParser;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown12 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown13 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown14 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown15 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown16 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown16))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Input 1:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(142, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Input 2:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Input 3:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(142, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Input 4:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 66);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Input 5:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(142, 66);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Input 6:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 92);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Input 7:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(142, 92);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Input 8:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 117);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Input 9:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(135, 118);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 13);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Input 10:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 144);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 13);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Input 11:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(135, 144);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Input 12:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 170);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(49, 13);
			this->label13->TabIndex = 13;
			this->label13->Text = L"Input 13:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(135, 170);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(49, 13);
			this->label14->TabIndex = 14;
			this->label14->Text = L"Input 14:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 196);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(49, 13);
			this->label15->TabIndex = 15;
			this->label15->Text = L"Input 15:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(136, 196);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(49, 13);
			this->label16->TabIndex = 16;
			this->label16->Text = L"Input 16:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(110, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Run";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InputForm::button1_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(62, 11);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(40, 20);
			this->numericUpDown1->TabIndex = 17;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &InputForm::numericUpDown1_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(191, 11);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(40, 20);
			this->numericUpDown2->TabIndex = 18;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &InputForm::numericUpDown2_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(62, 37);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(40, 20);
			this->numericUpDown3->TabIndex = 19;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &InputForm::numericUpDown3_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(191, 37);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(40, 20);
			this->numericUpDown4->TabIndex = 20;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &InputForm::numericUpDown4_ValueChanged);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(62, 63);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(40, 20);
			this->numericUpDown5->TabIndex = 21;
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &InputForm::numericUpDown5_ValueChanged);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(191, 63);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(40, 20);
			this->numericUpDown6->TabIndex = 22;
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &InputForm::numericUpDown6_ValueChanged);
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(62, 89);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(40, 20);
			this->numericUpDown7->TabIndex = 23;
			this->numericUpDown7->ValueChanged += gcnew System::EventHandler(this, &InputForm::numericUpDown7_ValueChanged);
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(191, 89);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(40, 20);
			this->numericUpDown8->TabIndex = 24;
			this->numericUpDown8->ValueChanged += gcnew System::EventHandler(this, &InputForm::numericUpDown8_ValueChanged);
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Location = System::Drawing::Point(62, 115);
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(40, 20);
			this->numericUpDown9->TabIndex = 25;
			this->numericUpDown9->ValueChanged += gcnew System::EventHandler(this, &InputForm::numericUpDown9_ValueChanged);
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Location = System::Drawing::Point(191, 115);
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(40, 20);
			this->numericUpDown10->TabIndex = 26;
			this->numericUpDown10->ValueChanged += gcnew System::EventHandler(this, &InputForm::numericUpDown10_ValueChanged);
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->Location = System::Drawing::Point(62, 141);
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(40, 20);
			this->numericUpDown11->TabIndex = 27;
			this->numericUpDown11->ValueChanged += gcnew System::EventHandler(this, &InputForm::numericUpDown11_ValueChanged);
			// 
			// numericUpDown12
			// 
			this->numericUpDown12->Location = System::Drawing::Point(191, 141);
			this->numericUpDown12->Name = L"numericUpDown12";
			this->numericUpDown12->Size = System::Drawing::Size(40, 20);
			this->numericUpDown12->TabIndex = 28;
			this->numericUpDown12->ValueChanged += gcnew System::EventHandler(this, &InputForm::numericUpDown12_ValueChanged);
			// 
			// numericUpDown13
			// 
			this->numericUpDown13->Location = System::Drawing::Point(62, 167);
			this->numericUpDown13->Name = L"numericUpDown13";
			this->numericUpDown13->Size = System::Drawing::Size(40, 20);
			this->numericUpDown13->TabIndex = 29;
			this->numericUpDown13->ValueChanged += gcnew System::EventHandler(this, &InputForm::numericUpDown13_ValueChanged);
			// 
			// numericUpDown14
			// 
			this->numericUpDown14->Location = System::Drawing::Point(191, 167);
			this->numericUpDown14->Name = L"numericUpDown14";
			this->numericUpDown14->Size = System::Drawing::Size(40, 20);
			this->numericUpDown14->TabIndex = 30;
			this->numericUpDown14->ValueChanged += gcnew System::EventHandler(this, &InputForm::numericUpDown14_ValueChanged);
			// 
			// numericUpDown15
			// 
			this->numericUpDown15->Location = System::Drawing::Point(62, 193);
			this->numericUpDown15->Name = L"numericUpDown15";
			this->numericUpDown15->Size = System::Drawing::Size(40, 20);
			this->numericUpDown15->TabIndex = 31;
			this->numericUpDown15->ValueChanged += gcnew System::EventHandler(this, &InputForm::numericUpDown15_ValueChanged);
			// 
			// numericUpDown16
			// 
			this->numericUpDown16->Location = System::Drawing::Point(191, 193);
			this->numericUpDown16->Name = L"numericUpDown16";
			this->numericUpDown16->Size = System::Drawing::Size(40, 20);
			this->numericUpDown16->TabIndex = 32;
			this->numericUpDown16->ValueChanged += gcnew System::EventHandler(this, &InputForm::numericUpDown16_ValueChanged);
			// 
			// InputForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->ControlBox = false;
			this->Controls->Add(this->numericUpDown16);
			this->Controls->Add(this->numericUpDown15);
			this->Controls->Add(this->numericUpDown14);
			this->Controls->Add(this->numericUpDown13);
			this->Controls->Add(this->numericUpDown12);
			this->Controls->Add(this->numericUpDown11);
			this->Controls->Add(this->numericUpDown10);
			this->Controls->Add(this->numericUpDown9);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"InputForm";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Inputs";
			this->Load += gcnew System::EventHandler(this, &InputForm::InputForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown16))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown1->Value > 1)
					this->numericUpDown1->Value = 1;
			 }
private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown2->Value > 1)
					this->numericUpDown2->Value = 1;
		 }
private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown3->Value > 1)
					this->numericUpDown3->Value = 1;
		 }
private: System::Void numericUpDown4_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown4->Value > 1)
					this->numericUpDown4->Value = 1;
		 }
private: System::Void numericUpDown5_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown5->Value > 1)
					this->numericUpDown5->Value = 1;
		 }
private: System::Void numericUpDown6_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown6->Value > 1)
					this->numericUpDown6->Value = 1;
		 }
private: System::Void numericUpDown7_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown7->Value > 1)
					this->numericUpDown7->Value = 1;
		 }
private: System::Void numericUpDown8_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown8->Value > 1)
					this->numericUpDown8->Value = 1;
		 }
private: System::Void numericUpDown9_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown9->Value > 1)
					this->numericUpDown9->Value = 1;
		 }
private: System::Void numericUpDown10_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown10->Value > 1)
					this->numericUpDown10->Value = 1;
		 }
private: System::Void numericUpDown11_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown11->Value > 1)
					this->numericUpDown11->Value = 1;
		 }
private: System::Void numericUpDown12_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown12->Value > 1)
					this->numericUpDown12->Value = 1;
		 }
private: System::Void numericUpDown13_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown13->Value > 1)
					this->numericUpDown13->Value = 1;
		 }
private: System::Void numericUpDown14_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown14->Value > 1)
					this->numericUpDown14->Value = 1;
		 }
private: System::Void numericUpDown15_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown15->Value > 1)
					this->numericUpDown15->Value = 1;
		 }
private: System::Void numericUpDown16_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->numericUpDown16->Value > 1)
					this->numericUpDown16->Value = 1;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			
			char   psBuffer[128];
			FILE   *pPipe;

			TCHAR szFileName[MAX_PATH];
			GetModuleFileName( NULL, szFileName, MAX_PATH );

			String^ szCommand = gcnew String("");
			szCommand = String::Concat(szCommand, "\"", gcnew String(szFileName), "\"", " ", System::Convert::ToString(m_inputCount), " ", System::Convert::ToString(m_outputCount), " ", System::Convert::ToString(m_gateCount), " ");
			for(int i = 0; i < m_gateCount; i++)
				szCommand = String::Concat(szCommand, m_gateParser[i]->func, " ", m_gateParser[i]->input1, " ", m_gateParser[i]->input2, m_gateParser[i]->input2->Length ? " " : "", m_gateParser[i]->output, " ");
			for(int i = 1; i <= m_inputCount; i++)
				szCommand = String::Concat(szCommand, numericUpDownArray[i]->Text, i != m_inputCount ? " " : "");

			char* szExecute = (char*)(void*) Marshal::StringToHGlobalAnsi(szCommand);
			if( (pPipe = _popen( szExecute, "rt" )) == NULL )
				return;
			while(fgets(psBuffer, 128, pPipe))
				printf(psBuffer);
			if (feof( pPipe))
				_pclose( pPipe );

			this->Hide();
			MessageBox::Show(this, gcnew String(psBuffer), gcnew String(psBuffer));
			this->Close();
		}
private: System::Void InputForm_Load(System::Object^  sender, System::EventArgs^  e) {
			labelArray = gcnew array<System::Windows::Forms::Label^>(17);
			numericUpDownArray = gcnew array<System::Windows::Forms::NumericUpDown^>(17);

			labelArray[1] = this->label1;
			labelArray[2] = this->label2;
			labelArray[3] = this->label3;
			labelArray[4] = this->label4;
			labelArray[5] = this->label5;
			labelArray[6] = this->label6;
			labelArray[7] = this->label7;
			labelArray[8] = this->label8;
			labelArray[9] = this->label9;
			labelArray[10] = this->label10;
			labelArray[11] = this->label11;
			labelArray[12] = this->label12;
			labelArray[13] = this->label13;
			labelArray[14] = this->label14;
			labelArray[15] = this->label15;
			labelArray[16] = this->label16;

			numericUpDownArray[1] = this->numericUpDown1;
			numericUpDownArray[2] = this->numericUpDown2;
			numericUpDownArray[3] = this->numericUpDown3;
			numericUpDownArray[4] = this->numericUpDown4;
			numericUpDownArray[5] = this->numericUpDown5;
			numericUpDownArray[6] = this->numericUpDown6;
			numericUpDownArray[7] = this->numericUpDown7;
			numericUpDownArray[8] = this->numericUpDown8;
			numericUpDownArray[9] = this->numericUpDown9;
			numericUpDownArray[10] = this->numericUpDown10;
			numericUpDownArray[11] = this->numericUpDown11;
			numericUpDownArray[12] = this->numericUpDown12;
			numericUpDownArray[13] = this->numericUpDown13;
			numericUpDownArray[14] = this->numericUpDown14;
			numericUpDownArray[15] = this->numericUpDown15;
			numericUpDownArray[16] = this->numericUpDown16;

			
			for(int i = m_inputCount + 1; i <= 16; i++) {
				numericUpDownArray[i]->Visible = false;
				labelArray[i]->Visible = false;
			}

			this->button1->Top -= 25 * ((16 - m_inputCount) / 2);
			this->Height -= 25 * ((16 - m_inputCount) / 2);
			this->Top += (25 * ((16 - m_inputCount) / 2)) / 2;
		 }
};
}
