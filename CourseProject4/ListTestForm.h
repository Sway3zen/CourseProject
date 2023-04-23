#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include "DoTestForm.h"
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
	/// Summary for ListTestForm
	/// </summary>
	public ref class ListTestForm : public System::Windows::Forms::Form
	{
	public:
		ListTestForm(void)
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
		~ListTestForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ LoginAuthor;
	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
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
			this->LoginAuthor = (gcnew System::Windows::Forms::Label());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// LoginAuthor
			// 
			this->LoginAuthor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->LoginAuthor->Cursor = System::Windows::Forms::Cursors::Default;
			this->LoginAuthor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->LoginAuthor->Location = System::Drawing::Point(-3, 710);
			this->LoginAuthor->Name = L"LoginAuthor";
			this->LoginAuthor->Size = System::Drawing::Size(987, 40);
			this->LoginAuthor->TabIndex = 3;
			this->LoginAuthor->Text = L"© Swayze Inc.";
			this->LoginAuthor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Location = System::Drawing::Point(966, -2);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(18, 766);
			this->vScrollBar1->TabIndex = 4;
			this->vScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &ListTestForm::vScrollBar1_Scroll);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::White;
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				236)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				170)));
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 2, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(180, 577);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(675, 33);
			this->tableLayoutPanel1->TabIndex = 5;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ListTestForm::tableLayoutPanel1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(508, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 27);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Пройти";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// ListTestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(984, 749);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->vScrollBar1);
			this->Controls->Add(this->LoginAuthor);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"ListTestForm";
			this->ShowIcon = false;
			this->Text = L"Перелік тестів";
			this->Load += gcnew System::EventHandler(this, &ListTestForm::ListTestForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private:

		int files = 0;

		array<TableLayoutPanel^>^ Panel_arr;
		array<String^>^ Test_names;
		void CreateContainers() {
			Panel_arr = gcnew array<TableLayoutPanel^>(files);

			int tableposx = 130;
			int tableposy = 50;
			for (int i = 0; i < files; i++) {
				TableLayoutPanel^ table = gcnew TableLayoutPanel();
				table->Location = System::Drawing::Point(tableposx, tableposy);
				table->Size = System::Drawing::Size(635, 33);
				table->ColumnCount = 3;
				table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					50)));
				table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
					236)));
				table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
					170)));
				table->RowCount = 1;
				table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
				table->TabIndex = i;
				table->BackColor = System::Drawing::Color::White;
				Label^ text_names_box = gcnew Label();
				text_names_box->Text = Test_names[i];
				table->Controls->Add(text_names_box, 0, 0);
				Label^ text_result_box = gcnew Label();

				Button^ btn_start = gcnew Button();
				btn_start->BackColor = System::Drawing::Color::White;
				btn_start->ForeColor = System::Drawing::SystemColors::ControlText;
				btn_start->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				btn_start->TabIndex = i;
				btn_start->Text = L"Розпочати";
				btn_start->Size = System::Drawing::Size(164, 27);

				table->Controls->Add(btn_start, 3, 0);
				btn_start->Click += gcnew EventHandler(this, &ListTestForm::btn_start_Click);


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
				System::Windows::Forms::MessageBox::Show("В данний момент немає активних тестів.", "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				this->Close();
			}

			while ((de = readdir(dr)) != NULL) {
				g++;
			}

			return files = g - 2;
		}

		void WriteInfo(String^ name) {

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

		void btn_start_Click(System::Object^ sender, System::EventArgs^ e)
		{
			Button^ button = safe_cast<Button^>(sender);

			TableLayoutPanel^ panel = safe_cast<TableLayoutPanel^>(Panel_arr[button->TabIndex]);

			Label^ label = safe_cast<Label^>(panel->GetControlFromPosition(0, 0));

			String^ text = label->Text;

			char file_name[255];

			sprintf(file_name, "%s.txt", text);

			String^ name_test = gcnew String(file_name);


			char* str2 = (char*)(void*)Marshal::StringToHGlobalAnsi(name_test);
			SaveToFile(str2);
			DoTestForm^ dotest = gcnew DoTestForm();
			this->Hide();
			dotest->ShowDialog();
			this->Show();
		}

	private: System::Void ListTestForm_Load(System::Object^ sender, System::EventArgs^ e) {
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
		//System::Windows::Forms::MessageBox::Show(System::Convert::ToString(files), "Файлів", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	for (int i = 0; i < files; i++) {
		Panel_arr[i]->Location = System::Drawing::Point(130, i * 50+50 - vScrollBar1->Value);
	}
}
};
}
