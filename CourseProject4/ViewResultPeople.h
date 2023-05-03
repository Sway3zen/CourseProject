#include <dirent.h>
#include <direct.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include "CheckResultPeople.h"
#pragma once

namespace CourseProject4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewResultPeople
	/// </summary>
	public ref class ViewResultPeople : public System::Windows::Forms::Form
	{
	public:
		ViewResultPeople(void)
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
		~ViewResultPeople()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::White;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33)));
			this->tableLayoutPanel1->Controls->Add(this->label3, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(200, 20);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(635, 33);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->Location = System::Drawing::Point(426, 1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(205, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Переглянути результат";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->Location = System::Drawing::Point(215, 1);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(204, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Результат користувача";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Location = System::Drawing::Point(4, 1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Імя користувача";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ViewResultPeople
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(984, 761);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"ViewResultPeople";
			this->ShowIcon = false;
			this->Text = L"ViewResultPeople";
			this->Load += gcnew System::EventHandler(this, &ViewResultPeople::ViewResultPeople_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private:
		int files;
		int CheckDirectory() {
			int g = 0;

			char* temp_path = getenv("TEMP");
			char* number_test = GetNumberTest();
			char dir_name[255];
			sprintf(dir_name, "%s\\Testify\\Result\\%s\\", temp_path, number_test);

			struct dirent* de;

			DIR* dr = opendir(dir_name);

			if (dr == NULL) {
				System::Windows::Forms::MessageBox::Show("В данний момент немає активних тестів.", "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				this->Close();
			}

			while ((de = readdir(dr)) != NULL) {
				g++;
			}

			return files = g-4;
		}

		array<String^>^ PeopleResult;


		array<String^>^ GetNames() {
			char* temp_path = getenv("TEMP");
			char* folder_path_result = "\\Testify\\Result\\";
			char* number_test = GetNumberTest();

			char file_name[255];

			sprintf(file_name, "%s%s%s\\Global_Result.txt", temp_path, folder_path_result, number_test);

			FILE* fp = fopen(file_name, "r");

			if (fp == NULL) {
				return gcnew array<String^>(0);
			}


			array<String^>^ values = gcnew array<String^>(files);
			PeopleResult = gcnew array<String^>(files);
			int i = 0;
			char line[256];
			char line2[256];
			while (fgets(line, sizeof(line), fp)) {
				strcpy(line2, line);
				for (int i = 0; i < strlen(line); i++) {
					if (line[i] == '-') {
						line[i] = '\0';
					}
				}
				char* hyphen_pos = strstr(line2, "-");
				if (hyphen_pos != NULL) {
					memmove(line2, hyphen_pos + 1, strlen(hyphen_pos));
					memmove(&line2[0], &line2[1], strlen(hyphen_pos));
					String^ res = gcnew String(line2);
					PeopleResult[i] = res;
				}
				
				String^ test = gcnew String(line);
				values[i] = test;
				String^ tested = gcnew String(line);

				//System::Windows::Forms::MessageBox::Show(tested, "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				i++;
			}

			fclose(fp);
			

			return values;
		}

		char* GetNumberTest() {
			char* temp_path = getenv("TEMP");
			char test_number[255];
			sprintf(test_number, "%s\\Testify\\Current info\\Current_test.bin", temp_path);

			char number[255];
			FILE* fp = fopen(test_number, "rb");

			char line[256];

			if (fp == NULL) {
				//this->Close();
			}
			else {
				while (fscanf(fp, "%s", &line) != EOF) {
				}
			}

			fclose(fp);

			char* result = (char*)malloc(strlen(line) + 1);
			strcpy(result, line);
			return result;
		}

		array<String^>^ GetStudentResultNames() {
			int names_lenght = GetNames()->Length;
			array<String^>^ values = gcnew array<String^>(names_lenght);
			return values;
		}
		array<String^>^ Names;
		array<TableLayoutPanel^>^ Panel_arr;

		System::Void CreateContainers() {
			Panel_arr = gcnew array<TableLayoutPanel^>(files + 1);

			int tableposx = 200;
			int tableposy = 120;

				for (int i = 0; i < files; i++) {
					TableLayoutPanel^ table = gcnew TableLayoutPanel();
					table->Location = System::Drawing::Point(tableposx, tableposy);
					table->Size = System::Drawing::Size(635, 33);
					table->ColumnCount = 3;
					table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
						33)));
					table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
						33)));
					table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
						33)));
					table->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
					table->RowCount = 1;
					table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
					table->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					table->TabIndex = i;
					table->BackColor = System::Drawing::Color::White;

					Label^ text_names_box = gcnew Label();
					text_names_box->Text = Names[i];
					text_names_box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
						| System::Windows::Forms::AnchorStyles::Left)
						| System::Windows::Forms::AnchorStyles::Right));
					text_names_box->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					table->Controls->Add(text_names_box, 0, 0);
					
					Label^ text_result_box = gcnew Label();
					text_result_box->AutoSize = false;
					text_result_box->Text = PeopleResult[i];
					text_result_box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
						| System::Windows::Forms::AnchorStyles::Left)
						| System::Windows::Forms::AnchorStyles::Right));
					text_result_box->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					table->Controls->Add(text_result_box, 1, 0);

					Button^ btn_start = gcnew Button();
					btn_start->BackColor = System::Drawing::Color::White;
					btn_start->ForeColor = System::Drawing::SystemColors::ControlText;
					btn_start->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
					btn_start->Font = (gcnew System::Drawing::Font(L"Roboto", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					btn_start->TabIndex = i;
					btn_start->Text = L"Переглянути результати";
					btn_start->Size = System::Drawing::Size(210, 33);

					table->Controls->Add(btn_start, 3, 0);
					btn_start->Click += gcnew EventHandler(this, &ViewResultPeople::btn_start_Click);


					this->Controls->Add(table);

					Panel_arr[i] = table;

					tableposy += 50;
			}
		}

		void btn_start_Click(System::Object^ sender, System::EventArgs^ e)
		{
			Button^ button = safe_cast<Button^>(sender);

			TableLayoutPanel^ panel = safe_cast<TableLayoutPanel^>(Panel_arr[button->TabIndex]);

			Label^ label = safe_cast<Label^>(panel->GetControlFromPosition(0, 0));

				String^ text = label->Text;

				CheckResultPeople^ checktest = gcnew CheckResultPeople(text);
				this->Hide();
				checktest->ShowDialog();
				this->Show();
		}

	private: System::Void ViewResultPeople_Load(System::Object^ sender, System::EventArgs^ e) {
		CheckDirectory();
		Names = GetNames();
		CreateContainers();
	}
	};
}
