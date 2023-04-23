#include <stdio.h>
#include <stdlib.h>
#include <direct.h>

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















	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;





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
			this->ScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
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
			this->ScrollBar1->Maximum = 200;
			this->ScrollBar1->Name = L"ScrollBar1";
			this->ScrollBar1->Size = System::Drawing::Size(17, 623);
			this->ScrollBar1->SmallChange = 40;
			this->ScrollBar1->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.75F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 20);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Введіть кількість питань:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(16, 74);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(205, 20);
			this->textBox2->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(74, 157);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 28);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Зберегти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CreateTest::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(16, 131);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(205, 20);
			this->textBox3->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(186, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Введіть назву тесту:";
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(821, 560);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 28);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Зберегти тест";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &CreateTest::button3_Click_1);
			// 
			// CreateTest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(984, 661);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ScrollBar1);
			this->Controls->Add(this->LoginAuthor);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"CreateTest";
			this->Text = L"CreateTest";
			this->Load += gcnew System::EventHandler(this, &CreateTest::CreateTest_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private:
		int count_questions;
		String^ Text_name;
		array<TextBox^>^ Questions;
		array<Panel^>^ Containers_arr;
		array<RadioButton^>^ RadioButton_arr;
		array<TextBox^>^ TextBoxAnswer_arr;
		array<int>^ RadioButtonanswer_arr;
		void CreateQuestions() {
			Questions = gcnew array<TextBox^>(count_questions);
			Containers_arr = gcnew array<Panel^>(count_questions);
			RadioButton_arr = gcnew array<RadioButton^>(count_questions * 5);
			RadioButtonanswer_arr = gcnew array<int>(count_questions);
			TextBoxAnswer_arr = gcnew array<TextBox^>(count_questions * 5);

			int radioButtonX = 0;
			int radioButtonY = 122;
			int textboxanswer = 0;
			for (int i = 0; i < count_questions; i++) {

				TextBox^ textBox = gcnew TextBox();
				textBox->Location = System::Drawing::Point(0, 0);
				textBox->Multiline = true;
				textBox->Size = System::Drawing::Size(546, 100);
				textBox->Height = 100;
				this->Controls->Add(textBox);
				Questions[i] = textBox;

				Panel^ panel = gcnew Panel();
				panel->Location = System::Drawing::Point(227, i * 265 + 44);
				panel->Size = System::Drawing::Size(546, 215);
				panel->Height = 215;
				panel->Anchor = System::Windows::Forms::AnchorStyles::None;
				panel->Controls->Add(textBox);

				for (int g = 0; g < 5; g++) {

					if (g < 2) {
						radioButtonX = 37;
						textboxanswer = 58;
					}
					else if (g < 4) {
						radioButtonX = 212;
						textboxanswer = 232;
					}
					else {
						radioButtonX = 376;
						textboxanswer = 396;
						radioButtonY = 122;
					}
					if (radioButtonY >= 156) {
						radioButtonY = 122;
					}

					RadioButton^ radioButton = gcnew RadioButton();
					radioButton->AutoSize = true;
					radioButton->ForeColor = System::Drawing::Color::White;
					radioButton->Location = System::Drawing::Point(radioButtonX, radioButtonY);
					radioButton->Size = System::Drawing::Size(14, 13);
					radioButton->TabIndex = g;
					radioButton->TabStop = true;
					radioButton->UseVisualStyleBackColor = true;
					this->Controls->Add(radioButton);
					panel->Controls->Add(radioButton);
					RadioButton_arr[i * 5 + g] = radioButton;

					TextBox^ answerbox = gcnew TextBox();
					answerbox->Location = System::Drawing::Point(textboxanswer, radioButtonY - 2.5);
					answerbox->Size = System::Drawing::Size(100, 20);
					answerbox->Multiline = true;
					answerbox->TabIndex = g;
					this->Controls->Add(answerbox);
					panel->Controls->Add(answerbox);
					TextBoxAnswer_arr[i * 5 + g] = answerbox;

					radioButtonY += 30;
				}

				Containers_arr[i] = panel;
				this->Controls->Add(panel);
			}


			this->CreateTest_Load(this, gcnew System::EventArgs());

		}

	private:
		System::Void ScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
			for (int i = 0; i < count_questions; i++) {
				Containers_arr[i]->Location = System::Drawing::Point(227, (i * 265 + 44 - (ScrollBar1->Value)));
			}

		}

		System::Void ScrollBar1_MouseWheel(System::Object^ sender, MouseEventArgs^ e)
		{
		}

	private:
		System::Void CreateTest_Load(System::Object^ sender, System::EventArgs^ e) {
			ScrollBar1->Maximum = ((count_questions) * 265);
		}

	private:
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			count_questions = System::Convert::ToInt32(textBox2->Text);
			if (count_questions < 3) {
				System::Windows::Forms::MessageBox::Show("Кількість запитань повина бути більше чим 3.", "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			}
			else {
				CreateQuestions();
				this->label1->Enabled= 0;
				this->textBox2->Enabled = 0;
			}
			if (textBox3->Text->Length == 0) {
				System::Windows::Forms::MessageBox::Show("Назва тесту має містити більше одного символу", "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			}
			else {
				Text_name = textBox3->Text;
			}
		}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ScrollBar1_MouseWhell(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	}
	private:
		array<int>^ GetRadioButtonValues()
		{
			array<int>^ values = gcnew array<int>(count_questions);
			for (int i = 0; i < count_questions; i++)
			{
				bool foundChecked = false;
				for (int j = 0; j < 5; j++)
				{
					if (RadioButton_arr[i * 5 + j]->Checked)
					{
						values[i] = j;
						foundChecked = true;
						break;
					}
				}
				if (!foundChecked)
				{
					values[i] = -1;
				}
			}
			return values;
		}

		array<String^>^ GetRightTextAnswer()
		{
			array<String^>^ values = gcnew array<String^>(count_questions);
			for (int i = 0; i < count_questions; i++)
			{
				bool foundChecked = false;
				for (int j = 0; j < 5; j++)
				{
					if (RadioButton_arr[i * 5 + j]->Checked)
					{
						values[i] = System::Convert::ToString(TextBoxAnswer_arr[i * 5 + j]->Text);
						foundChecked = true;
						break;
					}
				}
				if (!foundChecked)
				{
					values[i] = "-1";
				}
			}
			return values;
		}

		String^ GetAnswer(array<TextBox^>^ textBoxArr, int index) {
			return textBoxArr[index]->Text;
		}


	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		array<int>^ radioButtonValues = GetRadioButtonValues();
		array<String^>^ RightAnswerText = GetRightTextAnswer();
		array<String^>^ QuestionsValues;
		QuestionsValues = gcnew array<String^>(count_questions);

		for (int i = 0; i < count_questions; i++) {
			QuestionsValues[i] = Questions[i]->Text;
		}

		char* temp_path = getenv("TEMP");
		char* folder_path_result = "\\Testify\\Result\\";
		char* folder_path_questions = "\\Testify\\Questions\\";
		char file_name3[255];

		sprintf(file_name3, "%s%s%s", temp_path, folder_path_result, Text_name);
		int createdir = mkdir(file_name3);
		sprintf(file_name3, "%s\\Answers.txt", file_name3);

		FILE* fp;
		fp = fopen(file_name3, "w");
		if (fp != NULL) {

		}
		fclose(fp);



		for (int i = 0; i < count_questions; i++) {
			fp = fopen(file_name3, "a");
			if (fp != NULL) {
				fprintf(fp, "Question: %d, RadioButton: %d, Text: %s\n", i, radioButtonValues[i], RightAnswerText[i]);
				fclose(fp);

			}
		}

		sprintf(file_name3, "%s%s%s", temp_path, folder_path_questions, Text_name);
		createdir = mkdir(file_name3);
		sprintf(file_name3, "%s\\Questions.txt", file_name3);

		fp = fopen(file_name3, "w");
		if (fp != NULL) {
		}
			fprintf(fp, "Count of questions: %d\n", count_questions);
		fclose(fp);

		for (int i = 0; i < count_questions; i++) {
			fp = fopen(file_name3, "a");
			if (fp != NULL) {
				fprintf(fp, "Question: %d, Text: %s\n", i, QuestionsValues[i]);
				fclose(fp);

			}
		}

		sprintf(file_name3, "%s%s%s", temp_path, folder_path_questions, Text_name);
		createdir = mkdir(file_name3);
		sprintf(file_name3, "%s\\Questions_answer.txt", file_name3);
 
		fp = fopen(file_name3, "w");
		if (fp != NULL) {
		}
		fclose(fp);



		for (int i = 0; i < count_questions; i++) {
			fp = fopen(file_name3, "a");
			if (fp != NULL) {
				fprintf(fp, "Question: %d\n", i);
				for (int j = 0; j < 5; j++) {
					fprintf(fp, "Answer %d.%d: %s\n", i, j, GetAnswer(TextBoxAnswer_arr, i * 5 + j));
				}
				fclose(fp);
			}
		}
	}
	};
}
