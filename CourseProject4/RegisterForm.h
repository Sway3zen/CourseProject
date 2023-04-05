#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <direct.h>
//

#pragma once
//#include "LoginForm.h"




namespace CourseProject4 {
	typedef struct{
		char login[164];
		char password[164];
	} Registration;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace LogForm;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LoginAuthor;
	private: System::Windows::Forms::TextBox^ RegTextBoxLogin;

	private: System::Windows::Forms::Label^ Loginlogin;
	private: System::Windows::Forms::Label^ LoginPassword;
	private: System::Windows::Forms::TextBox^ RegTextBoxPassword;

	private: System::Windows::Forms::Label^ LoginSignIn;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ RegTextBoxPassword2;

	private: System::Windows::Forms::Button^ LoginNextBtn;
	private: System::Windows::Forms::Label^ LoginRegisterBtn;
	private: String^ RegBoxUsername;
	private: String^ RegBoxPassword;
	private: String^ RegBoxPassword2;
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
			this->RegTextBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->Loginlogin = (gcnew System::Windows::Forms::Label());
			this->LoginPassword = (gcnew System::Windows::Forms::Label());
			this->RegTextBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->LoginSignIn = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->RegTextBoxPassword2 = (gcnew System::Windows::Forms::TextBox());
			this->LoginNextBtn = (gcnew System::Windows::Forms::Button());
			this->LoginRegisterBtn = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// LoginAuthor
			// 
			this->LoginAuthor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->LoginAuthor->Cursor = System::Windows::Forms::Cursors::Default;
			this->LoginAuthor->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->LoginAuthor->Location = System::Drawing::Point(0, 462);
			this->LoginAuthor->Name = L"LoginAuthor";
			this->LoginAuthor->Size = System::Drawing::Size(400, 40);
			this->LoginAuthor->TabIndex = 1;
			this->LoginAuthor->Text = L"© Swayze Inc.";
			this->LoginAuthor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// RegTextBoxLogin
			// 
			this->RegTextBoxLogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->RegTextBoxLogin->BackColor = System::Drawing::Color::White;
			this->RegTextBoxLogin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RegTextBoxLogin->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->RegTextBoxLogin->Font = (gcnew System::Drawing::Font(L"Roboto", 12.25F));
			this->RegTextBoxLogin->Location = System::Drawing::Point(100, 143);
			this->RegTextBoxLogin->Margin = System::Windows::Forms::Padding(10, 3, 3, 3);
			this->RegTextBoxLogin->MaxLength = 64;
			this->RegTextBoxLogin->Name = L"RegTextBoxLogin";
			this->RegTextBoxLogin->Size = System::Drawing::Size(200, 20);
			this->RegTextBoxLogin->TabIndex = 6;
			this->RegTextBoxLogin->WordWrap = false;
			// 
			// Loginlogin
			// 
			this->Loginlogin->Font = (gcnew System::Drawing::Font(L"Roboto", 10.25F));
			this->Loginlogin->ForeColor = System::Drawing::Color::White;
			this->Loginlogin->Location = System::Drawing::Point(97, 124);
			this->Loginlogin->Name = L"Loginlogin";
			this->Loginlogin->Size = System::Drawing::Size(43, 16);
			this->Loginlogin->TabIndex = 4;
			this->Loginlogin->Text = L"Login";
			// 
			// LoginPassword
			// 
			this->LoginPassword->BackColor = System::Drawing::Color::Transparent;
			this->LoginPassword->Font = (gcnew System::Drawing::Font(L"Roboto", 10.25F));
			this->LoginPassword->ForeColor = System::Drawing::Color::White;
			this->LoginPassword->Location = System::Drawing::Point(97, 193);
			this->LoginPassword->Name = L"LoginPassword";
			this->LoginPassword->Size = System::Drawing::Size(71, 14);
			this->LoginPassword->TabIndex = 5;
			this->LoginPassword->Text = L"Password";
			// 
			// RegTextBoxPassword
			// 
			this->RegTextBoxPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->RegTextBoxPassword->BackColor = System::Drawing::Color::White;
			this->RegTextBoxPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RegTextBoxPassword->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->RegTextBoxPassword->Font = (gcnew System::Drawing::Font(L"Roboto", 12.25F));
			this->RegTextBoxPassword->Location = System::Drawing::Point(100, 210);
			this->RegTextBoxPassword->Margin = System::Windows::Forms::Padding(10, 3, 3, 3);
			this->RegTextBoxPassword->MaxLength = 128;
			this->RegTextBoxPassword->Name = L"RegTextBoxPassword";
			this->RegTextBoxPassword->Size = System::Drawing::Size(200, 20);
			this->RegTextBoxPassword->TabIndex = 7;
			this->RegTextBoxPassword->WordWrap = false;
			// 
			// LoginSignIn
			// 
			this->LoginSignIn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->LoginSignIn->Font = (gcnew System::Drawing::Font(L"Roboto", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LoginSignIn->ForeColor = System::Drawing::Color::White;
			this->LoginSignIn->Location = System::Drawing::Point(-5, 34);
			this->LoginSignIn->Name = L"LoginSignIn";
			this->LoginSignIn->Size = System::Drawing::Size(405, 58);
			this->LoginSignIn->TabIndex = 8;
			this->LoginSignIn->Text = L"Регістрація";
			this->LoginSignIn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 10.25F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(97, 263);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 17);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Confirm password";
			// 
			// RegTextBoxPassword2
			// 
			this->RegTextBoxPassword2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->RegTextBoxPassword2->BackColor = System::Drawing::Color::White;
			this->RegTextBoxPassword2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RegTextBoxPassword2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->RegTextBoxPassword2->Font = (gcnew System::Drawing::Font(L"Roboto", 12.25F));
			this->RegTextBoxPassword2->Location = System::Drawing::Point(100, 280);
			this->RegTextBoxPassword2->Margin = System::Windows::Forms::Padding(10, 3, 3, 3);
			this->RegTextBoxPassword2->MaxLength = 128;
			this->RegTextBoxPassword2->Name = L"RegTextBoxPassword2";
			this->RegTextBoxPassword2->Size = System::Drawing::Size(200, 20);
			this->RegTextBoxPassword2->TabIndex = 10;
			this->RegTextBoxPassword2->WordWrap = false;
			// 
			// LoginNextBtn
			// 
			this->LoginNextBtn->BackColor = System::Drawing::Color::White;
			this->LoginNextBtn->Cursor = System::Windows::Forms::Cursors::Default;
			this->LoginNextBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoginNextBtn->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LoginNextBtn->Location = System::Drawing::Point(125, 350);
			this->LoginNextBtn->Name = L"LoginNextBtn";
			this->LoginNextBtn->Size = System::Drawing::Size(150, 43);
			this->LoginNextBtn->TabIndex = 11;
			this->LoginNextBtn->Text = L"Далі";
			this->LoginNextBtn->UseVisualStyleBackColor = false;
			this->LoginNextBtn->Click += gcnew System::EventHandler(this, &RegisterForm::LoginNextBtn_Click);
			// 
			// LoginRegisterBtn
			// 
			this->LoginRegisterBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->LoginRegisterBtn->AutoSize = true;
			this->LoginRegisterBtn->BackColor = System::Drawing::Color::Transparent;
			this->LoginRegisterBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoginRegisterBtn->Font = (gcnew System::Drawing::Font(L"Roboto", 10.25F));
			this->LoginRegisterBtn->ForeColor = System::Drawing::Color::White;
			this->LoginRegisterBtn->Location = System::Drawing::Point(257, 303);
			this->LoginRegisterBtn->Name = L"LoginRegisterBtn";
			this->LoginRegisterBtn->Size = System::Drawing::Size(43, 17);
			this->LoginRegisterBtn->TabIndex = 12;
			this->LoginRegisterBtn->Text = L"Login";
			this->LoginRegisterBtn->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->LoginRegisterBtn->Click += gcnew System::EventHandler(this, &RegisterForm::LoginRegisterBtn_Click);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(400, 500);
			this->Controls->Add(this->LoginRegisterBtn);
			this->Controls->Add(this->LoginNextBtn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->RegTextBoxPassword2);
			this->Controls->Add(this->LoginSignIn);
			this->Controls->Add(this->RegTextBoxLogin);
			this->Controls->Add(this->Loginlogin);
			this->Controls->Add(this->LoginPassword);
			this->Controls->Add(this->RegTextBoxPassword);
			this->Controls->Add(this->LoginAuthor);
			this->Font = (gcnew System::Drawing::Font(L"Roboto", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"RegisterForm";
			this->Opacity = 0.95;
			this->ShowIcon = false;
			this->Text = L"Testify";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void LoginRegisterBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		/*LoginForm^ loginform = gcnew LoginForm();
		loginform->Show();*/
		this->Close();

	}


	private: System::Void LoginNextBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		RegBoxUsername = System::Convert::ToString(RegTextBoxLogin->Text);
		RegBoxPassword = System::Convert::ToString(RegTextBoxPassword->Text);
		RegBoxPassword2 = System::Convert::ToString(RegTextBoxPassword2->Text);
		char* temp_path = getenv("TEMP");
		char* folder_path = "\\Testify\\Database";
		char file_name[255];

		sprintf(file_name, "%s%s", temp_path, folder_path);

		int result = mkdir(file_name);

		sprintf(file_name, "%s\\%s.bin", file_name, RegBoxUsername);

		char Usernamechar[64];
		sprintf(Usernamechar, "Login: %s", RegTextBoxLogin->Text);
		char Passwordchar[128];
		sprintf(Passwordchar, "\nPassword: %s", RegTextBoxPassword->Text);


		Registration registration;
		strcpy(registration.login, Usernamechar);
		strcpy(registration.password, Passwordchar);

		FILE* fp = fopen(file_name, "rb");
		if (fp == NULL) {
			// Файл не існує, тому його потрібно створити
			fp = fopen(file_name, "wb");
			if (fp == NULL) {
				// Обробка помилки створення файлу
				System::String^ temp_path_str = gcnew System::String(file_name);
				System::Windows::Forms::MessageBox::Show(temp_path_str, "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			}
			else {
				fwrite(&registration, sizeof(Registration), 1, fp);
				fclose(fp);

			}
		}
		
		this->Close();

		// Запис об'єкту структури до файлу
		//fp = fopen(file_name, "wb");
		//if (fp == NULL) {
		//	// Обробка помилки відкриття файлу
		//	System::String^ temp_path_str = gcnew System::String(file_name);
		//	System::Windows::Forms::MessageBox::Show(temp_path_str, "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		//}
		//else {
		//	// Запис об'єкту структури до файлу
		//	if (fwrite(&registration, sizeof(Registration), 1, fp) != 1) {
		//		// Обробка помилки запису до файлу
		//		System::String^ temp_path_str = gcnew System::String(file_name);
		//		//System::Windows::Forms::MessageBox::Show(temp_path_str, "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		//	}
		//	// Закриття файлу
		//	fclose(fp);
		//}
		// Закриття файлу
	}


	};
}