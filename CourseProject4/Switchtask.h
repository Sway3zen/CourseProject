#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "CreateTest.h"
#include "ListTestForm.h"
#include "ViewResultTest.h"
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ÔÂÂ≥ÎÍ“ÂÒÚ≥‚ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÒÚ‚ÓËÚË“ÂÒÚToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÂÁÛÎ¸Ú‡ÚË“ÂÒÚ≥‚ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Â‰‡„Û‚‡ÌÌˇ“ÂÒÚ≥‚ToolStripMenuItem;



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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ÔÂÂ≥ÎÍ“ÂÒÚ≥‚ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÒÚ‚ÓËÚË“ÂÒÚToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÂÁÛÎ¸Ú‡ÚË“ÂÒÚ≥‚ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Â‰‡„Û‚‡ÌÌˇ“ÂÒÚ≥‚ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
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
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(424, 236);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"œÂÂÎ≥Í ÚÂÒÚ≥‚";
			this->label2->Click += gcnew System::EventHandler(this, &Switchtask::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(424, 273);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(155, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"—Ú‚ÓËÚË ÚÂÒÚ";
			this->label3->Click += gcnew System::EventHandler(this, &Switchtask::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(407, 311);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(192, 25);
			this->label4->TabIndex = 6;
			this->label4->Text = L"–ÂÁÛÎ¸Ú‡ÚË ÚÂÒÚ≥‚";
			this->label4->Click += gcnew System::EventHandler(this, &Switchtask::label4_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Roboto", 10));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ÔÂÂ≥ÎÍ“ÂÒÚ≥‚ToolStripMenuItem,
					this->ÒÚ‚ÓËÚË“ÂÒÚToolStripMenuItem, this->ÂÁÛÎ¸Ú‡ÚË“ÂÒÚ≥‚ToolStripMenuItem, this->Â‰‡„Û‚‡ÌÌˇ“ÂÒÚ≥‚ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(984, 25);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ÔÂÂ≥ÎÍ“ÂÒÚ≥‚ToolStripMenuItem
			// 
			this->ÔÂÂ≥ÎÍ“ÂÒÚ≥‚ToolStripMenuItem->Name = L"ÔÂÂ≥ÎÍ“ÂÒÚ≥‚ToolStripMenuItem";
			this->ÔÂÂ≥ÎÍ“ÂÒÚ≥‚ToolStripMenuItem->Size = System::Drawing::Size(97, 20);
			this->ÔÂÂ≥ÎÍ“ÂÒÚ≥‚ToolStripMenuItem->Text = L"œÂÂÎ≥Í ÚÂÒÚ≥‚";
			// 
			// ÒÚ‚ÓËÚË“ÂÒÚToolStripMenuItem
			// 
			this->ÒÚ‚ÓËÚË“ÂÒÚToolStripMenuItem->Name = L"ÒÚ‚ÓËÚË“ÂÒÚToolStripMenuItem";
			this->ÒÚ‚ÓËÚË“ÂÒÚToolStripMenuItem->Size = System::Drawing::Size(96, 20);
			this->ÒÚ‚ÓËÚË“ÂÒÚToolStripMenuItem->Text = L"—Ú‚ÓËÚË ÚÂÒÚ";
			// 
			// ÂÁÛÎ¸Ú‡ÚË“ÂÒÚ≥‚ToolStripMenuItem
			// 
			this->ÂÁÛÎ¸Ú‡ÚË“ÂÒÚ≥‚ToolStripMenuItem->Name = L"ÂÁÛÎ¸Ú‡ÚË“ÂÒÚ≥‚ToolStripMenuItem";
			this->ÂÁÛÎ¸Ú‡ÚË“ÂÒÚ≥‚ToolStripMenuItem->Size = System::Drawing::Size(113, 20);
			this->ÂÁÛÎ¸Ú‡ÚË“ÂÒÚ≥‚ToolStripMenuItem->Text = L"–ÂÁÛÎ¸Ú‡ÚË ÚÂÒÚ≥‚";
			// 
			// Â‰‡„Û‚‡ÌÌˇ“ÂÒÚ≥‚ToolStripMenuItem
			// 
			this->Â‰‡„Û‚‡ÌÌˇ“ÂÒÚ≥‚ToolStripMenuItem->Name = L"Â‰‡„Û‚‡ÌÌˇ“ÂÒÚ≥‚ToolStripMenuItem";
			this->Â‰‡„Û‚‡ÌÌˇ“ÂÒÚ≥‚ToolStripMenuItem->Size = System::Drawing::Size(121, 20);
			this->Â‰‡„Û‚‡ÌÌˇ“ÂÒÚ≥‚ToolStripMenuItem->Text = L"–Â‰‡„Û‚‡ÌÌˇ ÚÂÒÚ≥‚";
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
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Switchtask";
			this->ShowIcon = false;
			this->Text = L"Switchtask";
			this->Load += gcnew System::EventHandler(this, &Switchtask::Switchtask_Load_1);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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

		String^ user = gcnew String(GetUsername());
		
		if (user != "Admin") {
			label3->Visible = false;
			label4->Visible = false;
			ÒÚ‚ÓËÚË“ÂÒÚToolStripMenuItem->Visible = false;
			ÂÁÛÎ¸Ú‡ÚË“ÂÒÚ≥‚ToolStripMenuItem->Visible = false;
			Â‰‡„Û‚‡ÌÌˇ“ÂÒÚ≥‚ToolStripMenuItem->Visible = false;
		}
		else {
			label3->Visible = true;
			label4->Visible = true;
			ÒÚ‚ÓËÚË“ÂÒÚToolStripMenuItem->Visible = true;
			ÂÁÛÎ¸Ú‡ÚË“ÂÒÚ≥‚ToolStripMenuItem->Visible = true;
			Â‰‡„Û‚‡ÌÌˇ“ÂÒÚ≥‚ToolStripMenuItem->Visible = true;
		}
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		CreateTest^ createTest = gcnew CreateTest();
		createTest->ShowDialog();
		this->Show();
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ListTestForm^ listform = gcnew ListTestForm();
	listform->ShowDialog();
	this->Show();
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ViewResultTest^ viewres = gcnew ViewResultTest();
	viewres->ShowDialog();
	this->Show();
}
};
}
