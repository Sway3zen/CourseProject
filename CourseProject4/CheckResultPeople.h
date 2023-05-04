#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <direct.h>
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
	/// Summary for CheckResultPeople
	/// </summary>
	public ref class CheckResultPeople : public System::Windows::Forms::Form
	{
	public:
		CheckResultPeople(String^ text)
		{
			Username = text;
			//System::Windows::Forms::MessageBox::Show(Username, "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CheckResultPeople()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	protected:	private:
		String^ Username;
	private: System::Windows::Forms::RadioButton^ radioButton1;
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
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->SuspendLayout();
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Location = System::Drawing::Point(963, -2);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(20, 764);
			this->vScrollBar1->TabIndex = 0;
			this->vScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &CheckResultPeople::vScrollBar1_Scroll);
			// 
			// CheckResultPeople
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(984, 761);
			this->Controls->Add(this->vScrollBar1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"CheckResultPeople";
			this->ShowIcon = false;
			this->Text = L"CheckResultPeople";
			this->Load += gcnew System::EventHandler(this, &CheckResultPeople::CheckResultPeople_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		int count_questions = GetCountQuestions();
		array<Panel^>^ Containers_arr;
		array<Label^>^ Questions = gcnew array<Label^>(count_questions);
		array<RadioButton^>^ RadioButton_arr;
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
					radioButton->ForeColor = System::Drawing::Color::Black;
					radioButton->Location = System::Drawing::Point(radioButtonX, radioButtonY);
					radioButton->Size = System::Drawing::Size(14, 13);
					radioButton->TabIndex = g;
					radioButton->TabStop = true;
					radioButton->Text = AddAnswerQuestion(i, g);
					radioButton->UseVisualStyleBackColor = true;
					radioButton->Font = (gcnew System::Drawing::Font(L"Roboto", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					radioButton->Enabled = false;

					if (radioButton->Text == GetResult(i)) {
						radioButton->Enabled = true;
						radioButton->Checked = true;
						//radioButton->Visible = false;
					}

					this->Controls->Add(radioButton);
					panel->Controls->Add(radioButton);
					RadioButton_arr[i * 5 + g] = radioButton;

					radioButtonY += 30;

				}

				Containers_arr[i] = panel;
				this->Controls->Add(panel);
			}
			GetResult(1);
			this->CheckResultPeople_Update(this, gcnew System::EventArgs());

		}

		String^ GetResult(int i) {
			String^ answer = nullptr;
			char* temp_path = getenv("TEMP");
			char pathpeopleanswer[255];
			char* number = GetNumberTest();

			char* Getname = (char*)(void*)Marshal::StringToHGlobalAnsi(Username);
			char* token = strtok(Getname, " ");
			char newname[255];
			//int j = 0;
			while (token != NULL) {
				strcat(newname, token);
				token = strtok(NULL, " ");
			}
			strcpy(Getname, newname);

			sprintf(pathpeopleanswer, "%s\\Testify\\Result\\%s\\%s_Answers.txt", temp_path, number, newname);

			char find_text[255];
			char useranswer[255];

			sprintf(find_text, "Question: %d", i);

			FILE* fp;
			fp = fopen(pathpeopleanswer, "r");
			if (fp != NULL) {
				char line[256];
				while (fgets(line, sizeof(line), fp)) {
					if (strstr(line, find_text) != NULL) {
						sscanf(line, "Question: %d, Text: %s", &i, useranswer);
						answer = gcnew String(useranswer);
					}
				}
				fclose(fp);
			}
			else {
				System::Windows::Forms::MessageBox::Show("Не можу знайти відповіді", "Помилка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			}

			return answer;
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
				while (fscanf(fp, "%s", line) != EOF) {
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

			return result;
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
			sprintf(find_text, "Answer %d.%d:", a, b);


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
						values[i] = System::Convert::ToString(RadioButton_arr[i * 5 + j]->Text);
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
	private: System::Void CheckResultPeople_Load(System::Object^ sender, System::EventArgs^ e) {
		CreateQuestions();
	}
		private: System::Void CheckResultPeople_Update(System::Object^ sender, System::EventArgs^ e) {
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

private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	for (int i = 0; i < count_questions; i++) {
		Containers_arr[i]->Location = System::Drawing::Point(227, (i * 265 + 44 - (vScrollBar1->Value)));
	}
}
};
}
