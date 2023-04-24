#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <direct.h>
#include "Switchtask.h"


#pragma once

extern char* LoginBoxUsername;

namespace CourseProject4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for InfoForm
	/// </summary>
	public ref class InfoForm : public System::Windows::Forms::Form
	{
	public:
		InfoForm(void)
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
		~InfoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LoginAuthor;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button2;


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
		/// 
	private:
		void InitializeComponent(void)
		{
			this->LoginAuthor = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LoginAuthor
			// 
			this->LoginAuthor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->LoginAuthor->Cursor = System::Windows::Forms::Cursors::Default;
			this->LoginAuthor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->LoginAuthor->Location = System::Drawing::Point(0, 623);
			this->LoginAuthor->Name = L"LoginAuthor";
			this->LoginAuthor->Size = System::Drawing::Size(800, 40);
			this->LoginAuthor->TabIndex = 1;
			this->LoginAuthor->Text = L"© Swayze Inc.";
			this->LoginAuthor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(325, 499);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 43);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Далі";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &InfoForm::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(78, 45);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(636, 433);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Cursor = System::Windows::Forms::Cursors::Default;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(564, 499);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 43);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Зберегти";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &InfoForm::button2_Click);
			// 
			// InfoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(784, 661);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->LoginAuthor);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"InfoForm";
			this->Text = L"InfoForm";
			this->Load += gcnew System::EventHandler(this, &InfoForm::InfoForm_Load);
			this->ResumeLayout(false);

		}

		char* GetUsername() {
			char* temp_path = getenv("TEMP");
			char* folder_path2 = "\\Testify\\Current info\\Current.bin";
			char file_name[255];

			sprintf(file_name, "%s%s", temp_path, folder_path2);

			char* login = (char*)malloc(64);
			FILE* fp = fopen(file_name, "rb");
			char line[256];
			while (fgets(line, sizeof(line), fp)) {
				if (strstr(line, "") != NULL) {
					sscanf(line, "%s", login);
					break;
				}
			}
			fclose(fp);

			return login;
		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Switchtask^ task = gcnew Switchtask();
		task->ShowDialog();
		this->Close();
	}

		   char* GetInfo() {
			   char* temp_path = getenv("TEMP");
			   char folder[255];
			   char data[100000];

			   sprintf(folder, "%s\\Testify\\Info\\Info.txt", temp_path);

			   FILE* fp;
			   fp = fopen(folder, "r");

			   if (fp != NULL) {
				   fread(data, sizeof(char), 100000, fp);
			   }
			   fclose(fp);
			   return data;
	}
private: System::Void InfoForm_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ test = gcnew String(GetUsername());
	//System::Windows::Forms::MessageBox::Show(test, "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
	if (test != "Admin") {
		richTextBox1->ReadOnly = true;
		button2->Enabled = false;
		button2->Visible = false;

	}
	else {
		richTextBox1->ReadOnly = false;
		button2->Enabled = true;
		button2->Visible = true;
	}

	String^ text_info = gcnew String(GetInfo());
	//System::Windows::Forms::MessageBox::Show(text_info, "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
	richTextBox1->Text = text_info;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = richTextBox1->Text;

	char* temp_path = getenv("TEMP");
	char folder[255];

	sprintf(folder, "%s\\Testify\\Info", temp_path);

	int result = mkdir(folder);

	sprintf(folder, "%s\\Testify\\Info\\Info.txt", temp_path);

	FILE* fp;
	fp = fopen(folder, "w");

	if (fp == NULL) {

	}
	else {
		fprintf(fp, "%s", text);
	}
	fclose(fp);
}
};
}
