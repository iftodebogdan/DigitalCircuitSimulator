#pragma once

#include "EditForm.hpp"
#include "IOForm.hpp"
#include "InputForm.hpp"

namespace DigitalCircuitSimulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ToolStripMenuItem^  gateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  removeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  removeToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  setupToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	protected: 
		int inputCount, outputCount, gateCount;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setupToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removeToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->removeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->fileToolStripMenuItem, 
				this->gateToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::exitToolStripMenuItem_Click);
			// 
			// gateToolStripMenuItem
			// 
			this->gateToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->setupToolStripMenuItem, 
				this->addToolStripMenuItem, this->toolStripSeparator1, this->removeToolStripMenuItem});
			this->gateToolStripMenuItem->Name = L"gateToolStripMenuItem";
			this->gateToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->gateToolStripMenuItem->Text = L"Edit";
			// 
			// setupToolStripMenuItem
			// 
			this->setupToolStripMenuItem->Name = L"setupToolStripMenuItem";
			this->setupToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->setupToolStripMenuItem->Text = L"Setup I/O devices";
			this->setupToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::setupToolStripMenuItem_Click);
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->addToolStripMenuItem1, 
				this->editToolStripMenuItem, this->removeToolStripMenuItem1});
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->addToolStripMenuItem->Text = L"Gate";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::addToolStripMenuItem_Click);
			// 
			// addToolStripMenuItem1
			// 
			this->addToolStripMenuItem1->Name = L"addToolStripMenuItem1";
			this->addToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->addToolStripMenuItem1->Text = L"Add";
			this->addToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::addToolStripMenuItem1_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->editToolStripMenuItem->Text = L"Edit";
			this->editToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::editToolStripMenuItem_Click);
			// 
			// removeToolStripMenuItem1
			// 
			this->removeToolStripMenuItem1->Name = L"removeToolStripMenuItem1";
			this->removeToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->removeToolStripMenuItem1->Text = L"Remove";
			this->removeToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::removeToolStripMenuItem1_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(163, 6);
			// 
			// removeToolStripMenuItem
			// 
			this->removeToolStripMenuItem->Name = L"removeToolStripMenuItem";
			this->removeToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->removeToolStripMenuItem->Text = L"Run Simulation";
			this->removeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::removeToolStripMenuItem_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4, this->columnHeader5});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listView1->FullRowSelect = true;
			this->listView1->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->listView1->Location = System::Drawing::Point(0, 24);
			this->listView1->Margin = System::Windows::Forms::Padding(4);
			this->listView1->Name = L"listView1";
			this->listView1->Scrollable = false;
			this->listView1->Size = System::Drawing::Size(284, 187);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ColumnWidthChanged += gcnew System::Windows::Forms::ColumnWidthChangedEventHandler(this, &MainForm::listView1_ColumnWidthChanged);
			this->listView1->ColumnWidthChanging += gcnew System::Windows::Forms::ColumnWidthChangingEventHandler(this, &MainForm::listView1_ColumnWidthChanging);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"#";
			this->columnHeader1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader1->Width = 25;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Function";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 70;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Input 1";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Input 2";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Output";
			this->columnHeader5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader5->Width = 65;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 211);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Digital Circuit Simulator";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->Shown += gcnew System::EventHandler(this, &MainForm::MainForm_Shown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }
	private: System::Void addToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void listView1_ColumnWidthChanged(System::Object^  sender, System::Windows::Forms::ColumnWidthChangedEventArgs^  e) {
		 }
private: System::Void listView1_ColumnWidthChanging(System::Object^  sender, System::Windows::Forms::ColumnWidthChangingEventArgs^  e) {
			 e->NewWidth = this->listView1->Columns[e->ColumnIndex]->Width;
			 e->Cancel = true;
		 }
private: System::Void addToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			if(this->gateCount == 8) {
				MessageBox::Show(this, "You can only add a maximum of 8 gates.", "Maximum number of gates reached");
				return;
			}

			this->gateCount++;

			EditForm^ child = gcnew EditForm(this->gateCount, this->gateCount, this->inputCount, this->outputCount);
			child->ControlBox = false;
			child->ShowDialog(this);

			if(child->hasData()) {
				ListViewItem^ item = gcnew ListViewItem(gcnew array<String^> { 
					child->getGateNumber(),
					child->getFunction(),
					child->getInput1(),
					child->getInput2(),
					child->getOutput() });
				listView1->Items->Add(item);
			}
			else
				this->gateCount--;

			child->Close();
		 }
private: void OpenIOForm() {
			 IOForm^ child = gcnew IOForm(inputCount, outputCount);
			 child->ControlBox = false;
			 child->ShowDialog(this);
			 this->inputCount = child->GetInputCount();
			 this->outputCount = child->GetOutputCount();
		 }
private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->gateCount = 0;
			 this->inputCount = 0;
			 this->outputCount = 0;
		 }
private: System::Void removeToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(!this->listView1->SelectedItems->Count) {
				 MessageBox::Show(this, "Please select at least one gate.", "No gates selected");
				 return;
			 }

			 while(this->listView1->SelectedItems->Count) {
				 this->listView1->SelectedItems[0]->Remove();
				 this->gateCount--;
			 }
			 for(int i=0; i<gateCount; i++) {
				 this->listView1->Items[i]->Text = (i+1).ToString();
			 }
		 }
private: System::Void setupToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpenIOForm();
		 }
private: System::Void editToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(!this->listView1->SelectedItems->Count) {
				 MessageBox::Show(this, "You must select exactly one gate.", "No or too many gates selected");
				 return;
			 }

			EditForm^ child = gcnew EditForm(System::Convert::ToInt32(this->listView1->SelectedItems[0]->Text), this->gateCount, this->inputCount, this->outputCount,
											 this->listView1->SelectedItems[0]->SubItems[1]->Text,
											 this->listView1->SelectedItems[0]->SubItems[2]->Text,
											 this->listView1->SelectedItems[0]->SubItems[3]->Text,
											 this->listView1->SelectedItems[0]->SubItems[4]->Text);
			child->ControlBox = false;
			child->ShowDialog(this);

			if(child->hasData()) {
				this->listView1->SelectedItems[0]->SubItems[0]->Text = child->getGateNumber();
				this->listView1->SelectedItems[0]->SubItems[1]->Text = child->getFunction();
				this->listView1->SelectedItems[0]->SubItems[2]->Text = child->getInput1();
				this->listView1->SelectedItems[0]->SubItems[3]->Text = child->getInput2();
				this->listView1->SelectedItems[0]->SubItems[4]->Text = child->getOutput();
			}

			child->Close();
		 }
private: System::Void MainForm_Shown(System::Object^  sender, System::EventArgs^  e) {
			 OpenIOForm();
		 }
private: void OpenInputForm(array<InputForm::tGate^>^ gateParser) {
			 InputForm^ child = gcnew InputForm(inputCount, outputCount, gateCount, gateParser);
			 child->ControlBox = false;
			 child->ShowDialog(this);
		 }
private: System::Void removeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			if(gateCount == 0 || inputCount == 0 || outputCount == 0)
				 MessageBox::Show(this, "To run the simulation, at least a gate, an input and an output must be added.", "No gates/inputs/outputs");
			else {
				array<InputForm::tGate^>^ gateParser = gcnew array<InputForm::tGate^>(8);
				for(int i = 0; i < 8; i++)
					gateParser[i] = gcnew InputForm::tGate;

				int iterator = -1;
				IEnumerator^ listView1Enum = this->listView1->Items->GetEnumerator();
				listView1Enum->Reset();
				while(listView1Enum->MoveNext()) {
					iterator++;
				
					IEnumerator^ listView1SubItemsEnum = ((ListViewItem^)(listView1Enum->Current))->SubItems->GetEnumerator();
					listView1SubItemsEnum->Reset();

					listView1SubItemsEnum->MoveNext();
					gateParser[iterator]->index = ((ListViewItem::ListViewSubItem^)(listView1SubItemsEnum->Current))->Text;

					listView1SubItemsEnum->MoveNext();
					gateParser[iterator]->func = ((ListViewItem::ListViewSubItem^)(listView1SubItemsEnum->Current))->Text;

					listView1SubItemsEnum->MoveNext();
					gateParser[iterator]->input1 = ((ListViewItem::ListViewSubItem^)(listView1SubItemsEnum->Current))->Text;

					listView1SubItemsEnum->MoveNext();
					gateParser[iterator]->input2 = ((ListViewItem::ListViewSubItem^)(listView1SubItemsEnum->Current))->Text;

					listView1SubItemsEnum->MoveNext();
					gateParser[iterator]->output = ((ListViewItem::ListViewSubItem^)(listView1SubItemsEnum->Current))->Text;
				}

				OpenInputForm(gateParser);
			}
		 }
};
}
