#include "ViewResultPeople.h"
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <direct.h>
#pragma once

namespace CourseProject4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	/// <summary>
	/// Summary for ViewResultTest
	/// </summary>
	public ref class ViewResultTest : public System::Windows::Forms::Form
	{
	public:
		ViewResultTest(void)
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
		~ViewResultTest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->SuspendLayout();
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Location = System::Drawing::Point(963, -2);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(21, 765);
			this->vScrollBar1->TabIndex = 0;
			this->vScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &ViewResultTest::vScrollBar1_Scroll);
			// 
			// ViewResultTest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(984, 761);
			this->Controls->Add(this->vScrollBar1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"ViewResultTest";
			this->Text = L"ViewResultTest";
			this->Load += gcnew System::EventHandler(this, &ViewResultTest::ViewResultTest_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

		int files = 0;

		array<TableLayoutPanel^>^ Panel_arr;
		array<String^>^ Test_names;
		char* numbs;
		void CreateContainers() {
			Panel_arr = gcnew array<TableLayoutPanel^>(files);

			int tableposx = 200;
			int tableposy = 120;

			for (int i = 0; i < files; i++) {
				TableLayoutPanel^ table = gcnew TableLayoutPanel();
				table->Location = System::Drawing::Point(tableposx, tableposy);
				table->Size = System::Drawing::Size(635, 33);
				table->ColumnCount = 2;
				table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					50)));
				table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
					236)));
				table->RowCount = 1;
				table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
				table->TabIndex = i;
				table->BackColor = System::Drawing::Color::White;
				Label^ text_names_box = gcnew Label();
				text_names_box->Text = Test_names[i];
				table->Controls->Add(text_names_box, 0, 0);

				Button^ btn_start = gcnew Button();
				btn_start->BackColor = System::Drawing::Color::White;
				btn_start->ForeColor = System::Drawing::SystemColors::ControlText;
				btn_start->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				btn_start->TabIndex = i;
				btn_start->Text = L"����������� ����������";
				btn_start->Size = System::Drawing::Size(164, 27);

				table->Controls->Add(btn_start, 3, 0);
				btn_start->Click += gcnew EventHandler(this, &ViewResultTest::btn_start_Click);


				this->Controls->Add(table);

				Panel_arr[i] = table;

				tableposy += 50;
			}
		}

		void GetNameofTests() {
			Test_names = gcnew array<String^>(files);

			char* temp_path = getenv("TEMP");
			char dir_name[255];
			sprintf(dir_name, "%s\\Testify\\Questions", temp_path);

			struct dirent* de;

			DIR* dr = opendir(dir_name);

			if (dr == NULL) {
				this->Close();
			}
			int i = 0;
			while ((de = readdir(dr)) != NULL) {
				String^ tested = gcnew String(de->d_name);
				if (tested == "." || tested == "..") {

				}
				else {
					Test_names[i] = gcnew String(de->d_name);
					i++;
				}
			}
		}



		int CheckDirectory() {
			int g = 0;

			char* temp_path = getenv("TEMP");
			char dir_name[255];
			sprintf(dir_name, "%s\\Testify\\Questions", temp_path);

			struct dirent* de;

			DIR* dr = opendir(dir_name);

			if (dr == NULL) {
				System::Windows::Forms::MessageBox::Show("� ������ ������ ���� �������� �����.", "�������", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				this->Close();
			}

			while ((de = readdir(dr)) != NULL) {
				g++;
			}

			return files = g - 2;
		}

		void SaveToFile(char* value) {
			char* temp_path = getenv("TEMP");
			char* folder_path2 = "\\Testify\\Current info\\Current_test.bin";
			char file_name[255];

			sprintf(file_name, "%s%s", temp_path, folder_path2);

			FILE* fp = fopen(file_name, "wb");
			fwrite(value, sizeof(char), strlen(value), fp);
			fclose(fp);
		}

	private:
		String^ number_of_test;

		void btn_start_Click(System::Object^ sender, System::EventArgs^ e)
		{
			Button^ button = safe_cast<Button^>(sender);

			TableLayoutPanel^ panel = safe_cast<TableLayoutPanel^>(Panel_arr[button->TabIndex]);

			Label^ label = safe_cast<Label^>(panel->GetControlFromPosition(0, 0));

			String^ text = label->Text;

			char file_name[255];

			sprintf(file_name, "%s", text);

			String^ name_test = gcnew String(file_name);


			char* str2 = (char*)(void*)Marshal::StringToHGlobalAnsi(name_test);
			SaveToFile(str2);
			//DoTestForm^ dotest = gcnew DoTestForm();
			ViewResultPeople^ viewres = gcnew ViewResultPeople();
			this->Hide();
			viewres->ShowDialog();
			this->Show();
		}
	private: System::Void ViewResultTest_Load(System::Object^ sender, System::EventArgs^ e) {
		CheckDirectory();
		GetNameofTests();
		CreateContainers();
		if (files * 50 < 800) {
			vScrollBar1->Maximum = 0;
			vScrollBar1->Enabled = 0;
			vScrollBar1->Visible = 0;
		}
		else {
			vScrollBar1->Maximum = ((files) * 50);
		}
	}
	private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
		for (int i = 0; i < files; i++) {
			Panel_arr[i]->Location = System::Drawing::Point(130, i * 50 + 50 - vScrollBar1->Value);
		}
	}
};
}
