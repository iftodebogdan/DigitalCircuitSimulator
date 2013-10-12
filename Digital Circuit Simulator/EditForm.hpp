#pragma once

namespace DigitalCircuitSimulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditForm
	/// </summary>
	public ref class EditForm : public System::Windows::Forms::Form
	{
	private:
		int gateNumber, gateCount, inputCount, outputCount;
		String^ textFunction, ^textInput1, ^textInput2, ^textOutput;

	public:
		EditForm(int gateNumber, int gateCount, int inputCount, int outputCount)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->gateNumber = gateNumber;
			this->gateCount = gateCount;
			this->inputCount = inputCount;
			this->outputCount = outputCount;

			this->textFunction = nullptr;
			this->textInput1 = nullptr;
			this->textInput2 = nullptr;
			this->textOutput = nullptr;
		}

		EditForm(int gateNumber, int gateCount, int inputCount, int outputCount, String^ textFunction, String^ textInput1, String^ textInput2, String^ textOutput)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->gateNumber = gateNumber;
			this->gateCount = gateCount;
			this->inputCount = inputCount;
			this->outputCount = outputCount;

			this->textFunction = (String^)textFunction->Clone();
			this->textInput1 = (String^)textInput1->Clone();
			this->textInput2 = (String^)textInput2->Clone();
			this->textOutput = (String^)textOutput->Clone();
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;

	public:
		bool hasData() {
			if(	(this->comboBox1->Text->Length &&
				this->comboBox2->Text->Length &&
				this->comboBox3->Text->Length &&
				this->comboBox4->Text->Length) ||
				(this->comboBox1->Text->Length &&
				this->comboBox1->Text->CompareTo("NOT") == 0 &&
				this->comboBox2->Text->Length &&
				this->comboBox4->Text->Length) )
				return true;
			else
				return false;
		}
		String^ getGateNumber() {
			return this->label2->Text;
		}
		String^ getFunction() {
			return this->comboBox1->Text;
		}
		String^ getInput1() {
			return this->comboBox2->Text;
		}
		String^ getInput2() {
			return this->comboBox3->Text;
		}
		String^ getOutput() {
			return this->comboBox4->Text;
		}

	protected: 

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(197, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EditForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(116, 226);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &EditForm::button2_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Gate :";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(119, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Gate number";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(13, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Function :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(13, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 23);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Input 1 :";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(13, 115);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 23);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Input 2 :";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(13, 149);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 23);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Output :";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"AND", L"OR", L"NOT"});
			this->comboBox1->Location = System::Drawing::Point(119, 49);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &EditForm::comboBox1_TextChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(119, 83);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 9;
			this->comboBox2->TextChanged += gcnew System::EventHandler(this, &EditForm::comboBox2_TextChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(119, 117);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 10;
			this->comboBox3->TextChanged += gcnew System::EventHandler(this, &EditForm::comboBox3_TextChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(119, 151);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 21);
			this->comboBox4->TabIndex = 11;
			this->comboBox4->TextChanged += gcnew System::EventHandler(this, &EditForm::comboBox4_TextChanged);
			// 
			// EditForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->ControlBox = false;
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"EditForm";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Add Gate";
			this->Load += gcnew System::EventHandler(this, &EditForm::EditForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
		 }
private: System::Void EditForm_Load(System::Object^  sender, System::EventArgs^  e) {
			array<String^>^ inputItems = gcnew array<String^>(this->inputCount + this->gateNumber - 1);
			array<String^>^ outputItems = gcnew array<String^>(this->outputCount + 1);

			for(int i=0; i<this->inputCount + this->gateNumber - 1; i++)
				inputItems[i] = String::Concat(i < this->inputCount ? "Test" : "Gate", i < this->inputCount ? (i + 1).ToString() : (i - this->inputCount + 1).ToString());
			for(int i=0; i<this->outputCount + 1; i++)
				outputItems[i] = String::Concat(i < this->outputCount ? "Output" : "Gate", i < this->outputCount ? (i + 1).ToString() : this->gateNumber.ToString());

			this->comboBox2->Items->AddRange(inputItems);
			this->comboBox3->Items->AddRange(inputItems);
			this->comboBox4->Items->AddRange(outputItems);
			this->label2->Text = this->gateNumber.ToString();
			
			if(this->textFunction != nullptr)
				this->comboBox1->Text = this->textFunction;
			if(this->textInput1 != nullptr)
				this->comboBox2->Text = this->textInput1;
			if(this->textInput2 != nullptr)
				this->comboBox3->Text = this->textInput2;
			if(this->textOutput != nullptr)
				this->comboBox4->Text = this->textOutput;
		 }
private: System::Void comboBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(hasData())
				 this->button2->Enabled = true;
			 else
				 this->button2->Enabled = false;

			 if(this->comboBox1->Text->CompareTo("NOT") == 0) {
				 this->comboBox3->SelectedIndex = -1;
				 this->comboBox3->Enabled = false;
			 }
			 else
				 this->comboBox3->Enabled = true;
		 }
private: System::Void comboBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(hasData())
				 this->button2->Enabled = true;
			 else
				 this->button2->Enabled = false;

			 if(this->comboBox3->SelectedIndex == this->comboBox2->SelectedIndex)
				 if(this->comboBox3->SelectedIndex > -1)
					 this->comboBox3->SelectedIndex--;
		 }
private: System::Void comboBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(hasData())
				 this->button2->Enabled = true;
			 else
				 this->button2->Enabled = false;

			 if(this->comboBox2->SelectedIndex == this->comboBox3->SelectedIndex)
				 if(this->comboBox2->SelectedIndex > -1)
					 this->comboBox2->SelectedIndex--;
		 }
private: System::Void comboBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(hasData())
				 this->button2->Enabled = true;
			 else
				 this->button2->Enabled = false;
		 }
};
}
