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
	using namespace System::Runtime::InteropServices;

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
	private: System::Windows::Forms::Button^ button3;



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
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->button3 = (gcnew System::Windows::Forms::Button());
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
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(827, 676);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 28);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Зберегти тест";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &DoTestForm::button3_Click);
			// 
			// DoTestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(984, 761);
			this->Controls->Add(this->button3);
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
		array<Label^>^ Questions = gcnew array<Label^>(count_questions);
		array<RadioButton^>^ RadioButton_arr;
		array<Label^>^ TextBoxAnswer_arr = gcnew array<Label^>(count_questions * 5);
		array<int>^ RadioButtonanswer_arr;

		void CreateQuestions() {
			Containers_arr = gcnew array<Panel^>(count_questions);
			RadioButton_arr = gcnew array<RadioButton^>(count_questions * 5);
			RadioButtonanswer_arr = gcnew array<int>(count_questions);

			int radioButtonX = 0;
			int radioButtonY = 122;
			int textboxanswer = 0;

			for (int i = 0; i < count_questions; i++) {
				Label^ LabelBox = gcnew Label();
				LabelBox->Location = System::Drawing::Point(0, 5);
				LabelBox->Size = System::Drawing::Size(546, 100);
				LabelBox->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				LabelBox->Text = AddQuestion(i);

				this->Controls->Add(LabelBox);
				Questions[i] = LabelBox;

				Panel^ panel = gcnew Panel();
				panel->Location = System::Drawing::Point(227, i * 265 + 44);
				panel->Size = System::Drawing::Size(546, 215);
				panel->BackColor = System::Drawing::Color::White;
				panel->Anchor = System::Windows::Forms::AnchorStyles::None;
				panel->Controls->Add(LabelBox);

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

					Label^ answerbox = gcnew Label();
					answerbox->Location = System::Drawing::Point(textboxanswer, radioButtonY - 2.5);
					answerbox->Size = System::Drawing::Size(100, 20);
					answerbox->TabIndex = g;
					answerbox->Font = (gcnew System::Drawing::Font(L"Roboto", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					answerbox->Text = AddAnswerQuestion(i, g);
					this->Controls->Add(answerbox);
					panel->Controls->Add(answerbox);
					TextBoxAnswer_arr[i * 5 + g] = answerbox;

					radioButtonY += 30;
				}

				Containers_arr[i] = panel;
				this->Controls->Add(panel);
			}

			this->DoTestForm_Update(this, gcnew System::EventArgs());

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
						sscanf(line, "Count of questions: %d", &question);
					}
				}
			}

			return question;
		}


		char* GetPathToQuestion() {
			char* temp_path = getenv("TEMP");
			char path[255];

			char* number = GetNumberTest();
			sprintf(path, "%s\\Testify\\Questions\\%s\\Questions.txt", temp_path, number);

			return path;
		}

		String^ AddQuestion(int index) {
			char* temp_path = getenv("TEMP");
			char path[255];

			char* number = GetNumberTest();
			sprintf(path, "%s\\Testify\\Questions\\%s\\Questions.txt", temp_path, number);
			char question[255];

			FILE* fp;

			fp = fopen(path, "r");

			char find_text[255];
			sprintf(find_text, "Question: %d, Text", index);


			if (fp == NULL) {
			}
			else {
				char line[256];
				while (fgets(line, sizeof(line), fp)) {
					if (strstr(line, find_text) != NULL) {
						sscanf(line, "Question: %d, Text: %s", &index, &question);
					}
				}
				fclose(fp);
			}

			String^ result = gcnew String(question);
			//System::Windows::Forms::MessageBox::Show(result, "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);


			return result;
		}

		int GetResult() {
			int rightanswer = 0;

			char* temp_path = getenv("TEMP");
			char pathglobalanswer[255];
			char pathpeopleanswer[255];

			char* number = GetNumberTest();
			sprintf(pathglobalanswer, "%s\\Testify\\Result\\%s\\Answers.txt", temp_path, number);
			sprintf(pathpeopleanswer, "%s\\Testify\\Result\\%s\\%s_Answers.txt", temp_path, number, GetUsername());


			for (int i = 0; i < GetCountQuestions(); i++) {


				char find_text[255];
				char globalanswer[255];
				char useranswer[255];

				sprintf(find_text, "Question: %d, Text", i);

				FILE* fp;
				fp = fopen(pathglobalanswer, "r");
				if (fp != NULL) {
					char line[256];
					while (fgets(line, sizeof(line), fp)) {
						if (strstr(line, find_text) != NULL) {
							sscanf(line, "Question: %d, Text: %s", &i, &globalanswer);
						}
					}
					fclose(fp);
				}

				fp = fopen(pathpeopleanswer, "r");
				if (fp != NULL) {
					char line[256];
					while (fgets(line, sizeof(line), fp)) {
						if (strstr(line, find_text) != NULL) {
							sscanf(line, "Question: %d, Text: %s", &i, &useranswer);
						}
					}
					fclose(fp);
				}

				String^ global = gcnew String(globalanswer);
				String^ user = gcnew String(useranswer);

				if (global == user) {
					rightanswer++;
				}

			}

			return rightanswer;
		}

		String^ AddAnswerQuestion(int a, int b) {
			char* temp_path = getenv("TEMP");
			char path[255];

			char* number = GetNumberTest();
			sprintf(path, "%s\\Testify\\Questions\\%s\\Questions_answer.txt", temp_path, number);

			char question[255];

			FILE* fp;

			fp = fopen(path, "r");

			char find_text[255];
			sprintf(find_text, "Answer %d.%d:", a,b);


			if (fp == NULL) {
			}
			else {
				char line[256];
				while (fgets(line, sizeof(line), fp)) {
					if (strstr(line, find_text) != NULL) {
						sscanf(line, "Answer %d.%d: %s", &a, &b, &question);
					}
				}
				fclose(fp);
			}

			String^ result = gcnew String(question);

			return result;

		}


		char* GetPathToQuestionAnswer() {
			char* temp_path = getenv("TEMP");
			char path[255];

			char* number = GetNumberTest();
			sprintf(path, "%s\\Testify\\Questions\\%s\\Questions_answer.txt", temp_path, number);

			return path;
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


	private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
		for (int i = 0; i < count_questions; i++) {
			Containers_arr[i]->Location = System::Drawing::Point(227, (i * 265 + 44 - (vScrollBar1->Value)));
		}

	}
	private: System::Void DoTestForm_Load(System::Object^ sender, System::EventArgs^ e) {
		CreateQuestions();
	}
	private: System::Void DoTestForm_Update(System::Object^ sender, System::EventArgs^ e) {
		vScrollBar1->Maximum = ((count_questions) * 215);
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

		   void SaveInfoAboutUserTest() {
			   array<String^>^ RightAnswerText = GetRightTextAnswer();
			   char* temp_path = getenv("TEMP");
			   char* folder_path_result = "\\Testify\\Result\\";
			   char file_name3[255];

			   sprintf(file_name3, "%s%s%s\\%s_Answers.txt", temp_path, folder_path_result, GetNumberTest(), GetUsername());

			   FILE* fp;
			   if ((fp = fopen(file_name3, "r")) == NULL) {
				   fp = fopen(file_name3, "w");
				   fprintf(fp, "\n");
			   }

			   for (int i = 0; i < count_questions; i++) {
				   fp = fopen(file_name3, "a");
				   if (fp != NULL) {
					   fprintf(fp, "Question: %d, Text: %s\n", i, RightAnswerText[i]);
					   fclose(fp);

				   }
			   }
		   }

		   void SaveInfoAboutUserResult() {
			   char* temp_path = getenv("TEMP");
			   char* folder_path_result = "\\Testify\\Result\\";
			   char file_name3[255];

			   sprintf(file_name3, "%s%s%s\\Global_Result.txt", temp_path, folder_path_result, GetNumberTest());

			   FILE* fp;
			   if ((fp = fopen(file_name3, "r")) == NULL) {
				   fp = fopen(file_name3, "w");
			   }
			   fclose(fp);

			   fp = fopen(file_name3, "a");
				   if (fp != NULL) {
					   fprintf(fp, "%s - %d/%d\n", GetUsername(), GetResult(), GetCountQuestions());
					   fclose(fp);
				   }
		   }

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveInfoAboutUserTest();
		SaveInfoAboutUserResult();
	}
};
}
