#pragma once
#include <cliext/vector>
#include <math.h>
#include<iostream>
#include<cstdlib>
#define PI 3.14159265358979323846
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(25, 93);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Rchannel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(25, 157);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 42);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Gchannel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(38, 342);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(434, 358);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(478, 342);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(692, 524);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::saveFileDialog1_FileOk);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(25, 219);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 40);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Bchannel";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(26, 27);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(86, 41);
			this->button4->TabIndex = 5;
			this->button4->Text = L"grayscale";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(790, 38);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(118, 51);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Load image";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(790, 129);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(118, 50);
			this->button6->TabIndex = 7;
			this->button6->Text = L"undo";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(19, 24);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(85, 34);
			this->button7->TabIndex = 8;
			this->button7->Text = L"mean";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(18, 34);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(83, 34);
			this->button8->TabIndex = 9;
			this->button8->Text = L"sobel";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(15, 24);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(86, 34);
			this->button9->TabIndex = 11;
			this->button9->Text = L"threshold";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 80);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(86, 25);
			this->textBox1->TabIndex = 12;
			this->textBox1->Text = L"125";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(298, 38);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(115, 124);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"4.threshold";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(15, 24);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(90, 34);
			this->button10->TabIndex = 14;
			this->button10->Text = L"overlap";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(16, 24);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(97, 34);
			this->button11->TabIndex = 15;
			this->button11->Text = L"rotation";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(16, 71);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 25);
			this->textBox2->TabIndex = 16;
			this->textBox2->Text = L"30";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(19, 71);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(85, 38);
			this->button12->TabIndex = 17;
			this->button12->Text = L"median";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(19, 25);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(85, 39);
			this->button13->TabIndex = 18;
			this->button13->Text = L"histogram";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Location = System::Drawing::Point(12, 38);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(132, 275);
			this->groupBox2->TabIndex = 19;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"1.RGB";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->button12);
			this->groupBox3->Location = System::Drawing::Point(150, 38);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(126, 143);
			this->groupBox3->TabIndex = 20;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"2. smooth";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button13);
			this->groupBox4->Location = System::Drawing::Point(150, 205);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(126, 108);
			this->groupBox4->TabIndex = 21;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"3.histogram";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button8);
			this->groupBox5->Location = System::Drawing::Point(298, 178);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(115, 91);
			this->groupBox5->TabIndex = 22;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"5.sobel";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->button10);
			this->groupBox6->Location = System::Drawing::Point(439, 38);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(123, 84);
			this->groupBox6->TabIndex = 23;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"6.overlap";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->textBox4);
			this->groupBox7->Controls->Add(this->button15);
			this->groupBox7->Controls->Add(this->textBox3);
			this->groupBox7->Controls->Add(this->button11);
			this->groupBox7->Controls->Add(this->button14);
			this->groupBox7->Controls->Add(this->textBox2);
			this->groupBox7->Location = System::Drawing::Point(585, 38);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(151, 275);
			this->groupBox7->TabIndex = 24;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"7.rotation";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(16, 219);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 25);
			this->textBox4->TabIndex = 28;
			this->textBox4->Text = L"2";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(16, 175);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(97, 33);
			this->button15->TabIndex = 27;
			this->button15->Text = L"vertical";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(16, 140);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 25);
			this->textBox3->TabIndex = 26;
			this->textBox3->Text = L"4";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(16, 101);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(97, 31);
			this->button14->TabIndex = 25;
			this->button14->Text = L"horizontal";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(914, 22);
			this->chart1->Name = L"chart1";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(425, 300);
			this->chart1->TabIndex = 25;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// chart2
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart2->Legends->Add(legend4);
			this->chart2->Location = System::Drawing::Point(1394, 22);
			this->chart2->Name = L"chart2";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chart2->Series->Add(series4);
			this->chart2->Size = System::Drawing::Size(417, 300);
			this->chart2->TabIndex = 26;
			this->chart2->Text = L"chart2";
			this->chart2->Click += gcnew System::EventHandler(this, &MyForm::chart2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1345, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 15);
			this->label1->TabIndex = 27;
			this->label1->Text = L"before";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1817, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 15);
			this->label2->TabIndex = 28;
			this->label2->Text = L"After";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1906, 957);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Bitmap^ temp1;///for rotation///
		Bitmap^openImg;///for load image///
		Bitmap^temp;///global variable for stack///////
		cliext::vector<Bitmap^> c1;///stack///

Bitmap^ clone(Bitmap^resource){//////////////clone新的記憶體位置/////////////////
	RectangleF clone = RectangleF(0, 0, resource->Width, resource->Height);
	return resource->Clone(clone, resource->PixelFormat);

}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 // Rchannal//
		 Bitmap^sss = c1.back();
		 temp = clone(temp);
		for (int i = 0; i < temp->Height; i++)
			for (int j = 0; j < temp->Width; j++)
			{
				Color RGB = sss->GetPixel(j, i);
				//讀取影像平面上(j,i)的RGB資訊
				//注意:縱座標是i,橫座標是j,所以才要寫成(j,i)
				int invR = Convert::ToInt32( RGB.R);
				int invG = Convert::ToInt32( RGB.G);
				int invB = Convert::ToInt32(RGB.B);
				//RGB是VS內建的class可以直接讀取影像的色彩資訊 
				temp->SetPixel(j, i, Color::FromArgb(invR, invR, invR));
			}
		pictureBox1->Image = sss;///////before/////////
		pictureBox2->Image = temp;//////after//////////
		c1.push_back(temp);
		System::Console::WriteLine("stack size:" + c1.size());
	};
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//G//
		Bitmap^sss = c1.back();
		temp = clone(temp);
		for (int i = 0; i < temp->Height; i++)
			for (int j = 0; j < temp->Width; j++)
			{
				Color RGB = sss->GetPixel(j, i);
				int invR = Convert::ToInt32( RGB.R);
				int invG = Convert::ToInt32( RGB.G);
				int invB = Convert::ToInt32( RGB.B);
				temp->SetPixel(j, i, Color::FromArgb(invG, invG, invG));
			}
		pictureBox1->Image = sss;
		pictureBox2->Image = temp;
		c1.push_back(temp);
		System::Console::WriteLine("stack size:" + c1.size());
	};
	
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		//B//
		Bitmap^sss = c1.back();
		temp = clone(temp);
			for (int i = 0; i < temp->Height; i++)
				for (int j = 0; j < temp->Width; j++)
				{
					Color RGB = sss->GetPixel(j, i);
					int invR = Convert::ToInt32( RGB.R);
					int invG = Convert::ToInt32(RGB.G);
					int invB = Convert::ToInt32( RGB.B);
					
			temp->SetPixel(j, i, Color::FromArgb(invB, invB, invB));		
				}
			pictureBox1->Image = sss;
			pictureBox2->Image = temp;
			c1.push_back(temp);
			System::Console::WriteLine("stack size:" + c1.size());
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	//gray//
	Bitmap^sss = c1.back();
	temp = clone(temp);
	for (int i = 0; i < temp->Height; i++)
		for (int j = 0; j < temp->Width; j++)
		{
			Color RGB = sss->GetPixel(j, i);
			
			int invR = Convert::ToInt32( RGB.R);
			int invG = Convert::ToInt32( RGB.G);
			int invB = Convert::ToInt32( RGB.B);
			int avg = (invB + invG + invR) / 3;
			temp->SetPixel(j, i, Color::FromArgb(avg, avg, avg));
		}

	pictureBox1->Image = sss;
	pictureBox2->Image = temp;
	c1.push_back(temp);
	System::Console::WriteLine("stack size:"+c1.size());
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	////////////////////把圖load進來/////////////////////
if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{openImg = gcnew Bitmap(openFileDialog1->FileName);
	temp = gcnew Bitmap(openImg->Width, openImg->Height);
	//宣告暫存的Bitmap
	pictureBox1->Image = openImg;
	c1.push_back(openImg);
	System::Console::WriteLine("stack size:" + c1.size());
	}
}

	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	}
	private: System::Void saveFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	}
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
////////undo/////////////
	c1.pop_back();
	pictureBox2->Image = c1.back();
	if (c1.size() >= 2) {
		pictureBox1->Image = c1.at(c1.size() - 2);
	}
	else
	{
		pictureBox1->Image = c1.at(c1.size() - 1);
	}
	System::Console::WriteLine("stack size:" + c1.size());
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	///////////mean///////////
	Bitmap^sss = c1.back();///取出graylscale的圖//
	temp = clone(temp);
	for (int j = 1; j < sss->Height - 1; j++){
		for (int i = 1; i < sss->Width - 1; i++) {
			
			Color RGB = sss->GetPixel(i,j);

			double avg = (double) 1 / 9 * (1 * sss->GetPixel(i - 1, j - 1).R + 1 * sss->GetPixel(i, j - 1).R + 1 * sss->GetPixel(i + 1, j - 1).R
				+ 1 * sss->GetPixel(i - 1, j).R + 1 * sss->GetPixel(i, j).R + 1 * sss->GetPixel(i + 1, j).R
				+ 1 * sss->GetPixel(i - 1, j + 1).R + 1 * sss->GetPixel(i, j + 1).R + 1 * sss->GetPixel(i + 1, j + 1).R);
			temp->SetPixel(i, j, Color::FromArgb(avg, avg, avg));
		}
	}
	pictureBox2->Image = temp;
	pictureBox1->Image = sss;
	c1.push_back(temp);
	System::Console::WriteLine("stack size:" + c1.size());
}

private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	///////////median/////////////
	Bitmap^ sss = c1.back();

	temp = clone(temp);
	int a[10];

	//System::Console::WriteLine(array[8]);
	for (int j = 1; j < sss->Height - 1; j++)
	{
		for (int i = 1; i < sss->Width - 1; i++)
		{
			a[1] = sss->GetPixel(i - 1, j - 1).R;
			a[2] = sss->GetPixel(i, j - 1).R;
			a[3] = sss->GetPixel(i + 1, j - 1).R;
			a[4] = sss->GetPixel(i - 1, j).R;
			a[5] = sss->GetPixel(i, j).R;
			a[6] = sss->GetPixel(i + 1, j).R;
			a[7] = sss->GetPixel(i - 1, j + 1).R;
			a[8] = sss->GetPixel(i, j + 1).R;
			a[9] = sss->GetPixel(i + 1, j + 1).R;
			//////針對array做排序//////////
			for (int j = 1; j < 9; j++)
			{
				for (int i = 1; i < 9; i++)
				{
					if (a[i] > a[i + 1])
					{
						a[0] = a[i + 1];
						a[i + 1] = a[i];
						a[i] = a[0];
					}
				}
			}
			////////取中值////////////
			temp->SetPixel(i, j, Color::FromArgb(a[5], a[5], a[5]));
		}
	}
	pictureBox2->Image = temp;
	pictureBox1->Image = sss;
	c1.push_back(temp);
	System::Console::WriteLine("stack size:" + c1.size());
}

private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	///////////sobel////////////
	
	Bitmap^aaa = c1.back();
	System::Console::WriteLine(c1.size());
	temp = clone(temp);
	for (int j = 1; j < aaa->Height - 1; j++) {
		for (int i = 1; i < aaa->Width - 1; i++) {

			Color RGB = aaa->GetPixel(i, j);
			double avg1 = (double)abs(////////vertical sobel////////
				1* aaa->GetPixel(i - 1, j - 1).R + 0 * aaa->GetPixel(i, j - 1).R + (-1) *aaa->GetPixel(i + 1, j - 1).R
				+ 2 * aaa->GetPixel(i - 1, j).R + 0 * aaa->GetPixel(i, j).R + (-2)*aaa->GetPixel(i + 1, j).R
				+ 1 *aaa->GetPixel(i - 1, j + 1).R + 0 *aaa->GetPixel(i, j + 1).R + (-1) * aaa->GetPixel(i + 1, j + 1).R);
			if (avg1>255)
			{
				avg1 = 255;
			}
			if (avg1<0)
			{
				avg1 = 0;
			}
			double avg2 = (double)abs(////////horizontal sobel//////////
				1 * aaa->GetPixel(i - 1, j - 1).R + 2 * aaa->GetPixel(i, j - 1).R + (1) *aaa->GetPixel(i + 1, j - 1).R
				+ 0 * aaa->GetPixel(i - 1, j).R + 0 * aaa->GetPixel(i, j).R + (0)*aaa->GetPixel(i + 1, j).R
				+ (-1) * aaa->GetPixel(i - 1, j + 1).R + (-2) * aaa->GetPixel(i, j + 1).R + (-1) * aaa->GetPixel(i + 1, j + 1).R);
			if (avg2>255)
			{
				avg2 = 255;
			}
			int avg3 =sqrt( (avg1*avg1)+(avg2*avg2));
			if (avg3>255)
			{
				avg3 = 255;
			}
			
			temp->SetPixel(i, j, Color::FromArgb(avg3, avg3, avg3));
		}
	}
	pictureBox1->Image = aaa;
	pictureBox2->Image = temp;
	c1.push_back(temp);
	System::Console::WriteLine("stack size:" + c1.size());
}

private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	////threshold/////
	int t = Convert::ToInt32(textBox1->Text);
	temp = clone(temp);
	Bitmap^ sss = c1.back();
	for (int j = 0; j < sss->Height; j++){
		for (int i = 0; i < sss->Width; i++)
		{
			if (sss->GetPixel(i, j).R <  t) {
				temp->SetPixel(i, j, Color::FromArgb(0,0,0));
			}
			else
			{
				temp->SetPixel(i, j, Color::FromArgb(255, 255, 255));
			}
		}
}
	pictureBox2->Image = temp;
	pictureBox1->Image = sss;
	c1.push_back(temp);
	System::Console::WriteLine("stack size:" + c1.size());
}

private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	////////////green line//////////////
	Bitmap^sss = c1.back();
	temp = clone(temp);
	temp = clone(c1.at(c1.size() - 3));
	
	for (int j = 0; j < sss->Height; j++) {
		for (int i = 0; i < sss->Width; i++)
		{
			if (sss->GetPixel(i, j).R ==255) {
				temp->SetPixel(i, j, Color::FromArgb(0, 255, 0));
			}
			
		}
	}
	
	pictureBox2->Image = temp;
	pictureBox1->Image = sss;
	c1.push_back(temp);
	System::Console::WriteLine("stack size:" + c1.size());

}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	double c = Convert::ToDouble(textBox2->Text);
	double arg = c * PI / 180;
	Bitmap^sss = c1.back();
	Bitmap^ temp1 = gcnew Bitmap(400,400);
	/////////initialize new image//////////
	temp = clone(temp);
	for (int j = 0; j < temp->Height; j++) {
		for (int i = 0; i < temp->Width; i++)
		{
			temp->SetPixel(i, j, Color::FromArgb(0, 0, 0));
		}
	}
	//////第一次順轉/////
	
	for (int j = 0; j < sss->Height; j++) {
		for (int i = 0; i < sss->Width; i++)
		{
			int x = round(i*cos(arg)+j*-sin(arg));////順轉////
			int y = round(i*sin(arg)+j*cos(arg));
			if (x < 0 || y < 0) continue;
			if (x >= 320 || y >= 240) continue;

			int o = sss->GetPixel(i, j).R;
			temp->SetPixel(x, y, Color::FromArgb(o,o,o));
		}
	}
	//////////第二次是逆轉回來///////
	int sx, sy;
	int ox = (temp->Width) / 2; ///old x
	int oy = (temp->Height) / 2;
	
	int newx = (temp1->Width) / 2;
	int newy = (temp1->Height) / 2;

	for (int j = 0; j < temp1->Height; j++) {
		for (int i = 0; i < temp1->Width; i++)
		{	
			sx = -newx * cos(arg) - newy * sin(arg) + ox;
			sy = newx * sin(arg) - newy * cos(arg) + oy;

			int x = round(sx+i*cos(arg) + j*sin(arg));////逆轉////
			int y = round(sy+i*-sin(arg) + j*cos(arg));

			if (y >= 0 && y<temp->Height && x >= 0 && x<temp->Width) {
				int o = sss->GetPixel(x, y).R;
				temp1->SetPixel(i, j, Color::FromArgb(o, o, o));
			}
			else {
				temp1->SetPixel(i, j,Color::FromArgb(0,0,0));
			}
		}
	}
	pictureBox1->Image = sss;
	pictureBox2->Image = temp1;
	c1.push_back(temp1);
	System::Console::WriteLine("stack size:" + c1.size());
	
}


	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		///////histogram equalization///////////
		Bitmap^sss = c1.back();
		temp = clone(temp);
		double initial[256];///裝每個pixel的出現次數
		double acc[256];////累加機率
		double result[256];////equalization後的機率
		double histo[256];

		for (int i = 0; i < 256; i++)
		{///////initialize/////////
			/////算n/////
			initial[i] = 0; acc[i] = 0; result[i] = 0; histo[i] = 0;
		}
		for (int j = 0; j < sss->Height; j++) {
			for (int i = 0; i < sss->Width; i++){
				for (int x = 0; x < 256; x++){
					if (sss->GetPixel(i, j).R == x) {
						initial[x] ++;
					}
				}
			}
		}
		for (int i = 0; i < 256; i++) {
		chart1->Series[0]->Points->AddXY(i, initial[i]);
		}////印第一張histogram////
		for (int i = 0; i < 256; i++)
		{
			initial[i] = double(initial[i] / (sss->Height * sss->Width));
		}
		for (int i = 0; i < 256; i++)
		{
			if (i==0)
			{
				acc[0] = initial[0];
			}
			else
			{
				acc[i] = acc[i-1] + initial[i ];
			}
			result[i] = acc[i] *255;

		}
		
		for (int j = 0; j < sss->Height; j++)
		{
			for (int i = 0; i < sss->Width; i++)
			{

				int t = sss->GetPixel(i, j).R;//若像素值等於0~255其中一個,用新值取代
				temp->SetPixel(i, j, Color::FromArgb(System::Convert::ToInt32(result[t]), System::Convert::ToInt32(result[t]), System::Convert::ToInt32(result[t])));
				for (int x = 0; x < 256; x++) {
					if (temp->GetPixel(i, j).R == x) {
						histo[x] ++;
					}
				}

			}
		}
		for (int i = 0; i < 256; i++) {
			chart2->Series[0]->Points->AddXY(i, histo[i]);
		}
		
		pictureBox1->Image = sss;
		pictureBox2->Image = temp;
		c1.push_back(temp);
		System::Console::WriteLine("stack size:" + c1.size());

	}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap^sss = c1.back();
	temp = clone(temp);
	int a = Convert::ToInt32(textBox3->Text);
	Bitmap^temp = gcnew Bitmap(sss->Width*a,sss->Height/a);//(w,h)
	
		  /////////initialize new image//////////
	for (int j = 0; j < temp->Height; j++) {
		for (int i = 0; i < temp->Width; i++)
		{
			temp->SetPixel(i, j, Color::FromArgb(0, 0, 0));
		}
	}

	for (int j = 0; j < sss->Height; j++) {
		for (int i = 0; i < sss->Width; i++)
		{
			int x = i*a;
			int y = j/a;
			if (x < 0 || y < 0) continue;
			if (x >= temp->Width || y >= temp->Height) continue;
			int o = sss->GetPixel(i, j).R;
			temp->SetPixel(x, y, Color::FromArgb(o, o, o));
		}
	}

	for (int j = 0; j < temp->Height; j++) {
		for (int i = 0; i < temp->Width; i++)
		{
			int x = i/a;
			int y = j * a;
			if (x < 0 || y < 0) continue;
			//if (x >= temp->Width || y >= temp->Height) continue;
			int o = sss->GetPixel(x, y).R;
			temp->SetPixel(i, j, Color::FromArgb(o, o, o));
		}
	}
	pictureBox2->Image = temp;
	c1.push_back(temp);
	System::Console::WriteLine("stack size:" + c1.size());

}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap^sss = c1.back();
	temp = clone(temp);
	int a = Convert::ToInt32(textBox3->Text);
	temp = gcnew Bitmap(sss->Width/a, sss->Height * a);//(w,h)

															 /////////initialize new image//////////
	for (int j = 0; j < temp->Height; j++) {
		for (int i = 0; i < temp->Width; i++)
		{
			temp->SetPixel(i, j, Color::FromArgb(0, 0, 0));
		}
	}

	for (int j = 0; j < sss->Height; j++) {
		for (int i = 0; i < sss->Width; i++)
		{
			int x = i/a;
			int y = j*a;
			
			int o = sss->GetPixel(i, j).R;
			temp->SetPixel(x, y, Color::FromArgb(o, o, o));
		}
	}

	for (int j = 0; j < temp->Height; j++) {
		for (int i = 0; i < temp->Width; i++)
		{
			int x = i * a;
			int y = j / a;
			if (x < 0 || y < 0) continue;
			
			int o = sss->GetPixel(x, y).R;
			temp->SetPixel(i, j, Color::FromArgb(o, o, o));
		}
	}
	pictureBox2->Image = temp;
	c1.push_back(temp);
	System::Console::WriteLine("stack size:" + c1.size());
}
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chart2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
};

