#include <dirent.h>
#include <direct.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
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
			this->SuspendLayout();
			// 
			// ViewResultPeople
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(984, 761);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"ViewResultPeople";
			this->ShowIcon = false;
			this->Text = L"ViewResultPeople";
			this->Load += gcnew System::EventHandler(this, &ViewResultPeople::ViewResultPeople_Load);
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
			int i = 0;
			char line[256];
			while (fgets(line, sizeof(line), fp)) {
				String^ test = gcnew String(line);
				values[i] = test->Trim();
				String^ tested = gcnew String(values[i]);

				System::Windows::Forms::MessageBox::Show(tested, "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
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

	private: System::Void ViewResultPeople_Load(System::Object^ sender, System::EventArgs^ e) {
		CheckDirectory();
		array<String^>^ Names = GetNames();
	}
	};
}
