#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "InfoForm.h"

#pragma once
#include "RegisterForm.h"

namespace LogForm {
	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;;
	using namespace Regform;
	using namespace InfoForm;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			setDefaultText();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LoginAuthor;
	private: System::Windows::Forms::Label^ LoginSignIn;
	private: System::Windows::Forms::Label^ Loginlogin;
	private: System::Windows::Forms::TextBox^ LoginTextBoxLogin;
	private: System::Windows::Forms::Label^ LoginPassword;
	private: System::Windows::Forms::TextBox^ LoginTextBoxPassword;
	private: System::Windows::Forms::Label^ LoginRegisterBtn;

	private: System::Windows::Forms::Button^ LoginNextBtn;

	private: String^ LoginBoxUsername;
	private: String^ LoginBoxPassword;

	protected:

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
	private:
		System::Void textBox_enter(System::Object^ sender, System::EventArgs^ e) {
			TextBox^ textBox = dynamic_cast<TextBox^>(sender);
			if (textBox->Text == "Введіть текст...") {
				textBox->Text = "";
			}
		}
		System::Void textBox_Changed(System::Object^ sender, System::EventArgs^ e) {
			TextBox^ textBox = dynamic_cast<TextBox^>(sender);
			if (textBox->Text == "") {
				textBox->Text = "Введіть текст...";
			}
		}

		System::Void textBox_Leave(System::Object^ sender, System::EventArgs^ e) {
			TextBox^ textBox = static_cast<TextBox^>(sender);
			if (textBox->Text == "") {
				textBox->Text = "Введіть текст...";
				textBox->ForeColor = SystemColors::InactiveCaptionText;
			}
		}
		System::Void setDefaultText() {
			for each (Control ^ control in this->Controls) {
				if (control->GetType() == TextBox::typeid) {
					TextBox^ textBox = static_cast<TextBox^>(control);
					textBox->Enter += gcnew System::EventHandler(this, &LoginForm::textBox_enter);
					textBox->Leave += gcnew System::EventHandler(this, &LoginForm::textBox_Leave);
				}
			}
		}

		void InitializeComponent(void)
		{
			this->LoginAuthor = (gcnew System::Windows::Forms::Label());
			this->LoginSignIn = (gcnew System::Windows::Forms::Label());
			this->Loginlogin = (gcnew System::Windows::Forms::Label());
			this->LoginTextBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->LoginPassword = (gcnew System::Windows::Forms::Label());
			this->LoginTextBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->LoginRegisterBtn = (gcnew System::Windows::Forms::Label());
			this->LoginNextBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LoginAuthor
			// 
			this->LoginAuthor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->LoginAuthor->Cursor = System::Windows::Forms::Cursors::Default;
			this->LoginAuthor->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->LoginAuthor->Location = System::Drawing::Point(0, 463);
			this->LoginAuthor->Name = L"LoginAuthor";
			this->LoginAuthor->Size = System::Drawing::Size(400, 40);
			this->LoginAuthor->TabIndex = 0;
			this->LoginAuthor->Text = L"© Swayze Inc.";
			this->LoginAuthor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LoginSignIn
			// 
			this->LoginSignIn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->LoginSignIn->AutoSize = true;
			this->LoginSignIn->Font = (gcnew System::Drawing::Font(L"Roboto", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LoginSignIn->ForeColor = System::Drawing::Color::White;
			this->LoginSignIn->Location = System::Drawing::Point(140, 50);
			this->LoginSignIn->Name = L"LoginSignIn";
			this->LoginSignIn->Size = System::Drawing::Size(120, 58);
			this->LoginSignIn->TabIndex = 1;
			this->LoginSignIn->Text = L"Вхiд";
			// 
			// Loginlogin
			// 
			this->Loginlogin->Font = (gcnew System::Drawing::Font(L"Roboto", 10.25F));
			this->Loginlogin->ForeColor = System::Drawing::Color::White;
			this->Loginlogin->Location = System::Drawing::Point(97, 135);
			this->Loginlogin->Name = L"Loginlogin";
			this->Loginlogin->Size = System::Drawing::Size(43, 16);
			this->Loginlogin->TabIndex = 2;
			this->Loginlogin->Text = L"Login";
			// 
			// LoginTextBoxLogin
			// 
			this->LoginTextBoxLogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->LoginTextBoxLogin->BackColor = System::Drawing::Color::White;
			this->LoginTextBoxLogin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->LoginTextBoxLogin->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->LoginTextBoxLogin->Font = (gcnew System::Drawing::Font(L"Roboto", 12.25F));
			this->LoginTextBoxLogin->Location = System::Drawing::Point(100, 154);
			this->LoginTextBoxLogin->Margin = System::Windows::Forms::Padding(10, 3, 3, 3);
			this->LoginTextBoxLogin->MaxLength = 64;
			this->LoginTextBoxLogin->Name = L"LoginTextBoxLogin";
			this->LoginTextBoxLogin->Size = System::Drawing::Size(200, 20);
			this->LoginTextBoxLogin->TabIndex = 3;
			this->LoginTextBoxLogin->WordWrap = false;
			// 
			// LoginPassword
			// 
			this->LoginPassword->BackColor = System::Drawing::Color::Transparent;
			this->LoginPassword->Font = (gcnew System::Drawing::Font(L"Roboto", 10.25F));
			this->LoginPassword->ForeColor = System::Drawing::Color::White;
			this->LoginPassword->Location = System::Drawing::Point(97, 205);
			this->LoginPassword->Name = L"LoginPassword";
			this->LoginPassword->Size = System::Drawing::Size(71, 14);
			this->LoginPassword->TabIndex = 2;
			this->LoginPassword->Text = L"Password";
			// 
			// LoginTextBoxPassword
			// 
			this->LoginTextBoxPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->LoginTextBoxPassword->BackColor = System::Drawing::Color::White;
			this->LoginTextBoxPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->LoginTextBoxPassword->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->LoginTextBoxPassword->Font = (gcnew System::Drawing::Font(L"Roboto", 12.25F));
			this->LoginTextBoxPassword->Location = System::Drawing::Point(100, 221);
			this->LoginTextBoxPassword->Margin = System::Windows::Forms::Padding(10, 3, 3, 3);
			this->LoginTextBoxPassword->MaxLength = 128;
			this->LoginTextBoxPassword->Name = L"LoginTextBoxPassword";
			this->LoginTextBoxPassword->Size = System::Drawing::Size(200, 20);
			this->LoginTextBoxPassword->TabIndex = 3;
			this->LoginTextBoxPassword->WordWrap = false;
			// 
			// LoginRegisterBtn
			// 
			this->LoginRegisterBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->LoginRegisterBtn->BackColor = System::Drawing::Color::Transparent;
			this->LoginRegisterBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoginRegisterBtn->Font = (gcnew System::Drawing::Font(L"Roboto", 10.25F));
			this->LoginRegisterBtn->ForeColor = System::Drawing::Color::White;
			this->LoginRegisterBtn->Location = System::Drawing::Point(238, 244);
			this->LoginRegisterBtn->Name = L"LoginRegisterBtn";
			this->LoginRegisterBtn->Size = System::Drawing::Size(71, 16);
			this->LoginRegisterBtn->TabIndex = 4;
			this->LoginRegisterBtn->Text = L"Register";
			this->LoginRegisterBtn->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->LoginRegisterBtn->Click += gcnew System::EventHandler(this, &LoginForm::LoginRegisterBtn_Click);
			this->LoginRegisterBtn->Select();
			// 
			// LoginNextBtn
			// 
			this->LoginNextBtn->BackColor = System::Drawing::Color::White;
			this->LoginNextBtn->Cursor = System::Windows::Forms::Cursors::Default;
			this->LoginNextBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoginNextBtn->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LoginNextBtn->Location = System::Drawing::Point(125, 320);
			this->LoginNextBtn->Name = L"LoginNextBtn";
			this->LoginNextBtn->Size = System::Drawing::Size(150, 43);
			this->LoginNextBtn->TabIndex = 5;
			this->LoginNextBtn->Text = L"Далі";
			this->LoginNextBtn->UseVisualStyleBackColor = false;
			this->LoginNextBtn->Click += gcnew System::EventHandler(this, &LoginForm::LoginNextBtn_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(400, 500);
			this->Controls->Add(this->LoginNextBtn);
			this->Controls->Add(this->LoginRegisterBtn);
			this->Controls->Add(this->LoginTextBoxLogin);
			this->Controls->Add(this->Loginlogin);
			this->Controls->Add(this->LoginSignIn);
			this->Controls->Add(this->LoginAuthor);
			this->Controls->Add(this->LoginPassword);
			this->Controls->Add(this->LoginTextBoxPassword);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"LoginForm";
			this->Opacity = 0.95;
			this->ShowIcon = false;
			this->Text = L"Testify";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();		

		}
#pragma endregion
		
	private: System::Void LoginNextBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		LoginBoxUsername = System::Convert::ToString(LoginTextBoxLogin->Text);
		LoginBoxPassword = System::Convert::ToString(LoginTextBoxPassword->Text);
		char* temp_path = getenv("TEMP");
		//System::String^ temp_path_str = gcnew System::String(temp_path);
		//System::Windows::Forms::MessageBox::Show(temp_path_str, "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);

		FILE* fp;
		char file_name[100];
		sprintf(file_name, "%s\\Testify\\Database\\%s.dat", temp_path, LoginBoxUsername);

		char login[256], password[256], isAdmin[50];

		fp = fopen(file_name, "rb");


		if (fp == NULL) {
			System::Windows::Forms::MessageBox::Show("Не можу знайти такого користувача", "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		}
		else {
			char line[256];
			while (fgets(line, sizeof(line), fp)) {
				if (strstr(line, "Login:") != NULL) {
					sscanf(line, "Login: %s", login);
				}

				if (strstr(line, "Password:") != NULL) {
					sscanf(line, "Password: %s", password);
				}
			}
			fclose(fp);
		}

		System::String^ loginStr = gcnew System::String(login);
		System::String^ passwordStr = gcnew System::String(password);

		if (LoginBoxUsername == loginStr && LoginBoxPassword == passwordStr) {
			this->Hide();
			LogForm::InfoForm^ infoForm = gcnew LogForm::InfoForm();
			infoForm->Show();
			//System::Windows::Forms::MessageBox::Show("Вхід", "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		}
		else {
			System::Windows::Forms::MessageBox::Show("Невірний логін або пароль.", "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		}
	}
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LoginRegisterBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();

	RegisterForm^ registerform = gcnew RegisterForm();
	registerform->ShowDialog();
	this->Show();
}
};
}
