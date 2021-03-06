#include <iostream>
#include <fstream>

// Minimize
#pragma once
#include <Windows.h>

// Convert String^ to std::strings
#include <msclr/marshal_cppstd.h>

// For string to become filesystem path
#include <experimental/filesystem>

// Math
#include <cmath>

// String
#include <string>

// For C++
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/opencv.hpp"

// Vectors
#include <vector>

using namespace std;
using namespace cv;
using std::vector;

#pragma once

namespace form1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

		/// <summary>
	/// Summary for rgb_hsi_form
	/// </summary>
	public ref class rgb_hsi_form : public System::Windows::Forms::Form
	{
	public:
		rgb_hsi_form(void)
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
		~rgb_hsi_form()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  btnOpen;
	private: System::Windows::Forms::OpenFileDialog^  openFile;
	public: System::Windows::Forms::PictureBox^  img_Hue;
	public: System::Windows::Forms::PictureBox^  img_crop0;


	private:


	
	private: System::Windows::Forms::Label^  lblHue;
	private: System::Windows::Forms::Label^  lblCropped;

	private: System::Windows::Forms::Panel^  progressPanel;



	private: System::Windows::Forms::RichTextBox^  txtProgress;
	private: System::Windows::Forms::Button^  btnLocation;
	private: System::Windows::Forms::Panel^  firstPanel;
	private: System::Windows::Forms::Panel^  secondPanel;


	public: System::Windows::Forms::PictureBox^  img_noblur;
	private: System::Windows::Forms::Label^  lblCanny;
	private: System::Windows::Forms::Label^  lblBlur;
	public: System::Windows::Forms::PictureBox^  img_shape0;
	private:

	private:

	private:
	public:
	private:

	private:

	private:

	public:


	private: System::Windows::Forms::Button^  btnSecond;
	public: System::Windows::Forms::PictureBox^  img_blur;
	private: System::Windows::Forms::Label^  lblNoBlur;
	public: System::Windows::Forms::PictureBox^  img_otsu0;
	private:

	private:
	public:


	private: System::Windows::Forms::Label^  lblOtsu;
	private: System::Windows::Forms::Button^  btnFirst;
	private: System::Windows::Forms::Panel^  origPanel;


	public: System::Windows::Forms::PictureBox^  img_orig;
	private:



	private: System::Windows::Forms::Label^  lblPathHead;




	private: System::Windows::Forms::RichTextBox^  lblPath;

	private: System::Windows::Forms::Panel^  panelBtn;
	private: System::Windows::Forms::Label^  lblTitle;
	private: System::Windows::Forms::Button^  btnMin;
	public: System::Windows::Forms::PictureBox^  img_crop3;
	private:

	public: System::Windows::Forms::PictureBox^  img_crop2;

	private:

	public: System::Windows::Forms::PictureBox^  img_crop1;
public: System::Windows::Forms::PictureBox^  img_shape3;


public: System::Windows::Forms::PictureBox^  img_shape1;
public: System::Windows::Forms::PictureBox^  img_shape2;





public: System::Windows::Forms::PictureBox^  img_otsu3;

public: System::Windows::Forms::PictureBox^  img_otsu2;

public: System::Windows::Forms::PictureBox^  img_otsu1;
private: System::Windows::Forms::Button^  btnThird;
private: System::Windows::Forms::Panel^  thirdPanel;

public: System::Windows::Forms::PictureBox^  img_class3;
private:

public: System::Windows::Forms::PictureBox^  img_class2;
private:

public: System::Windows::Forms::PictureBox^  img_class1;


private: System::Windows::Forms::Label^  label1;
public:
private: System::Windows::Forms::Label^  label2;
public: System::Windows::Forms::PictureBox^  img_class0;
private: System::Windows::Forms::Label^  label4;
public:
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::RichTextBox^  txtClassify3;
private: System::Windows::Forms::RichTextBox^  txtClassify2;
private: System::Windows::Forms::RichTextBox^  txtClassify1;
private: System::Windows::Forms::RichTextBox^  txtClassify0;
private: System::Windows::Forms::Button^  btnPredict;
private: System::Windows::Forms::Panel^  panel_pred;




private:

private:

private:

private:
public:

public:





	public:

	public:

	public:
	private:

	public:

	public:
	private:

	public:
	private:

	private:
	public:
	private:




	private:


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
		void InitializeComponent(void)
		{
			this->btnOpen = (gcnew System::Windows::Forms::Button());
			this->openFile = (gcnew System::Windows::Forms::OpenFileDialog());
			this->img_Hue = (gcnew System::Windows::Forms::PictureBox());
			this->img_crop0 = (gcnew System::Windows::Forms::PictureBox());
			this->lblHue = (gcnew System::Windows::Forms::Label());
			this->lblCropped = (gcnew System::Windows::Forms::Label());
			this->progressPanel = (gcnew System::Windows::Forms::Panel());
			this->txtProgress = (gcnew System::Windows::Forms::RichTextBox());
			this->btnLocation = (gcnew System::Windows::Forms::Button());
			this->firstPanel = (gcnew System::Windows::Forms::Panel());
			this->img_crop3 = (gcnew System::Windows::Forms::PictureBox());
			this->img_crop2 = (gcnew System::Windows::Forms::PictureBox());
			this->img_crop1 = (gcnew System::Windows::Forms::PictureBox());
			this->secondPanel = (gcnew System::Windows::Forms::Panel());
			this->img_shape3 = (gcnew System::Windows::Forms::PictureBox());
			this->img_shape1 = (gcnew System::Windows::Forms::PictureBox());
			this->img_shape2 = (gcnew System::Windows::Forms::PictureBox());
			this->img_otsu3 = (gcnew System::Windows::Forms::PictureBox());
			this->img_otsu2 = (gcnew System::Windows::Forms::PictureBox());
			this->img_otsu1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblOtsu = (gcnew System::Windows::Forms::Label());
			this->img_otsu0 = (gcnew System::Windows::Forms::PictureBox());
			this->lblNoBlur = (gcnew System::Windows::Forms::Label());
			this->img_blur = (gcnew System::Windows::Forms::PictureBox());
			this->img_noblur = (gcnew System::Windows::Forms::PictureBox());
			this->lblCanny = (gcnew System::Windows::Forms::Label());
			this->lblBlur = (gcnew System::Windows::Forms::Label());
			this->img_shape0 = (gcnew System::Windows::Forms::PictureBox());
			this->btnSecond = (gcnew System::Windows::Forms::Button());
			this->btnFirst = (gcnew System::Windows::Forms::Button());
			this->origPanel = (gcnew System::Windows::Forms::Panel());
			this->panel_pred = (gcnew System::Windows::Forms::Panel());
			this->btnPredict = (gcnew System::Windows::Forms::Button());
			this->lblPath = (gcnew System::Windows::Forms::RichTextBox());
			this->lblPathHead = (gcnew System::Windows::Forms::Label());
			this->img_orig = (gcnew System::Windows::Forms::PictureBox());
			this->panelBtn = (gcnew System::Windows::Forms::Panel());
			this->btnThird = (gcnew System::Windows::Forms::Button());
			this->btnMin = (gcnew System::Windows::Forms::Button());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->thirdPanel = (gcnew System::Windows::Forms::Panel());
			this->txtClassify3 = (gcnew System::Windows::Forms::RichTextBox());
			this->txtClassify2 = (gcnew System::Windows::Forms::RichTextBox());
			this->txtClassify1 = (gcnew System::Windows::Forms::RichTextBox());
			this->txtClassify0 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->img_class3 = (gcnew System::Windows::Forms::PictureBox());
			this->img_class2 = (gcnew System::Windows::Forms::PictureBox());
			this->img_class1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->img_class0 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_Hue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_crop0))->BeginInit();
			this->progressPanel->SuspendLayout();
			this->firstPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_crop3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_crop2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_crop1))->BeginInit();
			this->secondPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_shape3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_shape1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_shape2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_otsu3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_otsu2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_otsu1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_otsu0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_blur))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_noblur))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_shape0))->BeginInit();
			this->origPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_orig))->BeginInit();
			this->panelBtn->SuspendLayout();
			this->thirdPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_class3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_class2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_class1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_class0))->BeginInit();
			this->SuspendLayout();
			// 
			// btnOpen
			// 
			this->btnOpen->BackColor = System::Drawing::Color::White;
			this->btnOpen->FlatAppearance->BorderSize = 0;
			this->btnOpen->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnOpen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOpen->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnOpen->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->btnOpen->Location = System::Drawing::Point(253, 20);
			this->btnOpen->Name = L"btnOpen";
			this->btnOpen->Size = System::Drawing::Size(112, 28);
			this->btnOpen->TabIndex = 0;
			this->btnOpen->Text = L"OPEN FILE";
			this->btnOpen->UseVisualStyleBackColor = false;
			this->btnOpen->Click += gcnew System::EventHandler(this, &rgb_hsi_form::btnOpen_Click);
			// 
			// openFile
			// 
			this->openFile->FileName = L"openFile";
			// 
			// img_Hue
			// 
			this->img_Hue->BackColor = System::Drawing::Color::White;
			this->img_Hue->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_Hue->Location = System::Drawing::Point(12, 23);
			this->img_Hue->Name = L"img_Hue";
			this->img_Hue->Size = System::Drawing::Size(350, 324);
			this->img_Hue->TabIndex = 1;
			this->img_Hue->TabStop = false;
			// 
			// img_crop0
			// 
			this->img_crop0->BackColor = System::Drawing::Color::White;
			this->img_crop0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_crop0->Location = System::Drawing::Point(395, 23);
			this->img_crop0->Name = L"img_crop0";
			this->img_crop0->Size = System::Drawing::Size(156, 160);
			this->img_crop0->TabIndex = 2;
			this->img_crop0->TabStop = false;
			// 
			// lblHue
			// 
			this->lblHue->AutoSize = true;
			this->lblHue->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6.75F, System::Drawing::FontStyle::Bold));
			this->lblHue->ForeColor = System::Drawing::Color::Gray;
			this->lblHue->Location = System::Drawing::Point(10, 7);
			this->lblHue->Name = L"lblHue";
			this->lblHue->Size = System::Drawing::Size(24, 12);
			this->lblHue->TabIndex = 3;
			this->lblHue->Text = L"HUE";
			// 
			// lblCropped
			// 
			this->lblCropped->AutoSize = true;
			this->lblCropped->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6.75F, System::Drawing::FontStyle::Bold));
			this->lblCropped->ForeColor = System::Drawing::Color::Gray;
			this->lblCropped->Location = System::Drawing::Point(393, 7);
			this->lblCropped->Name = L"lblCropped";
			this->lblCropped->Size = System::Drawing::Size(52, 12);
			this->lblCropped->TabIndex = 4;
			this->lblCropped->Text = L"SEGMENTS";
			// 
			// progressPanel
			// 
			this->progressPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->progressPanel->Controls->Add(this->txtProgress);
			this->progressPanel->Location = System::Drawing::Point(234, 419);
			this->progressPanel->Name = L"progressPanel";
			this->progressPanel->Size = System::Drawing::Size(750, 115);
			this->progressPanel->TabIndex = 7;
			// 
			// txtProgress
			// 
			this->txtProgress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->txtProgress->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtProgress->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txtProgress->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtProgress->ForeColor = System::Drawing::Color::White;
			this->txtProgress->Location = System::Drawing::Point(13, 11);
			this->txtProgress->Name = L"txtProgress";
			this->txtProgress->ReadOnly = true;
			this->txtProgress->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->txtProgress->Size = System::Drawing::Size(725, 95);
			this->txtProgress->TabIndex = 100;
			this->txtProgress->TabStop = false;
			this->txtProgress->Text = L"";
			// 
			// btnLocation
			// 
			this->btnLocation->BackColor = System::Drawing::Color::White;
			this->btnLocation->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnLocation->FlatAppearance->BorderSize = 0;
			this->btnLocation->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnLocation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLocation->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnLocation->ForeColor = System::Drawing::Color::Black;
			this->btnLocation->Location = System::Drawing::Point(800, 20);
			this->btnLocation->Name = L"btnLocation";
			this->btnLocation->Size = System::Drawing::Size(133, 28);
			this->btnLocation->TabIndex = 3;
			this->btnLocation->Text = L"SEE IMAGES";
			this->btnLocation->UseVisualStyleBackColor = false;
			this->btnLocation->Click += gcnew System::EventHandler(this, &rgb_hsi_form::btnLocation_Click);
			// 
			// firstPanel
			// 
			this->firstPanel->BackColor = System::Drawing::Color::White;
			this->firstPanel->Controls->Add(this->img_crop3);
			this->firstPanel->Controls->Add(this->img_crop2);
			this->firstPanel->Controls->Add(this->img_crop1);
			this->firstPanel->Controls->Add(this->img_Hue);
			this->firstPanel->Controls->Add(this->lblCropped);
			this->firstPanel->Controls->Add(this->lblHue);
			this->firstPanel->Controls->Add(this->img_crop0);
			this->firstPanel->Location = System::Drawing::Point(246, 56);
			this->firstPanel->Name = L"firstPanel";
			this->firstPanel->Size = System::Drawing::Size(725, 357);
			this->firstPanel->TabIndex = 9;
			// 
			// img_crop3
			// 
			this->img_crop3->BackColor = System::Drawing::Color::White;
			this->img_crop3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_crop3->Location = System::Drawing::Point(559, 187);
			this->img_crop3->Name = L"img_crop3";
			this->img_crop3->Size = System::Drawing::Size(156, 160);
			this->img_crop3->TabIndex = 7;
			this->img_crop3->TabStop = false;
			// 
			// img_crop2
			// 
			this->img_crop2->BackColor = System::Drawing::Color::White;
			this->img_crop2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_crop2->Location = System::Drawing::Point(395, 187);
			this->img_crop2->Name = L"img_crop2";
			this->img_crop2->Size = System::Drawing::Size(156, 160);
			this->img_crop2->TabIndex = 6;
			this->img_crop2->TabStop = false;
			// 
			// img_crop1
			// 
			this->img_crop1->BackColor = System::Drawing::Color::White;
			this->img_crop1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_crop1->Location = System::Drawing::Point(559, 23);
			this->img_crop1->Name = L"img_crop1";
			this->img_crop1->Size = System::Drawing::Size(156, 160);
			this->img_crop1->TabIndex = 5;
			this->img_crop1->TabStop = false;
			// 
			// secondPanel
			// 
			this->secondPanel->BackColor = System::Drawing::Color::White;
			this->secondPanel->Controls->Add(this->img_shape3);
			this->secondPanel->Controls->Add(this->img_shape1);
			this->secondPanel->Controls->Add(this->img_shape2);
			this->secondPanel->Controls->Add(this->img_otsu3);
			this->secondPanel->Controls->Add(this->img_otsu2);
			this->secondPanel->Controls->Add(this->img_otsu1);
			this->secondPanel->Controls->Add(this->lblOtsu);
			this->secondPanel->Controls->Add(this->img_otsu0);
			this->secondPanel->Controls->Add(this->lblNoBlur);
			this->secondPanel->Controls->Add(this->img_blur);
			this->secondPanel->Controls->Add(this->img_noblur);
			this->secondPanel->Controls->Add(this->lblCanny);
			this->secondPanel->Controls->Add(this->lblBlur);
			this->secondPanel->Controls->Add(this->img_shape0);
			this->secondPanel->Location = System::Drawing::Point(246, 56);
			this->secondPanel->Name = L"secondPanel";
			this->secondPanel->Size = System::Drawing::Size(725, 357);
			this->secondPanel->TabIndex = 10;
			// 
			// img_shape3
			// 
			this->img_shape3->BackColor = System::Drawing::Color::White;
			this->img_shape3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_shape3->Location = System::Drawing::Point(568, 188);
			this->img_shape3->Name = L"img_shape3";
			this->img_shape3->Size = System::Drawing::Size(154, 164);
			this->img_shape3->TabIndex = 14;
			this->img_shape3->TabStop = false;
			// 
			// img_shape1
			// 
			this->img_shape1->BackColor = System::Drawing::Color::White;
			this->img_shape1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_shape1->Location = System::Drawing::Point(568, 21);
			this->img_shape1->Name = L"img_shape1";
			this->img_shape1->Size = System::Drawing::Size(154, 164);
			this->img_shape1->TabIndex = 13;
			this->img_shape1->TabStop = false;
			// 
			// img_shape2
			// 
			this->img_shape2->BackColor = System::Drawing::Color::White;
			this->img_shape2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_shape2->Location = System::Drawing::Point(409, 188);
			this->img_shape2->Name = L"img_shape2";
			this->img_shape2->Size = System::Drawing::Size(154, 164);
			this->img_shape2->TabIndex = 12;
			this->img_shape2->TabStop = false;
			// 
			// img_otsu3
			// 
			this->img_otsu3->BackColor = System::Drawing::Color::White;
			this->img_otsu3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_otsu3->Location = System::Drawing::Point(246, 188);
			this->img_otsu3->Name = L"img_otsu3";
			this->img_otsu3->Size = System::Drawing::Size(154, 164);
			this->img_otsu3->TabIndex = 11;
			this->img_otsu3->TabStop = false;
			// 
			// img_otsu2
			// 
			this->img_otsu2->BackColor = System::Drawing::Color::White;
			this->img_otsu2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_otsu2->Location = System::Drawing::Point(88, 188);
			this->img_otsu2->Name = L"img_otsu2";
			this->img_otsu2->Size = System::Drawing::Size(154, 164);
			this->img_otsu2->TabIndex = 10;
			this->img_otsu2->TabStop = false;
			// 
			// img_otsu1
			// 
			this->img_otsu1->BackColor = System::Drawing::Color::White;
			this->img_otsu1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_otsu1->Location = System::Drawing::Point(246, 21);
			this->img_otsu1->Name = L"img_otsu1";
			this->img_otsu1->Size = System::Drawing::Size(154, 164);
			this->img_otsu1->TabIndex = 9;
			this->img_otsu1->TabStop = false;
			// 
			// lblOtsu
			// 
			this->lblOtsu->AutoSize = true;
			this->lblOtsu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6.75F, System::Drawing::FontStyle::Bold));
			this->lblOtsu->ForeColor = System::Drawing::Color::Gray;
			this->lblOtsu->Location = System::Drawing::Point(86, 7);
			this->lblOtsu->Name = L"lblOtsu";
			this->lblOtsu->Size = System::Drawing::Size(79, 12);
			this->lblOtsu->TabIndex = 8;
			this->lblOtsu->Text = L"OTSU\'S METHOD";
			// 
			// img_otsu0
			// 
			this->img_otsu0->BackColor = System::Drawing::Color::White;
			this->img_otsu0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_otsu0->Location = System::Drawing::Point(88, 21);
			this->img_otsu0->Name = L"img_otsu0";
			this->img_otsu0->Size = System::Drawing::Size(154, 164);
			this->img_otsu0->TabIndex = 7;
			this->img_otsu0->TabStop = false;
			// 
			// lblNoBlur
			// 
			this->lblNoBlur->AutoSize = true;
			this->lblNoBlur->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNoBlur->ForeColor = System::Drawing::Color::Gray;
			this->lblNoBlur->Location = System::Drawing::Point(20, 53);
			this->lblNoBlur->Name = L"lblNoBlur";
			this->lblNoBlur->Size = System::Drawing::Size(45, 12);
			this->lblNoBlur->TabIndex = 6;
			this->lblNoBlur->Text = L"NO BLUR";
			// 
			// img_blur
			// 
			this->img_blur->BackColor = System::Drawing::Color::White;
			this->img_blur->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->img_blur->Location = System::Drawing::Point(2, 182);
			this->img_blur->Name = L"img_blur";
			this->img_blur->Size = System::Drawing::Size(80, 80);
			this->img_blur->TabIndex = 5;
			this->img_blur->TabStop = false;
			// 
			// img_noblur
			// 
			this->img_noblur->BackColor = System::Drawing::Color::White;
			this->img_noblur->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->img_noblur->Location = System::Drawing::Point(2, 70);
			this->img_noblur->Name = L"img_noblur";
			this->img_noblur->Size = System::Drawing::Size(80, 80);
			this->img_noblur->TabIndex = 1;
			this->img_noblur->TabStop = false;
			// 
			// lblCanny
			// 
			this->lblCanny->AutoSize = true;
			this->lblCanny->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6.75F, System::Drawing::FontStyle::Bold));
			this->lblCanny->ForeColor = System::Drawing::Color::Gray;
			this->lblCanny->Location = System::Drawing::Point(407, 7);
			this->lblCanny->Name = L"lblCanny";
			this->lblCanny->Size = System::Drawing::Size(161, 12);
			this->lblCanny->TabIndex = 4;
			this->lblCanny->Text = L"CANNY EDGE AND SHAPE CONTOUR\r\n";
			this->lblCanny->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblBlur
			// 
			this->lblBlur->AutoSize = true;
			this->lblBlur->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBlur->ForeColor = System::Drawing::Color::Gray;
			this->lblBlur->Location = System::Drawing::Point(17, 165);
			this->lblBlur->Name = L"lblBlur";
			this->lblBlur->Size = System::Drawing::Size(50, 12);
			this->lblBlur->TabIndex = 3;
			this->lblBlur->Text = L"GAUSSIAN";
			// 
			// img_shape0
			// 
			this->img_shape0->BackColor = System::Drawing::Color::White;
			this->img_shape0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_shape0->Location = System::Drawing::Point(409, 21);
			this->img_shape0->Name = L"img_shape0";
			this->img_shape0->Size = System::Drawing::Size(154, 164);
			this->img_shape0->TabIndex = 2;
			this->img_shape0->TabStop = false;
			// 
			// btnSecond
			// 
			this->btnSecond->BackColor = System::Drawing::Color::White;
			this->btnSecond->FlatAppearance->BorderSize = 0;
			this->btnSecond->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnSecond->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSecond->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnSecond->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->btnSecond->Location = System::Drawing::Point(474, 20);
			this->btnSecond->Name = L"btnSecond";
			this->btnSecond->Size = System::Drawing::Size(100, 28);
			this->btnSecond->TabIndex = 2;
			this->btnSecond->Text = L"SECOND";
			this->btnSecond->UseVisualStyleBackColor = false;
			this->btnSecond->Click += gcnew System::EventHandler(this, &rgb_hsi_form::btnSecond_Click);
			// 
			// btnFirst
			// 
			this->btnFirst->BackColor = System::Drawing::Color::White;
			this->btnFirst->FlatAppearance->BorderSize = 0;
			this->btnFirst->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnFirst->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFirst->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnFirst->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->btnFirst->Location = System::Drawing::Point(371, 20);
			this->btnFirst->Name = L"btnFirst";
			this->btnFirst->Size = System::Drawing::Size(100, 28);
			this->btnFirst->TabIndex = 1;
			this->btnFirst->Text = L"FIRST";
			this->btnFirst->UseVisualStyleBackColor = false;
			this->btnFirst->Click += gcnew System::EventHandler(this, &rgb_hsi_form::btnFirst_Click);
			// 
			// origPanel
			// 
			this->origPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->origPanel->Controls->Add(this->panel_pred);
			this->origPanel->Controls->Add(this->btnPredict);
			this->origPanel->Controls->Add(this->lblPath);
			this->origPanel->Controls->Add(this->lblPathHead);
			this->origPanel->Controls->Add(this->img_orig);
			this->origPanel->Location = System::Drawing::Point(-2, -5);
			this->origPanel->Name = L"origPanel";
			this->origPanel->Size = System::Drawing::Size(238, 542);
			this->origPanel->TabIndex = 13;
			// 
			// panel_pred
			// 
			this->panel_pred->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->panel_pred->Location = System::Drawing::Point(1, 506);
			this->panel_pred->Name = L"panel_pred";
			this->panel_pred->Size = System::Drawing::Size(10, 32);
			this->panel_pred->TabIndex = 11;
			this->panel_pred->Visible = false;
			// 
			// btnPredict
			// 
			this->btnPredict->BackColor = System::Drawing::Color::White;
			this->btnPredict->Enabled = false;
			this->btnPredict->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			this->btnPredict->FlatAppearance->BorderSize = 0;
			this->btnPredict->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPredict->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPredict->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->btnPredict->Location = System::Drawing::Point(0, 506);
			this->btnPredict->Name = L"btnPredict";
			this->btnPredict->Size = System::Drawing::Size(238, 32);
			this->btnPredict->TabIndex = 9;
			this->btnPredict->Text = L"PREDICT";
			this->btnPredict->UseVisualStyleBackColor = false;
			this->btnPredict->Click += gcnew System::EventHandler(this, &rgb_hsi_form::btnPredict_Click);
			// 
			// lblPath
			// 
			this->lblPath->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->lblPath->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lblPath->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6.75F, System::Drawing::FontStyle::Bold));
			this->lblPath->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)));
			this->lblPath->Location = System::Drawing::Point(9, 410);
			this->lblPath->Name = L"lblPath";
			this->lblPath->ReadOnly = true;
			this->lblPath->Size = System::Drawing::Size(220, 46);
			this->lblPath->TabIndex = 10;
			this->lblPath->Text = L"C:\\\\";
			// 
			// lblPathHead
			// 
			this->lblPathHead->AutoSize = true;
			this->lblPathHead->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6.75F, System::Drawing::FontStyle::Bold));
			this->lblPathHead->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)));
			this->lblPathHead->Location = System::Drawing::Point(7, 390);
			this->lblPathHead->Name = L"lblPathHead";
			this->lblPathHead->Size = System::Drawing::Size(117, 12);
			this->lblPathHead->TabIndex = 6;
			this->lblPathHead->Text = L"PATH OF ORIGINAL IMAGE";
			// 
			// img_orig
			// 
			this->img_orig->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->img_orig->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_orig->Location = System::Drawing::Point(9, 76);
			this->img_orig->Name = L"img_orig";
			this->img_orig->Size = System::Drawing::Size(220, 304);
			this->img_orig->TabIndex = 5;
			this->img_orig->TabStop = false;
			// 
			// panelBtn
			// 
			this->panelBtn->BackColor = System::Drawing::Color::White;
			this->panelBtn->Controls->Add(this->btnThird);
			this->panelBtn->Controls->Add(this->btnMin);
			this->panelBtn->Controls->Add(this->lblTitle);
			this->panelBtn->Controls->Add(this->btnFirst);
			this->panelBtn->Controls->Add(this->btnOpen);
			this->panelBtn->Controls->Add(this->btnSecond);
			this->panelBtn->Controls->Add(this->btnLocation);
			this->panelBtn->Location = System::Drawing::Point(-3, -12);
			this->panelBtn->Name = L"panelBtn";
			this->panelBtn->Size = System::Drawing::Size(986, 60);
			this->panelBtn->TabIndex = 12;
			this->panelBtn->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &rgb_hsi_form::panelBtn_MouseDown);
			this->panelBtn->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &rgb_hsi_form::panelBtn_MouseMove);
			this->panelBtn->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &rgb_hsi_form::panelBtn_MouseUp);
			// 
			// btnThird
			// 
			this->btnThird->BackColor = System::Drawing::Color::White;
			this->btnThird->Enabled = false;
			this->btnThird->FlatAppearance->BorderSize = 0;
			this->btnThird->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnThird->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnThird->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnThird->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->btnThird->Location = System::Drawing::Point(577, 20);
			this->btnThird->Name = L"btnThird";
			this->btnThird->Size = System::Drawing::Size(100, 28);
			this->btnThird->TabIndex = 8;
			this->btnThird->Text = L"THIRD";
			this->btnThird->UseVisualStyleBackColor = false;
			this->btnThird->Click += gcnew System::EventHandler(this, &rgb_hsi_form::btnThird_Click);
			// 
			// btnMin
			// 
			this->btnMin->BackColor = System::Drawing::Color::White;
			this->btnMin->FlatAppearance->BorderColor = System::Drawing::Color::Gainsboro;
			this->btnMin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMin->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold));
			this->btnMin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnMin->Location = System::Drawing::Point(939, 20);
			this->btnMin->Name = L"btnMin";
			this->btnMin->Size = System::Drawing::Size(32, 28);
			this->btnMin->TabIndex = 7;
			this->btnMin->Text = L"_";
			this->btnMin->UseVisualStyleBackColor = false;
			this->btnMin->Click += gcnew System::EventHandler(this, &rgb_hsi_form::btnMin_Click);
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->BackColor = System::Drawing::Color::White;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::Black;
			this->lblTitle->Location = System::Drawing::Point(10, 23);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(196, 23);
			this->lblTitle->TabIndex = 6;
			this->lblTitle->Text = L"Maize Disease Detection";
			// 
			// thirdPanel
			// 
			this->thirdPanel->BackColor = System::Drawing::Color::White;
			this->thirdPanel->Controls->Add(this->txtClassify0);
			this->thirdPanel->Controls->Add(this->txtClassify3);
			this->thirdPanel->Controls->Add(this->txtClassify2);
			this->thirdPanel->Controls->Add(this->txtClassify1);
			this->thirdPanel->Controls->Add(this->label4);
			this->thirdPanel->Controls->Add(this->label3);
			this->thirdPanel->Controls->Add(this->img_class3);
			this->thirdPanel->Controls->Add(this->img_class2);
			this->thirdPanel->Controls->Add(this->img_class1);
			this->thirdPanel->Controls->Add(this->label1);
			this->thirdPanel->Controls->Add(this->label2);
			this->thirdPanel->Controls->Add(this->img_class0);
			this->thirdPanel->Location = System::Drawing::Point(246, 56);
			this->thirdPanel->Name = L"thirdPanel";
			this->thirdPanel->Size = System::Drawing::Size(725, 357);
			this->thirdPanel->TabIndex = 10;
			// 
			// txtClassify3
			// 
			this->txtClassify3->BackColor = System::Drawing::Color::White;
			this->txtClassify3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtClassify3->Font = (gcnew System::Drawing::Font(L"Circular Std Black", 14.2F, System::Drawing::FontStyle::Bold));
			this->txtClassify3->Location = System::Drawing::Point(544, 210);
			this->txtClassify3->Name = L"txtClassify3";
			this->txtClassify3->ReadOnly = true;
			this->txtClassify3->Size = System::Drawing::Size(137, 136);
			this->txtClassify3->TabIndex = 13;
			this->txtClassify3->TabStop = false;
			this->txtClassify3->Text = L"";
			// 
			// txtClassify2
			// 
			this->txtClassify2->BackColor = System::Drawing::Color::White;
			this->txtClassify2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtClassify2->Font = (gcnew System::Drawing::Font(L"Circular Std Black", 14.2F, System::Drawing::FontStyle::Bold));
			this->txtClassify2->Location = System::Drawing::Point(17, 210);
			this->txtClassify2->Name = L"txtClassify2";
			this->txtClassify2->ReadOnly = true;
			this->txtClassify2->Size = System::Drawing::Size(137, 136);
			this->txtClassify2->TabIndex = 12;
			this->txtClassify2->TabStop = false;
			this->txtClassify2->Text = L"";
			// 
			// txtClassify1
			// 
			this->txtClassify1->BackColor = System::Drawing::Color::White;
			this->txtClassify1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtClassify1->Font = (gcnew System::Drawing::Font(L"Circular Std Black", 14.2F, System::Drawing::FontStyle::Bold));
			this->txtClassify1->Location = System::Drawing::Point(544, 35);
			this->txtClassify1->Name = L"txtClassify1";
			this->txtClassify1->ReadOnly = true;
			this->txtClassify1->Size = System::Drawing::Size(137, 136);
			this->txtClassify1->TabIndex = 11;
			this->txtClassify1->TabStop = false;
			this->txtClassify1->Text = L"";
			// 
			// txtClassify0
			// 
			this->txtClassify0->BackColor = System::Drawing::Color::White;
			this->txtClassify0->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtClassify0->Font = (gcnew System::Drawing::Font(L"Circular Std Black", 14.2F, System::Drawing::FontStyle::Bold));
			this->txtClassify0->Location = System::Drawing::Point(16, 35);
			this->txtClassify0->Name = L"txtClassify0";
			this->txtClassify0->ReadOnly = true;
			this->txtClassify0->Size = System::Drawing::Size(137, 136);
			this->txtClassify0->TabIndex = 10;
			this->txtClassify0->TabStop = false;
			this->txtClassify0->Text = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6.75F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::Gray;
			this->label4->Location = System::Drawing::Point(541, 1);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 24);
			this->label4->TabIndex = 9;
			this->label4->Text = L"PREDICTED DISEASE\r\nSegment 1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6.75F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::Gray;
			this->label3->Location = System::Drawing::Point(14, 1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 24);
			this->label3->TabIndex = 8;
			this->label3->Text = L"PREDICTED DISEASE\r\nSegment 0";
			// 
			// img_class3
			// 
			this->img_class3->BackColor = System::Drawing::Color::White;
			this->img_class3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_class3->Location = System::Drawing::Point(365, 176);
			this->img_class3->Name = L"img_class3";
			this->img_class3->Size = System::Drawing::Size(170, 170);
			this->img_class3->TabIndex = 7;
			this->img_class3->TabStop = false;
			// 
			// img_class2
			// 
			this->img_class2->BackColor = System::Drawing::Color::White;
			this->img_class2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_class2->Location = System::Drawing::Point(180, 176);
			this->img_class2->Name = L"img_class2";
			this->img_class2->Size = System::Drawing::Size(170, 170);
			this->img_class2->TabIndex = 6;
			this->img_class2->TabStop = false;
			// 
			// img_class1
			// 
			this->img_class1->BackColor = System::Drawing::Color::White;
			this->img_class1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_class1->Location = System::Drawing::Point(365, 1);
			this->img_class1->Name = L"img_class1";
			this->img_class1->Size = System::Drawing::Size(170, 170);
			this->img_class1->TabIndex = 5;
			this->img_class1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6.75F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::Gray;
			this->label1->Location = System::Drawing::Point(541, 176);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"PREDICTED DISEASE\r\nSegment 3\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6.75F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Gray;
			this->label2->Location = System::Drawing::Point(14, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"PREDICTED DISEASE\r\nSegment 2";
			// 
			// img_class0
			// 
			this->img_class0->BackColor = System::Drawing::Color::White;
			this->img_class0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_class0->Location = System::Drawing::Point(180, 1);
			this->img_class0->Name = L"img_class0";
			this->img_class0->Size = System::Drawing::Size(170, 170);
			this->img_class0->TabIndex = 2;
			this->img_class0->TabStop = false;
			// 
			// rgb_hsi_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(980, 534);
			this->Controls->Add(this->panelBtn);
			this->Controls->Add(this->origPanel);
			this->Controls->Add(this->progressPanel);
			this->Controls->Add(this->firstPanel);
			this->Controls->Add(this->thirdPanel);
			this->Controls->Add(this->secondPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"rgb_hsi_form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RGB to HSI";
			this->TopMost = true;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_Hue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_crop0))->EndInit();
			this->progressPanel->ResumeLayout(false);
			this->firstPanel->ResumeLayout(false);
			this->firstPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_crop3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_crop2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_crop1))->EndInit();
			this->secondPanel->ResumeLayout(false);
			this->secondPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_shape3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_shape1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_shape2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_otsu3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_otsu2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_otsu1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_otsu0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_blur))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_noblur))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_shape0))->EndInit();
			this->origPanel->ResumeLayout(false);
			this->origPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_orig))->EndInit();
			this->panelBtn->ResumeLayout(false);
			this->panelBtn->PerformLayout();
			this->thirdPanel->ResumeLayout(false);
			this->thirdPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_class3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_class2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_class1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_class0))->EndInit();
			this->ResumeLayout(false);

		}

	#pragma endregion

	private: System::Void btnOpen_Click(System::Object^  sender, System::EventArgs^  e) {

		// Delete maize
		remove("maize.csv");

		System::String^ message = "";		
		System::String^ final_path = "";
		System::String^ img_change = "";

		txtProgress->Clear();	

		//*** START OF RGB CONVERSION ***/

		rgb_hsi_form::openFile->InitialDirectory = "C:/Users/Sam/Documents/School/THESIS/THESIS II/corn pics/sRGB/NO RESIZE/July 7";
		openFile->Filter = "JPG (*.jpg)|*.jpg|All files (*.*)|*.*";
		openFile->FilterIndex = 2;
		openFile->RestoreDirectory = true;

		if (openFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			float r, g, b, h, s, in;

			cv::String img_path = msclr::interop::marshal_as<std::string>(openFile->FileName);			
			cv::Mat image = cv::imread(img_path);
			
			img_change = gcnew System::String(img_path.c_str());
			img_orig->BackgroundImage = System::Drawing::Image::FromFile(img_change);
			lblPath->Text = img_change;

			string img_path2 = img_path;

			//*** GET FILENAME FROM PATH ***//
			const size_t last_slash_idx = img_path2.find_last_of("\\/");
			if (std::string::npos != last_slash_idx) {
				img_path2.erase(0, last_slash_idx + 1);
			}

			//*** Remove extension if present //***
			const size_t period_idx = img_path2.rfind('.');
			if (std::string::npos != period_idx) {
				img_path2.erase(period_idx);
			}

			final_path = gcnew System::String(img_path2.c_str());						

			txtProgress->AppendText("Opening " + final_path + "...\r\n");					

			if (image.data && !image.empty()) {
				Mat h1(image.rows, image.cols, image.type());				
				Mat s1(image.rows, image.cols, image.type());
				Mat i1(image.rows, image.cols, image.type());
				float r, g, b, h, s, in;

				for (int i = 0; i < image.rows; i++)
				{
					for (int j = 0; j < image.cols; j++)
					{
						b = image.at<Vec3b>(i, j)[0];
						g = image.at<Vec3b>(i, j)[1];
						r = image.at<Vec3b>(i, j)[2];

						in = (b + g + r) / 3;
						// Intensity = (1/3) * (r + g + b)

						float min_val = 0;
						min_val = std::min(r, std::min(b, g));

						s = 1 - 3 * (min_val / (b + g + r));
						if (s < 0.00001) {
							s = 0;	// Dark saturation
						}
						else if (s > 0.99999) { 
							s = 1;	// Light saturation
						}

						if (s != 0) {
							h = 0.5 * ((r - g) + (r - b)) / sqrt(((r - g)*(r - g)) + ((r - b)*(g - b)));
							h = acos(h);

							if (b <= g) {
								h = h;
							}
							else {
								h = ((360 * 3.14159265) / 180.0) - h;
								//h = (2 * 3.14169265 - h);	// same result as above								
							}
						}
						h1.at<Vec3b>(i, j)[0] = (h * 180) / 3.14159265;
						h1.at<Vec3b>(i, j)[1] = (h * 180) / 3.14159265;
						h1.at<Vec3b>(i, j)[2] = (h * 180) / 3.14159265;

						/*
						s1.at<Vec3b>(i, j)[0] = s * 100;
						s1.at<Vec3b>(i, j)[1] = s * 100;
						s1.at<Vec3b>(i, j)[2] = s * 100;

						i1.at<Vec3b>(i, j)[0] = in;
						i1.at<Vec3b>(i, j)[1] = in;
						i1.at<Vec3b>(i, j)[2] = in;
						*/
					}
				}

				txtProgress->AppendText("Hue Selection Completed...\r\n");

				std::string final_path2 = msclr::interop::marshal_as<std::string>(final_path);
				std::string h1_path = std::string("Image Processing/") + final_path2 + std::string("__1__HUE.jpg");
				imwrite(h1_path, h1);

				/*
				h1_path = std::string("Image Processing/") + final_path2 + std::string("__1__SAT.jpg");
				imwrite(h1_path, s1);

				h1_path = std::string("Image Processing/") + final_path2 + std::string("__1__INT.jpg");
				imwrite(h1_path, i1);
				*/
				
				message = gcnew System::String(h1_path.c_str());
				txtProgress->AppendText(message + " successfully created...");
				txtProgress->ScrollToCaret();
			
				std::string open_hue = "C:/Users/Sam/Documents/School/THESIS/THESIS II/programs/form1/form1/" + h1_path;
				
				img_change = gcnew System::String(open_hue.c_str());				
				img_Hue->BackgroundImage = System::Drawing::Image::FromFile(img_change);

				//*** END OF RGB CONVERSION ***/

		#pragma region Gaussian Filter

		/* start producing Gaussian filter kernel */

			txtProgress->AppendText("\r\nCreating Gaussian filter kernel...");
			txtProgress->ScrollToCaret();

			const double PI = atan(1) * 4;
			double sigma = 80; // 2 orig --- the higher, the more blurred | 40 previously used
			const int kernalWidth = 5, kernalHeight = 5; // 5 always!

			float kernalArray[kernalWidth][kernalHeight];
			double total = 0;

			//calculate each relavant value to neighour pixels and store it in 2d array
			for (int row = 0; row < kernalWidth; row++) {
				for (int col = 0; col < kernalHeight; col++) {
					// Formula for Gaussian Filter from RRL
					float value = (1 / (2 * PI * pow(sigma, 2)))
						* exp(-(pow(row - kernalWidth / 2, 2) + pow(col - kernalHeight / 2, 2)) / (2 * exp(2))) - (-2);							
					// End of formula
					kernalArray[row][col] = value;
					total += value;
				}
			}

			//Scale value in 2d array in to 1
			for (int row = 0; row < kernalWidth; row++) {
				for (int col = 0; col < kernalHeight; col++) {
					kernalArray[row][col] = kernalArray[row][col] / total;
				}
			}

			txtProgress->AppendText("\r\nGaussian filter kernel created...");
			txtProgress->ScrollToCaret();
		
		//*** End producing Gaussian filter kernel ***//

			txtProgress->AppendText("\r\nApplying Gaussian filter to hue image...");
			txtProgress->ScrollToCaret();
			cv::Mat hue = cv::imread(open_hue);

			Mat Hgray(hue.size(), CV_8UC1);
			Mat HueBlurred(hue.size(), CV_8UC1); 
			cvtColor(hue, Hgray, CV_RGB2GRAY);		

			int verticleImageBound = (kernalHeight - 1) / 2, horizontalImageBound = (kernalWidth - 1) / 2;

			//Assian Gaussian Blur value of the center point. Repeating this process for all other points through image

			//*** FOR HUE ***//
			for (int row = 0 + verticleImageBound; row < Hgray.rows - verticleImageBound; row++) {
				for (int col = 0 + horizontalImageBound; col < Hgray.cols - horizontalImageBound; col++) {
					float value = 0.0;
					for (int kRow = 0; kRow < kernalHeight; kRow++) {
						for (int kCol = 0; kCol < kernalWidth; kCol++) {
							//multiply pixel value with corresponding gaussian kernal value
							float pixel = Hgray.at<uchar>(kRow + row - verticleImageBound, kCol + col - horizontalImageBound) * kernalArray[kRow][kCol];
							value += pixel;
						}
					}
					//assign new values to central point
					HueBlurred.at<uchar>(row, col) = cvRound(value);
				}
			}

			txtProgress->AppendText("\r\nGaussian filter to hue successfully applied...");
			txtProgress->ScrollToCaret();

			std::string blurredH = std::string("Image Processing/") + final_path2 + std::string("__2__BLURREDHUE.jpg");			
			imwrite(blurredH, HueBlurred); message = gcnew System::String(blurredH.c_str());

			txtProgress->AppendText("\r\n" + message + " successfully created...");
			txtProgress->ScrollToCaret();
		
			img_change = gcnew System::String(open_hue.c_str());
			img_noblur->BackgroundImage = System::Drawing::Image::FromFile(img_change);
			img_change = gcnew System::String(blurredH.c_str());
			img_blur->BackgroundImage = System::Drawing::Image::FromFile(img_change);

		#pragma endregion

		/*
			START OF OTSU | OTSU'S METHOD			
		*/
			txtProgress->AppendText("\r\nStart of Otsu's Method...");								

			std::string otsu;				// Filename
			cv::Mat otsu_img = cv::imread(blurredH, CV_8UC1);

			cv::Mat cropped
				= otsu_img(cv::Range(0, otsu_img.rows / 2 - 1), cv::Range(0, otsu_img.cols / 2 - 1));
				std::string crop1 = std::string("Image Processing/") + final_path2 + std::string("__3__CROP_0.jpg");
				imwrite(crop1, cropped);
				img_change = gcnew System::String(crop1.c_str());
				img_crop0->BackgroundImage = System::Drawing::Image::FromFile(img_change);
			cropped
				= otsu_img(cv::Range(0, otsu_img.rows / 2 - 1), cv::Range(otsu_img.cols / 2, otsu_img.cols - 1));
				std::string crop2 = std::string("Image Processing/") + final_path2 + std::string("__3__CROP_1.jpg");
				imwrite(crop2, cropped);
				img_change = gcnew System::String(crop2.c_str());
				img_crop1->BackgroundImage = System::Drawing::Image::FromFile(img_change);
			cropped
				= otsu_img(cv::Range(otsu_img.rows / 2, otsu_img.rows - 1), cv::Range(0, otsu_img.cols / 2 - 1));
				std::string crop3 = std::string("Image Processing/") + final_path2 + std::string("__3__CROP_2.jpg");
				imwrite(crop3, cropped);
				img_change = gcnew System::String(crop3.c_str());
				img_crop2->BackgroundImage = System::Drawing::Image::FromFile(img_change);
			cropped
				= otsu_img(cv::Range(otsu_img.rows / 2, otsu_img.rows - 1), cv::Range(otsu_img.cols / 2, otsu_img.cols - 1));
				std::string crop4 = std::string("Image Processing/") + final_path2 + std::string("__3__CROP_3.jpg");
				imwrite(crop4, cropped);
				img_change = gcnew System::String(crop4.c_str());
				img_crop3->BackgroundImage = System::Drawing::Image::FromFile(img_change);
						
			for (int turn = 0; turn < 4; turn++) {
				int pixel = 0;					// pixel value
				float betweenvariance = 0;		// between group variance
				float maxbetweenvariance = 0;	// max between group variance
				float optimizedthresh = 0;		// optimized threshhold, at the end of otsu's algorithm this will be the thresshold with the max between group vairance
				float sum = 0;					// sum of all histogram values to calculate the mean grey level value of the imagem values before threshholding
				float histogram[256], probability[256];

				if (turn == 0) otsu_img = cv::imread(crop1, CV_8UC1);
				else if (turn == 1) otsu_img = cv::imread(crop2, CV_8UC1);
				else if (turn == 2) otsu_img = cv::imread(crop3, CV_8UC1);
				else otsu_img = cv::imread(crop4, CV_8UC1);

				Mat green_img, mapped = otsu_img.clone();

				for (int i = 0; i < 256; i++) {
					histogram[i] = 0.0;
					probability[i] = 0.0;
				}

				// cycle through entire otsu_img and get pixel values and populate the histogram with them
				for (int i = 0; i < otsu_img.rows; i++) {
					for (int j = 0; j < otsu_img.cols; j++) {
						pixel = (int)otsu_img.at<uchar>(i, j);
						sum += pixel;
						histogram[pixel]++;
					}
				}

				//calculate the probability of each histogram value and store them in the probability array
				for (int i = 0; i <= 255; i++) {
					probability[i] = histogram[i] / (otsu_img.cols*otsu_img.rows);
				}

				float p1 = probability[0];		// Initial probability p1 which is equal to just the probability of the 0 grey value
				float q1 = p1;					// Initial q which is the sum of probabilities before 1, which is equal to p1
				float mu1 = 0;					// Initial mean before the 1 has to be 0. mu(1)=0		
				float mu2 = 0;					// Initial mean after the 0. Initially set to 0. This gets reset in the algorithm		
				float mu = sum / (otsu_img.cols*otsu_img.rows);	// Mean grey level (mu) calculation
				float q1next, mu1next, mu2next;

				float q1prev = q1;				//set previous q1, q1(t), to equal the current q1
				for (int t = 1; t < 255; t++) {
					q1next = q1prev + probability[t + 1];								//q1next-q1(t+1)
					mu1next = (q1prev * mu1 + (t + 1) * (probability[t + 1])) / q1next;	//set mu1(t+1)
					mu2next = (mu - q1next * mu1next) / (1 - q1next);					//set mu2(t+1)
					betweenvariance = q1prev * (1 - q1prev) * ((mu1 - mu2) * (mu1 - mu2));		//calculate between group variance

					//max between group variance is initially set to 0. Change the max between group variance, and change the optimized threshold to t if the current variance is > max.
					if (betweenvariance > maxbetweenvariance) {
						maxbetweenvariance = betweenvariance;
						optimizedthresh = t;	//set new optimized threshhold
					}

					q1prev = q1next;			//set q1(t) to be used in the next iteration to be equal to the current q1(t+1) which is q1next
					mu1 = mu1next;				//do the same for mu1. set mu1(t) of next iteration to equal the current mu1(t+1)
					mu2 = mu2next;				//set mu2(t) of next iteration to equal the current mu2(t+1)

					if (q1next == 0) {
						mu1 = 0;				//this eliminates divide by 0 errors because the calculate of the next mu1 would be undefend if the next value of q1 is 0, according to the otsu recursive algorithm
					}
				}

				txtProgress->AppendText("\r\nApplying Otsu's Method...");
				txtProgress->ScrollToCaret();

				int black = 0;

				//set otsu_img values based on the optimized threshhold calculated above.
				for (int i = 0; i < otsu_img.rows; i++) {
					for (int j = 0; j < otsu_img.cols; j++) {
						pixel = (int)otsu_img.at<uchar>(i, j);
						if (pixel >= optimizedthresh) black++;
					}
				}

				int old_optimizedthresh = optimizedthresh;
				if (black <= 5) {
					/*
					string combine = std::to_string(turn) + "\n" + std::to_string(black) + " || " + std::to_string(optimizedthresh);
					message = gcnew System::String(combine.c_str());
					MessageBox::Show(message);
					//*/
					if (optimizedthresh >= 240) optimizedthresh = optimizedthresh * 0.4;
					else if (optimizedthresh >= 150) optimizedthresh = optimizedthresh * 0.3;
					else if (optimizedthresh > 120 && optimizedthresh < 150) optimizedthresh = optimizedthresh * 0.35; //0.2 last
					else optimizedthresh = optimizedthresh / 2;
				}
				else {
					/*
					string combine = std::to_string(turn) + "\n" + std::to_string(black) + " || " + std::to_string(optimizedthresh);
					message = gcnew System::String(combine.c_str());
					MessageBox::Show(message);
					//*/
					if (optimizedthresh >= 200) optimizedthresh = optimizedthresh * 0.25;
					else if (optimizedthresh >= 150 && optimizedthresh < 200) optimizedthresh = optimizedthresh * 0.3;
					else if (optimizedthresh > 120 && optimizedthresh < 150) optimizedthresh = optimizedthresh * 0.35;
					else optimizedthresh = optimizedthresh / 2;
				}
					
				int counter = 0;
				// Check for green
				for (int i = 0; i < otsu_img.rows; i++) {
					for (int j = 0; j < otsu_img.cols; j++) {
						pixel = (int)otsu_img.at<uchar>(i, j);
						if (pixel < optimizedthresh) counter++;
					}
				}
				/*
				message = gcnew System::String(std::to_string(counter).c_str());
				MessageBox::Show(message);
				//*/
				// BOOK THRES								
				//if ((counter >= 5000 && counter <= 100000) || (counter >= 3000000 && counter <= 5000000)) { // Downy
				if ((counter >= 5000 && counter <= 25000) || (counter >= 3000000 && counter <= 5000000)) {				
					if (old_optimizedthresh >= 200) {		// Downy
						inRange(otsu_img, Scalar(68, 117, 103), Scalar(74, 129, 113), green_img); // B G R					
						//if (old_optimizedthresh >= 240) inRange(otsu_img, Scalar(68, 117, 103), Scalar(74, 129, 113), green_img); // B G R					
						//else inRange(otsu_img, Scalar(84, 155, 148), Scalar(167, 217, 215), green_img); // B G R					
						
						otsu = std::string("Image Processing/") + final_path2 + std::string("__GREEN__") +
							std::string((std::to_string(turn)).c_str()) + std::string(".jpg");
						imwrite(otsu, green_img);

						for (int i = 0; i < otsu_img.rows; i++) {
							for (int j = 0; j < otsu_img.cols; j++) {
								pixel = (int)green_img.at<uchar>(i, j);					// Use green as mask
								if (pixel < optimizedthresh) {
									mapped.at<uchar>(i, j) = 0;							// Make non-lesion as black
									pixel = otsu_img.at<uchar>(i, j) = 0;
								}
								else {
									mapped.at<uchar>(i, j) = otsu_img.at<uchar>(i, j);	// Get lesion from hue
									pixel = otsu_img.at<uchar>(i, j) = 255;				// Otsu as white (lesion)
								}
							}
						}
					}				
					else {									// Goss
						if (old_optimizedthresh >= 200) optimizedthresh = old_optimizedthresh * 0.25;
						for (int i = 0; i < otsu_img.rows; i++) {
							for (int j = 0; j < otsu_img.cols; j++) {
								pixel = (int)otsu_img.at<uchar>(i, j);
								if (pixel < optimizedthresh) {
									mapped.at<uchar>(i, j) = otsu_img.at<uchar>(i, j);	// Get lesion from hue
									pixel = otsu_img.at<uchar>(i, j) = 255;				// Otsu as white (lesion)
								}
								else {
									mapped.at<uchar>(i, j) = 0;							// Make non-lesion as black
									pixel = otsu_img.at<uchar>(i, j) = 0;				// Otsu as black (non-lesion)
								}
							}
						}
					}
				}
				else {
					for (int i = 0; i < otsu_img.rows; i++) {
						for (int j = 0; j < otsu_img.cols; j++) {
							pixel = (int)otsu_img.at<uchar>(i, j);
							if (pixel < optimizedthresh) {				
								mapped.at<uchar>(i, j) = otsu_img.at<uchar>(i, j);	// Get lesion from hue
								pixel = otsu_img.at<uchar>(i, j) = 255;				// Otsu as white (lesion)
							}
							else {										
								mapped.at<uchar>(i, j) = 0;							// Make non-lesion as black
								pixel = otsu_img.at<uchar>(i, j) = 0;				// Otsu as black (non-lesion)
							}
						}
					}
				}

				otsu = std::string("Image Processing/") + final_path2 + std::string("__4__OTSU_") +
					std::string((std::to_string(turn)).c_str()) + std::string(".jpg");
				imwrite(otsu, otsu_img);
				string map = std::string("Image Processing/") + final_path2 + std::string("__4__MAP_") +
					std::string((std::to_string(turn)).c_str()) + std::string(".jpg");
				imwrite(map, mapped);
				img_change = gcnew System::String(otsu.c_str());
				
				if (turn == 0) img_otsu0->BackgroundImage = System::Drawing::Image::FromFile(img_change);
				else if (turn == 1) img_otsu1->BackgroundImage = System::Drawing::Image::FromFile(img_change);
				else if (turn == 2) img_otsu2->BackgroundImage = System::Drawing::Image::FromFile(img_change);
				else img_otsu3->BackgroundImage = System::Drawing::Image::FromFile(img_change);
				
			}
						
			txtProgress->AppendText("\r\nOtsu's Method Completed...");		
			txtProgress->ScrollToCaret();			

		//*** END OF OTSU ***//

		/* CANNY EDGE */

			txtProgress->AppendText("\r\nCreating Canny edge filter...");
			txtProgress->ScrollToCaret();
			cv::Mat canny_img;
			std::string canny;
			
			for (int turn = 0; turn < 4; turn++) {
				if (turn == 0) canny_img = cv::imread((std::string("Image Processing/") + final_path2 + std::string("__4__OTSU_0.jpg")), CV_8UC1);
				else if (turn == 1) canny_img = cv::imread((std::string("Image Processing/") + final_path2 + std::string("__4__OTSU_1.jpg")), CV_8UC1);
				else if (turn == 2) canny_img = cv::imread((std::string("Image Processing/") + final_path2 + std::string("__4__OTSU_2.jpg")), CV_8UC1);
				else canny_img = cv::imread((std::string("Image Processing/") + final_path2 + std::string("__4__OTSU_3.jpg")), CV_8UC1);

				cv::Canny(canny_img,				// input image
					canny_img,						// output image
					100,							// low threshold -- 100 orig
					200);							// high threshold -- 200 orig

					canny = std::string("Image Processing/") + final_path2 + std::string("__5__CANNY_") +
						std::string((std::to_string(turn)).c_str()) + std::string(".jpg");;
					imwrite(canny, canny_img);
					img_change = gcnew System::String(canny.c_str());
			}
			
			txtProgress->AppendText("\r\nCanny Edge filter Completed...");			
			txtProgress->ScrollToCaret();

		//*** END OF CANNY EDGE ***/

		/* START OF SGDM */ 

			ofstream csv;
			// CSV FILE

			txtProgress->AppendText("\r\nApplying SGDM...");
			txtProgress->ScrollToCaret();
			
			for (int turn = 0; turn < 4; turn++) {
				cv::Mat SGDM;
				if (turn == 0) SGDM = cv::imread((std::string("Image Processing/") + final_path2 + std::string("__4__MAP_0.jpg")), CV_8UC1);
				else if (turn == 1) SGDM = cv::imread((std::string("Image Processing/") + final_path2 + std::string("__4__MAP_1.jpg")), CV_8UC1);
				else if (turn == 2) SGDM = cv::imread((std::string("Image Processing/") + final_path2 + std::string("__4__MAP_2.jpg")), CV_8UC1);
				else SGDM = cv::imread((std::string("Image Processing/") + final_path2 + std::string("__4__MAP_3.jpg")), CV_8UC1);

				Mat gl = Mat::zeros(256, 256, CV_32FC1);

				//creating glcm matrix with 256 levels,radius=1 and in the horizontal direction 
				for (int i = 0; i < SGDM.rows; i++) {
					for (int j = 0; j < SGDM.cols - 1; j++) {
						gl.at<float>(SGDM.at<uchar>(i, j), SGDM.at<uchar>(i, j + 1)) = gl.at<float>(SGDM.at<uchar>(i, j), SGDM.at<uchar>(i, j + 1)) + 1;
					}
				}

				// normalizing glcm matrix for parameter determination
				gl = gl + gl.t();
				gl = gl / cv::sum(gl)[0];

				float energy = 0, contrast = 0, homogenity = 0, IDM = 0, entropy = 0, mean1 = 0,
					shade = 0, prominence = 0;

				for (int i = 0; i < 256; i++) {
					for (int j = 0; j < 256; j++) {
						energy = energy + pow(gl.at<float>(i, j), 2);            //finding parameters
						contrast = contrast + pow((i - j), 2) * gl.at<float>(i, j);
						//homogenity = homogenity + gl.at<float>(i, j) / (1 + abs(i - j));
						homogenity = homogenity + (gl.at<float>(i, j) / (1 + pow((i - j), 2)));
						if (i != j)
							IDM = IDM + gl.at<float>(i, j) / ((i - j)*(i - j));                      //Taking k=2;
						if (gl.at<float>(i, j) != 0)
							entropy = entropy - gl.at<float>(i, j)*log10(gl.at<float>(i, j));
						mean1 = mean1 + 0.5*(i*gl.at<float>(i, j) + j*gl.at<float>(i, j));
						int mx = i * gl.at<float>(i, j), my = j * gl.at<float>(i, j);
						shade = shade + pow((i - mx) + (j - my), 3) * gl.at<float>(i, j);
						prominence = prominence + pow((i - mx) + (j - my), 4) * gl.at<float>(i, j);
					}
				}

				if (std::ifstream("maize.csv")) {
					csv.open("maize.csv", std::ios_base::app);
				}
				else {
					csv.open("maize.csv");
					csv << "Filename, Energy, Contrast, Homogenity, IDM, Entropy, Mean1, Cluster Shade, Cluster Prominence, Shapes Detected, Circle, Triangle, Rectangle, Irregular Small, Irregular Large, Circle Area, Triangle Area, Rectangle Area, Irreg. S. Area, Irreg. L Area\n";
				} 

				csv << final_path2 + "__" + std::to_string(turn) + "," + std::to_string(energy) + "," + std::to_string(contrast) + "," + std::to_string(homogenity)
					+ "," + std::to_string(IDM) + "," + std::to_string(entropy) + "," + std::to_string(mean1)
					+ "," + std::to_string(shade) + "," + std::to_string(prominence) + ",";	

				txtProgress->AppendText("\r\nSGDM Method Completed...");
				txtProgress->ScrollToCaret();

				//*** END OF SGDM ***/

				/*** START OF SHAPE DETECTION ***/

				std::vector<std::vector<cv::Point>> contours;
				std::vector<cv::Point> approx;
				cv::Mat dst;

				int tri = 0, rect = 0, circle = 0, irreg_S = 0, irreg_L = 0;		// Shape counters
				int x = 0;
				double scale = 0.4;
				float total_area[5] = { 0, 0, 0, 0, 0 };	// Triangle, Rectangle, Circle, Irreg Small, Irreg Large			

				if (turn == 0) dst = cv::imread((std::string("Image Processing/") + final_path2 + std::string("__5__CANNY_0.jpg")), CV_8UC1);
				else if (turn == 1) dst = cv::imread((std::string("Image Processing/") + final_path2 + std::string("__5__CANNY_1.jpg")), CV_8UC1);
				else if (turn == 2) dst = cv::imread((std::string("Image Processing/") + final_path2 + std::string("__5__CANNY_2.jpg")), CV_8UC1);
				else dst = cv::imread((std::string("Image Processing/") + final_path2 + std::string("__5__CANNY_3.jpg")), CV_8UC1);

				int flag = 0;				
				int fontface = cv::FONT_HERSHEY_SIMPLEX, thickness = 1, baseline = 0;

				cv::findContours(dst, contours, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_SIMPLE);

				for (int i = 0; i < contours.size(); i++) {
					// Approximate contour with accuracy proportional to the contour perimeter					
					cv::approxPolyDP(cv::Mat(contours[i]), approx, cv::arcLength(cv::Mat(contours[i]), true)*0.01, true);

					// Skip small or non-convex objects								
					//if (std::fabs(cv::contourArea(contours[i])) < 50 || !cv::isContourConvex(approx)) {
					if (std::fabs(cv::contourArea(contours[i])) < 200) {
						continue;
					}

					if (contourArea(contours[i]) > 10000 && contourArea(contours[i]) < 100000) {						
						/*
						message = gcnew System::String(std::to_string(cv::convexHull(contours[i])).c_str());
						MessageBox::Show(message);
						drawContours(dst, contours, i, Scalar(255, 0, 0), 4);
						*/						
						irreg_L++;  x++;
						cv::Size text = cv::getTextSize("IRREG_L", fontface, scale, thickness, &baseline);
						cv::Rect r = cv::boundingRect(contours[i]);
						cv::Point pt(r.x + ((r.width - text.width) / 2), r.y + ((r.height + text.height) / 2));
						cv::rectangle(dst, pt + cv::Point(0, baseline), pt + cv::Point(text.width, -text.height), CV_RGB(255, 255, 255), CV_FILLED);
						cv::putText(dst, "IRREG_L", pt, fontface, scale, CV_RGB(0, 0, 0), thickness, 8);

						total_area[4] = total_area[4] + contourArea(contours[i]);
						drawContours(dst, contours, i, Scalar(255, 0, 0), 4);
					}
					else if (approx.size() == 3) {
						tri++; x++;
						//setLabel(dst, "TRI", contours[i]);    // Triangles
						cv::Size text = cv::getTextSize("TRI", fontface, scale, thickness, &baseline);
						cv::Rect r = cv::boundingRect(contours[i]);
						cv::Point pt(r.x + ((r.width - text.width) / 2), r.y + ((r.height + text.height) / 2));
						cv::rectangle(dst, pt + cv::Point(0, baseline), pt + cv::Point(text.width, -text.height), CV_RGB(255, 255, 255), CV_FILLED);
						cv::putText(dst, "TRI", pt, fontface, scale, CV_RGB(0, 0, 0), thickness, 8);
				
						total_area[0] = total_area[0] + contourArea(contours[i]);
					}
					else if (approx.size() >= 4)
					{
						// Number of vertices of polygonal curve
						int vtc = approx.size();

						// Get the cosines of all corners
						std::vector<float> cos;
						for (int j = 2; j < vtc + 1; j++) {
							cv::Point pt1 = approx[j%vtc];
							cv::Point pt2 = approx[j - 2];
							cv::Point pt0 = approx[j - 1];

							double dx1 = pt1.x - pt0.x;
							double dy1 = pt1.y - pt0.y;
							double dx2 = pt2.x - pt0.x;
							double dy2 = pt2.y - pt0.y;
							double answer = (dx1*dx2 + dy1*dy2) / sqrt((dx1*dx1 + dy1*dy1)*(dx2*dx2 + dy2*dy2) + 1e-10);
							cos.push_back(answer);
						}

						// Sort ascending the cosine values
						std::sort(cos.begin(), cos.end());

						// Get the lowest and the highest cosine
						double mincos = cos.front();
						double maxcos = cos.back();

						// Use the degrees obtained above and the number of vertices
						// to determine the shape of the contour
						if (vtc == 4) {
							rect++; x++;
							cv::Size text = cv::getTextSize("RECT", fontface, scale, thickness, &baseline);
							cv::Rect r = cv::boundingRect(contours[i]);
							cv::Point pt(r.x + ((r.width - text.width) / 2), r.y + ((r.height + text.height) / 2));
							cv::rectangle(dst, pt + cv::Point(0, baseline), pt + cv::Point(text.width, -text.height), CV_RGB(255, 255, 255), CV_FILLED);
							cv::putText(dst, "RECT", pt, fontface, scale, CV_RGB(0, 0, 0), thickness, 8);

							total_area[1] = total_area[1] + contourArea(contours[i]);
						}
						else {
							// Detect and label circles
							double area = cv::contourArea(contours[i]);
							cv::Rect r = cv::boundingRect(contours[i]);
							int radius = r.width / 2;

							if (std::abs(1 - ((double)r.width / r.height)) <= 0.2 &&
								std::abs(1 - (area / (CV_PI * (radius*radius)))) <= 0.2) {
								circle++;  x++;
								cv::Size text = cv::getTextSize("CIR", fontface, scale, thickness, &baseline);
								cv::Rect r = cv::boundingRect(contours[i]);
								cv::Point pt(r.x + ((r.width - text.width) / 2), r.y + ((r.height + text.height) / 2));
								cv::rectangle(dst, pt + cv::Point(0, baseline), pt + cv::Point(text.width, -text.height), CV_RGB(255, 255, 255), CV_FILLED);
								cv::putText(dst, "CIR", pt, fontface, scale, CV_RGB(0, 0, 0), thickness, 8);

								total_area[2] = total_area[2] + contourArea(contours[i]);
							}
							else if (contourArea(contours[i]) < 10000) {
								irreg_S++;  x++;
								cv::Size text = cv::getTextSize("IRREG_S", fontface, scale, thickness, &baseline);
								cv::Rect r = cv::boundingRect(contours[i]);
								cv::Point pt(r.x + ((r.width - text.width) / 2), r.y + ((r.height + text.height) / 2));
								cv::rectangle(dst, pt + cv::Point(0, baseline), pt + cv::Point(text.width, -text.height), CV_RGB(255, 255, 255), CV_FILLED);
								cv::putText(dst, "IRREG_S", pt, fontface, scale, CV_RGB(0, 0, 0), thickness, 8);

								total_area[3] = total_area[3] + contourArea(contours[i]);
							}
						}
					}					
				}

				std::string shapepath = std::string("Image Processing/") + final_path2 + std::string("__6__SHAPE_") +
					std::string((std::to_string(turn)).c_str()) + std::string(".jpg");;
				imwrite(shapepath, dst);

				img_change = gcnew System::String(shapepath.c_str());
				if (turn == 0) img_shape0->BackgroundImage = System::Drawing::Image::FromFile(img_change);
				else if (turn == 1) img_shape1->BackgroundImage = System::Drawing::Image::FromFile(img_change);
				else if (turn == 2) img_shape2->BackgroundImage = System::Drawing::Image::FromFile(img_change);
				else img_shape3->BackgroundImage = System::Drawing::Image::FromFile(img_change);

				// *** END OF SHAPE DETECTION *** //

				csv << std::to_string(x) + "," + std::to_string(circle) + "," + std::to_string(tri) + ","
					+ std::to_string(rect) + "," + std::to_string(irreg_S) + "," + std::to_string(irreg_L) + ","

					+ std::to_string(total_area[0] / circle) + "," + std::to_string(total_area[1] / tri) + "," + std::to_string(total_area[2] / rect)
					+ "," + std::to_string(total_area[3] / irreg_S)	+ "," + std::to_string(total_area[4] / irreg_L);
				
				csv << "\n";
				csv.close();
			}

			txtProgress->AppendText("\r\n.\r\n.\r\nImage Processing complete.");
			txtProgress->ScrollToCaret();
			firstPanel->BringToFront();
			
			btnPredict->Enabled = true;
			panel_pred->Visible = true;
			btnThird->Enabled = false;					
		}
		}
			else { }	
	}

	private: System::Void btnFirst_Click(System::Object^  sender, System::EventArgs^  e) {
		firstPanel->BringToFront();
	}

	private: System::Void btnSecond_Click(System::Object^  sender, System::EventArgs^  e) {
		secondPanel->BringToFront();
	}

	private: System::Void btnLocation_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start("C:/Users/Sam/Documents/School/THESIS/THESIS II/programs/form1/form1/Image Processing");
	}

	int mouseX = 0, mouseY = 0;
	bool mouseDown;

	private: System::Void panelBtn_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (mouseDown) {
			mouseX = MousePosition.X - 490;
			mouseY = MousePosition.Y - 30;

			this->SetDesktopLocation(mouseX, mouseY);
		}
	}
	
	private: System::Void panelBtn_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseDown = true;
	}		
	private: System::Void panelBtn_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseDown = false;
	}

	private: System::Void btnMin_Click(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState::Minimized;
	}

	private: System::Void btnThird_Click(System::Object^  sender, System::EventArgs^  e) {
		thirdPanel->BringToFront();
	}

	private: System::Void btnPredict_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start("C:/Users/Sam/Documents/School/THESIS/THESIS II/programs/form1/form1/classify.py");
		
		string predictions[4] = { "", "", "", "" };
		int i = 0;
		std::ifstream input("classify.txt");

		for (std::string line; getline(input, line); ) {
			predictions[i] = line;
			i++;
		}

		System::String^ disease = gcnew System::String(predictions[0].c_str());
		txtClassify0->Text = disease;
		disease = gcnew System::String(predictions[1].c_str());
		txtClassify1->Text = disease;
		disease = gcnew System::String(predictions[2].c_str());
		txtClassify2->Text = disease;
		disease = gcnew System::String(predictions[3].c_str());
		txtClassify3->Text = disease;

		System::String^ img_change = lblPath->Text;
		std::string open_me = msclr::interop::marshal_as<std::string>(img_change);
		cv::Mat img = cv::imread(open_me);

		cv::Mat cropped
			= img(cv::Range(0, img.rows / 2 - 1), cv::Range(0, img.cols / 2 - 1));
			std::string crop1 = std::string("Image Processing/ORIG_0.jpg");
			imwrite(crop1, cropped);
			img_change = gcnew System::String(crop1.c_str());
			img_class0->BackgroundImage = System::Drawing::Image::FromFile(img_change);
		cropped
			= img(cv::Range(0, img.rows / 2 - 1), cv::Range(img.cols / 2, img.cols - 1));
			std::string crop2 = std::string("Image Processing/ORIG_1.jpg");
			imwrite(crop2, cropped);
			img_change = gcnew System::String(crop2.c_str());
			img_class1->BackgroundImage = System::Drawing::Image::FromFile(img_change);
		cropped
			= img(cv::Range(img.rows / 2, img.rows - 1), cv::Range(0, img.cols / 2 - 1));
			std::string crop3 = std::string("Image Processing/ORIG_2.jpg");
			imwrite(crop3, cropped);
			img_change = gcnew System::String(crop3.c_str());
			img_class2->BackgroundImage = System::Drawing::Image::FromFile(img_change);
		cropped
			= img(cv::Range(img.rows / 2, img.rows - 1), cv::Range(img.cols / 2, img.cols - 1));
			std::string crop4 = std::string("Image Processing/ORIG_3.jpg");
			imwrite(crop4, cropped);
			img_change = gcnew System::String(crop4.c_str());
			img_class3->BackgroundImage = System::Drawing::Image::FromFile(img_change);

		txtProgress->AppendText("\r\n.\r\n.\r\n.\r\n.\r\nPrediction complete.");
		txtProgress->ScrollToCaret();		
		thirdPanel->BringToFront();
		
		btnThird->Enabled = true;
		btnPredict->Enabled = false;
		panel_pred->Visible = false;
	}
};
} 