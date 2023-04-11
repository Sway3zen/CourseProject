#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "CreateTest.h"
#pragma once


namespace CourseProject4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Switchtask
	/// </summary>
	public ref class Switchtask : public System::Windows::Forms::Form
	{

	public:
		Switchtask(void)
		{
			InitializeComponent();

		}

	protected:
		~Switchtask()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LoginAuthor;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// LoginAuthor
			// 
			this->LoginAuthor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->LoginAuthor->Cursor = System::Windows::Forms::Cursors::Default;
			this->LoginAuthor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->LoginAuthor->Location = System::Drawing::Point(0, 621);
			this->LoginAuthor->Name = L"LoginAuthor";
			this->LoginAuthor->Size = System::Drawing::Size(987, 40);
			this->LoginAuthor->TabIndex = 2;
			this->LoginAuthor->Text = L"© Swayze Inc.";
			this->LoginAuthor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(741, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(424, 236);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Перелік тестів";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(424, 273);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Створити тест";
			this->label3->Click += gcnew System::EventHandler(this, &Switchtask::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(407, 315);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(185, 25);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Результати тестів";
			// 
			// Switchtask
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(984, 661);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LoginAuthor);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Switchtask";
			this->ShowIcon = false;
			this->Text = L"Switchtask";
			this->Load += gcnew System::EventHandler(this, &Switchtask::Switchtask_Load_1);
			this->ResumeLayout(false);
			this->PerformLayout();

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

	private: System::Void Switchtask_Load_1(System::Object^ sender, System::EventArgs^ e) {
		char* username = GetUsername();
		this->label1->Text = gcnew String(username);
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		CreateTest^ createTest = gcnew CreateTest();
		createTest->ShowDialog();
		this->Show();
	}
};



}
