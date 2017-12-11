#pragma once
#include "sector.h"
#include "queue.h"

#include <string>


namespace CppWinForm1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox;
	private: System::Windows::Forms::Timer^  timer;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  elementLabel;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  curCountLabel;
	private: System::Windows::Forms::Button^  stopButton;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  maxCountTB;
	private: System::Windows::Forms::TextBox^  coefficentTB;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  ErrorLabel;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  maxNumberTB;






	private: System::ComponentModel::IContainer^  components;

	//public ref class Sector;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button = (gcnew System::Windows::Forms::Button());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->elementLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->curCountLabel = (gcnew System::Windows::Forms::Label());
			this->stopButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->maxCountTB = (gcnew System::Windows::Forms::TextBox());
			this->coefficentTB = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ErrorLabel = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->maxNumberTB = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// button
			// 
			this->button->Location = System::Drawing::Point(12, 226);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(93, 23);
			this->button->TabIndex = 0;
			this->button->Text = L"start";
			this->button->UseVisualStyleBackColor = true;
			this->button->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// pictureBox
			// 
			this->pictureBox->Location = System::Drawing::Point(12, 20);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(200, 200);
			this->pictureBox->TabIndex = 1;
			this->pictureBox->TabStop = false;
			// 
			// timer
			// 
			this->timer->Interval = 200;
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::timer_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(222, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"element = ";
			// 
			// elementLabel
			// 
			this->elementLabel->AutoSize = true;
			this->elementLabel->Location = System::Drawing::Point(284, 82);
			this->elementLabel->Name = L"elementLabel";
			this->elementLabel->Size = System::Drawing::Size(29, 13);
			this->elementLabel->TabIndex = 3;
			this->elementLabel->Text = L"NaN";
			this->elementLabel->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(350, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"current count = ";
			// 
			// curCountLabel
			// 
			this->curCountLabel->AutoSize = true;
			this->curCountLabel->Location = System::Drawing::Point(438, 82);
			this->curCountLabel->Name = L"curCountLabel";
			this->curCountLabel->Size = System::Drawing::Size(13, 13);
			this->curCountLabel->TabIndex = 5;
			this->curCountLabel->Text = L"0";
			// 
			// stopButton
			// 
			this->stopButton->Location = System::Drawing::Point(111, 226);
			this->stopButton->Name = L"stopButton";
			this->stopButton->Size = System::Drawing::Size(101, 23);
			this->stopButton->TabIndex = 6;
			this->stopButton->Text = L"stop";
			this->stopButton->UseVisualStyleBackColor = true;
			this->stopButton->Click += gcnew System::EventHandler(this, &MyForm::stopButton_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(222, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"max count of elements = ";
			// 
			// maxCountTB
			// 
			this->maxCountTB->Location = System::Drawing::Point(353, 110);
			this->maxCountTB->Name = L"maxCountTB";
			this->maxCountTB->Size = System::Drawing::Size(93, 20);
			this->maxCountTB->TabIndex = 8;
			// 
			// coefficentTB
			// 
			this->coefficentTB->Location = System::Drawing::Point(294, 146);
			this->coefficentTB->Name = L"coefficentTB";
			this->coefficentTB->Size = System::Drawing::Size(100, 20);
			this->coefficentTB->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(222, 149);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"coefficent = ";
			// 
			// ErrorLabel
			// 
			this->ErrorLabel->AutoSize = true;
			this->ErrorLabel->Location = System::Drawing::Point(248, 20);
			this->ErrorLabel->Name = L"ErrorLabel";
			this->ErrorLabel->Size = System::Drawing::Size(0, 13);
			this->ErrorLabel->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(222, 180);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"maxnumber = ";
			// 
			// maxNumberTB
			// 
			this->maxNumberTB->Location = System::Drawing::Point(294, 177);
			this->maxNumberTB->Name = L"maxNumberTB";
			this->maxNumberTB->Size = System::Drawing::Size(100, 20);
			this->maxNumberTB->TabIndex = 13;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(460, 261);
			this->Controls->Add(this->maxNumberTB);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->ErrorLabel);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->coefficentTB);
			this->Controls->Add(this->maxCountTB);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->stopButton);
			this->Controls->Add(this->curCountLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->elementLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox);
			this->Controls->Add(this->button);
			this->Name = L"MyForm";
			this->Text = L"queue";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: Drawing::Graphics^ gr;
			 SolidBrush^ brushForFill = gcnew SolidBrush(Color::Red);
			 SolidBrush^ brushForUnFill = gcnew SolidBrush(Color::White);
			 int maxparts = 4;
			 float defangle = 90;
			 float lastangle = 0;
			 float angle = 0;
			 array<Sector ^> ^sectors;
			 float coef = 0.7;
			 int element = 0, maxnumber = 10000, maxforadding = coef * maxnumber, currentCount = 0;
			 TQueue<int>* tq;

	private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) {
		
		/*init*/
		
		timer->Start();
		gr = pictureBox->CreateGraphics();
		srand(0);

		System::String^ tmp = maxCountTB->Text;
		if (tmp == "")
			ErrorLabel->Text = "Uncorrect input, use default settings";
		else
			maxparts = Convert::ToInt64(tmp);

		tmp = coefficentTB->Text;
		if (tmp == "")
			ErrorLabel->Text = "Uncorrect input, use default settings";
		else
			coef = Convert::ToSingle(tmp);

		tmp = maxNumberTB->Text;
		if (tmp == "")
			ErrorLabel->Text = "Uncorrect input, use default settings";
		else
			maxnumber = Convert::ToInt64(tmp);

		maxforadding = coef * maxnumber;
		defangle = 360 / (float)maxparts;

		tq = new TQueue<int>(maxparts);
		sectors = gcnew array<Sector ^>(maxparts);

		/*end of init*/

		/*sectors[0] = gcnew Sector(gr, brushForFill, brushForUnFill, Pens::Black, 0.0f, 90.0f, 5.0f, 5.0f, 180.0f, 180.0f);
		sectors[0]->DrawSector(brushForFill);
		sectors[1] = gcnew Sector(gr, brushForFill, brushForUnFill, Pens::Black, 45.f, 135.0f, 5.0f, 5.0f, 180.0f, 180.0f);
		sectors[1]->DrawSector(brushForFill);

		Sector^ sector1 = gcnew Sector(gr, brushForFill, brushForUnFill, Pens::Black, 0.0f, 90.0f, 5.0f, 5.0f, 180.0f, 180.0f);
		sector1->DrawSector(brushForFill);
		Sector^ sector2 = gcnew Sector(gr, brushForFill, brushForUnFill, Pens::Black, 90.f, 180.0f, 5.0f, 5.0f, 180.0f, 180.0f);
		sector2->DrawSector(brushForFill);*/

		for (int i = 0; i < maxparts; i++) {
			angle = (i + 1) * defangle;
			Sector^ sector = gcnew Sector(gr, brushForFill, brushForUnFill, Pens::Black, (float)lastangle, (float)angle, 5.0f, 5.0f, 180.0f, 180.0f);
			sectors[i] = sector;
			sector->DrawSector(brushForUnFill);

			lastangle = angle;
		}

		for (int i = 0; i < maxparts; i++) {
			sectors[i]->DrawBorder();
		}
	}
	private: System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e) {
		if ((element = rand() % maxnumber) < maxforadding) {
			if (!tq->isfull()) {
				tq->push(element);
				sectors[currentCount]->DrawSector(brushForFill);
				currentCount++;
			}
		}
		else {
			if (!tq->isempty()) {
				tq->pop();
				currentCount--;
				sectors[currentCount]->DrawSector(brushForUnFill);
			}
		}
		elementLabel->Text = Convert::ToString(element);
		curCountLabel->Text = Convert::ToString(currentCount);

		for (int i = 0; i < maxparts; i++) {
			sectors[i]->DrawBorder();
		}
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void stopButton_Click(System::Object^  sender, System::EventArgs^  e) {
	timer->Stop();
	delete[] sectors;
}
};

}
