#include <stdio.h>
#include <stdlib.h>

#pragma once

namespace CourseProject4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateTest
	/// </summary>
	public ref class CreateTest : public System::Windows::Forms::Form
	{
	public:
		CreateTest(void)
		{
			InitializeComponent();
			ScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &CreateTest::ScrollBar1_Scroll);

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreateTest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LoginAuthor;
	private: System::Windows::Forms::VScrollBar^ ScrollBar1;
	private: System::Windows::Forms::TextBox^ Question;


	private: System::Windows::Forms::Panel^ container;

	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textanswer5;
	private: System::Windows::Forms::TextBox^ textanswer4;
	private: System::Windows::Forms::TextBox^ textanswer3;
	private: System::Windows::Forms::TextBox^ textanswer2;
	private: System::Windows::Forms::TextBox^ textanswer1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ RightAnswer;
	private: System::Windows::Forms::Label^ RightAnswer_Text;

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
			this->LoginAuthor = (gcnew System::Windows::Forms::Label());
			this->ScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->Question = (gcnew System::Windows::Forms::TextBox());
			this->container = (gcnew System::Windows::Forms::Panel());
			this->RightAnswer = (gcnew System::Windows::Forms::TextBox());
			this->RightAnswer_Text = (gcnew System::Windows::Forms::Label());
			this->textanswer5 = (gcnew System::Windows::Forms::TextBox());
			this->textanswer4 = (gcnew System::Windows::Forms::TextBox());
			this->textanswer3 = (gcnew System::Windows::Forms::TextBox());
			this->textanswer2 = (gcnew System::Windows::Forms::TextBox());
			this->textanswer1 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->container->SuspendLayout();
			this->SuspendLayout();
			// 
			// LoginAuthor
			// 
			this->LoginAuthor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->LoginAuthor->Cursor = System::Windows::Forms::Cursors::Default;
			this->LoginAuthor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->LoginAuthor->Location = System::Drawing::Point(-7, 621);
			this->LoginAuthor->Name = L"LoginAuthor";
			this->LoginAuthor->Size = System::Drawing::Size(1000, 40);
			this->LoginAuthor->TabIndex = 3;
			this->LoginAuthor->Text = L"© Swayze Inc.";
			this->LoginAuthor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ScrollBar1
			// 
			this->ScrollBar1->LargeChange = 40;
			this->ScrollBar1->Location = System::Drawing::Point(967, -2);
			this->ScrollBar1->Maximum = 3000;
			this->ScrollBar1->Name = L"ScrollBar1";
			this->ScrollBar1->Size = System::Drawing::Size(17, 623);
			this->ScrollBar1->SmallChange = 40;
			this->ScrollBar1->TabIndex = 4;
			// 
			// Question
			// 
			this->Question->Location = System::Drawing::Point(0, 0);
			this->Question->Multiline = true;
			this->Question->Name = L"Question";
			this->Question->Size = System::Drawing::Size(546, 100);
			this->Question->TabIndex = 5;
			// 
			// container
			// 
			this->container->AutoScroll = true;
			this->container->Controls->Add(this->RightAnswer);
			this->container->Controls->Add(this->RightAnswer_Text);
			this->container->Controls->Add(this->textanswer5);
			this->container->Controls->Add(this->textanswer4);
			this->container->Controls->Add(this->textanswer3);
			this->container->Controls->Add(this->textanswer2);
			this->container->Controls->Add(this->textanswer1);
			this->container->Controls->Add(this->radioButton5);
			this->container->Controls->Add(this->radioButton4);
			this->container->Controls->Add(this->radioButton3);
			this->container->Controls->Add(this->radioButton2);
			this->container->Controls->Add(this->radioButton1);
			this->container->Controls->Add(this->Question);
			this->container->Location = System::Drawing::Point(227, 44);
			this->container->Name = L"container";
			this->container->Size = System::Drawing::Size(546, 215);
			this->container->TabIndex = 6;
			// 
			// RightAnswer
			// 
			this->RightAnswer->Location = System::Drawing::Point(396, 170);
			this->RightAnswer->Name = L"RightAnswer";
			this->RightAnswer->Size = System::Drawing::Size(100, 20);
			this->RightAnswer->TabIndex = 17;
			// 
			// RightAnswer_Text
			// 
			this->RightAnswer_Text->AutoSize = true;
			this->RightAnswer_Text->Font = (gcnew System::Drawing::Font(L"Roboto", 9.25F));
			this->RightAnswer_Text->ForeColor = System::Drawing::Color::White;
			this->RightAnswer_Text->Location = System::Drawing::Point(353, 152);
			this->RightAnswer_Text->Name = L"RightAnswer_Text";
			this->RightAnswer_Text->Size = System::Drawing::Size(180, 15);
			this->RightAnswer_Text->TabIndex = 16;
			this->RightAnswer_Text->Text = L"Номер правильної відповіді:";
			// 
			// textanswer5
			// 
			this->textanswer5->Location = System::Drawing::Point(396, 119);
			this->textanswer5->Name = L"textanswer5";
			this->textanswer5->Size = System::Drawing::Size(100, 20);
			this->textanswer5->TabIndex = 15;
			// 
			// textanswer4
			// 
			this->textanswer4->Location = System::Drawing::Point(232, 152);
			this->textanswer4->Name = L"textanswer4";
			this->textanswer4->Size = System::Drawing::Size(100, 20);
			this->textanswer4->TabIndex = 14;
			// 
			// textanswer3
			// 
			this->textanswer3->Location = System::Drawing::Point(232, 119);
			this->textanswer3->Name = L"textanswer3";
			this->textanswer3->Size = System::Drawing::Size(100, 20);
			this->textanswer3->TabIndex = 13;
			// 
			// textanswer2
			// 
			this->textanswer2->Location = System::Drawing::Point(58, 155);
			this->textanswer2->Name = L"textanswer2";
			this->textanswer2->Size = System::Drawing::Size(100, 20);
			this->textanswer2->TabIndex = 12;
			// 
			// textanswer1
			// 
			this->textanswer1->Location = System::Drawing::Point(58, 122);
			this->textanswer1->Name = L"textanswer1";
			this->textanswer1->Size = System::Drawing::Size(100, 20);
			this->textanswer1->TabIndex = 11;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->ForeColor = System::Drawing::Color::White;
			this->radioButton5->Location = System::Drawing::Point(376, 122);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(14, 13);
			this->radioButton5->TabIndex = 10;
			this->radioButton5->TabStop = true;
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->ForeColor = System::Drawing::Color::White;
			this->radioButton4->Location = System::Drawing::Point(212, 155);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(14, 13);
			this->radioButton4->TabIndex = 9;
			this->radioButton4->TabStop = true;
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->ForeColor = System::Drawing::Color::White;
			this->radioButton3->Location = System::Drawing::Point(212, 122);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(14, 13);
			this->radioButton3->TabIndex = 8;
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->ForeColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(37, 155);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(14, 13);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->ForeColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(37, 122);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 13);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 12.75F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(209, 20);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Введіть кількість питань:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(64, 74);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(77, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Зберегти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateTest::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(840, 111);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Зберегти";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(799, 76);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(165, 20);
			this->textBox3->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto", 12.75F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(795, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Введіть назву тесту:";
			// 
			// CreateTest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(984, 661);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->container);
			this->Controls->Add(this->ScrollBar1);
			this->Controls->Add(this->LoginAuthor);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"CreateTest";
			this->Text = L"CreateTest";
			this->Load += gcnew System::EventHandler(this, &CreateTest::CreateTest_Load);
			this->container->ResumeLayout(false);
			this->container->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
public:
	int count_questions;
	array<TextBox^>^ Questions;
	array<Panel^>^ Containers_arr;
void CreateQuestions() {
    Questions = gcnew array<TextBox^>(count_questions);
    Containers_arr = gcnew array<Panel^>(count_questions);

    for (int i = 0; i < count_questions; i++) {
        TextBox^ textBox = gcnew TextBox();
        textBox->Location = System::Drawing::Point(0, i * 50);
        textBox->Multiline = true;
        textBox->Size = System::Drawing::Size(546, 100);
        this->Controls->Add(textBox);
        Questions[i] = textBox;

        Panel^ panel = gcnew Panel();
        panel->Location = System::Drawing::Point(227, i * 265 + 44);
        panel->Size = System::Drawing::Size(546, 215);
        panel->Controls->Add(textBox);
        Containers_arr[i] = panel;
        this->Controls->Add(panel);
    }

}


private:
	System::Void ScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
		for (int i = 0; i < count_questions; i++) {
			Containers_arr[i]->Location = System::Drawing::Point(227, i * 265 + 44 - ScrollBar1->Value);
			Containers_arr[i]->Size = System::Drawing::Size(546, 215);
			Questions[i]->Size = System::Drawing::Size(546, 100);
		}
		ScrollBar1->Maximum = (count_questions) * 265;

	}

private:
	System::Void CreateTest_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private:
	System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		count_questions = System::Convert::ToInt32(textBox2->Text);
		if (count_questions < 5) {
			System::Windows::Forms::MessageBox::Show("Кількість запитань повина бути більше чим 5.", "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		}
		else {
			CreateQuestions();
		}
	}
};
}
