#include <stdio.h>
#include <stdlib.h>
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
	/// Summary for DoTestForm
	/// </summary>
	public ref class DoTestForm : public System::Windows::Forms::Form
	{
	public:
		DoTestForm(void)
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
		~DoTestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LoginAuthor;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	private: System::Windows::Forms::Label^ label2;

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
			this->LoginAuthor = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(-1, 721);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(987, 40);
			this->label1->TabIndex = 4;
			this->label1->Text = L"© Swayze Inc.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Location = System::Drawing::Point(968, -1);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(18, 762);
			this->vScrollBar1->TabIndex = 5;
			this->vScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &DoTestForm::vScrollBar1_Scroll);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(238, 183);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"label2";
			// 
			// DoTestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(984, 761);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->vScrollBar1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"DoTestForm";
			this->ShowIcon = false;
			this->Text = L"Проходження тесту";
			this->Load += gcnew System::EventHandler(this, &DoTestForm::DoTestForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		int count_questions = GetCountQuestions();
		array<Panel^>^ Containers_arr;
		array<Label^>^ Questions;

		void CreateQuestions() {
			Containers_arr = gcnew array<Panel^>(count_questions);
			Questions = gcnew array<Label^>(count_questions);

			for (int i = 0; i < count_questions; i++) {
				Label^ LabelBox = gcnew Label();
				LabelBox->Location = System::Drawing::Point(0, 0);
				LabelBox->Size = System::Drawing::Size(546, 100);
				this->Controls->Add(LabelBox);
				Questions[i] = LabelBox;

				Panel^ panel = gcnew Panel();
				panel->Location = System::Drawing::Point(227, i * 265 + 44);
				panel->Size = System::Drawing::Size(546, 215);
				panel->BackColor = System::Drawing::Color::White;
				panel->Anchor = System::Windows::Forms::AnchorStyles::None;
				panel->Controls->Add(LabelBox);

				this->Controls->Add(panel);
			}

		}

		char* GetNumberTest() {
			char* temp_path = getenv("TEMP");
			char test_number[255];
			sprintf(test_number, "%s\\Testify\\Current info\\Current_test.bin", temp_path);

			char number[255];
			FILE* fp = fopen(test_number, "rb");

			char line[255];
			fgets(line, sizeof(line), fp);
			fclose(fp);
			return line;
		}

		int GetCountQuestions() {
			char* temp_path = getenv("TEMP");

			char* number = GetNumberTest();

			char file_name[255];
			sprintf(file_name, "%s\\Testify\\Questions\\%s\\Questions.txt", temp_path, number);


			int question = 0;

			FILE* fp;
			fp = fopen(file_name, "r");

			if (fp == NULL) {
				//this->Close();
			}
			else {
				char line[256];
				while (fgets(line, sizeof(line), fp)) {
					if (strstr(line, "Count of questions") != NULL) {
						sscanf(line, "Count of questions: %d", question);
					}
				}
			}
			String^ file = gcnew String(file_name);
			System::Windows::Forms::MessageBox::Show(file, "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);

			return question;

		}
	private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	}
	private: System::Void DoTestForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//GetCountQuestions();
		CreateQuestions();
		this->label2->Text = System::Convert::ToString(GetCountQuestions());
	}
	};
}
