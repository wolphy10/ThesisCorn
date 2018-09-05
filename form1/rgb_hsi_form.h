#include <iostream>
#include <fstream>

// Minimize
#pragma once
#include <Windows.h>

// Convert String^ to std::string
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

using namespace std;
using namespace cv;

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
	private:
	public: System::Windows::Forms::PictureBox^  img_Saturation;

	
	private: System::Windows::Forms::Label^  lblHue;
	private: System::Windows::Forms::Label^  lblSaturation;
	private: System::Windows::Forms::Panel^  progressPanel;



	private: System::Windows::Forms::RichTextBox^  txtProgress;
	private: System::Windows::Forms::Button^  btnLocation;
	private: System::Windows::Forms::Panel^  firstPanel;
	private: System::Windows::Forms::Panel^  secondPanel;


	public: System::Windows::Forms::PictureBox^  img_noblur;
	private: System::Windows::Forms::Label^  lblCanny;
	private: System::Windows::Forms::Label^  lblBlur;
	public: System::Windows::Forms::PictureBox^  img_canny;
	private:
	public:
	private:

	private:

	private:

	public:


	private: System::Windows::Forms::Button^  btnSecond;
	public: System::Windows::Forms::PictureBox^  img_blur;
	private: System::Windows::Forms::Label^  lblNoBlur;
	public: System::Windows::Forms::PictureBox^  img_otsu;
	private:
	public:


	private: System::Windows::Forms::Label^  lblOtsu;
	private: System::Windows::Forms::Button^  btnFirst;
	private: System::Windows::Forms::Panel^  origPanel;


	public: System::Windows::Forms::PictureBox^  img_orig;
	private:



	private: System::Windows::Forms::Label^  lblPathHead;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lblDiseaseHead;
	private: System::Windows::Forms::RichTextBox^  lblPath;

	private: System::Windows::Forms::Panel^  panelBtn;
	private: System::Windows::Forms::Label^  lblTitle;
	private: System::Windows::Forms::Button^  btnMin;



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
			this->img_Saturation = (gcnew System::Windows::Forms::PictureBox());
			this->lblHue = (gcnew System::Windows::Forms::Label());
			this->lblSaturation = (gcnew System::Windows::Forms::Label());
			this->progressPanel = (gcnew System::Windows::Forms::Panel());
			this->txtProgress = (gcnew System::Windows::Forms::RichTextBox());
			this->btnLocation = (gcnew System::Windows::Forms::Button());
			this->firstPanel = (gcnew System::Windows::Forms::Panel());
			this->secondPanel = (gcnew System::Windows::Forms::Panel());
			this->lblOtsu = (gcnew System::Windows::Forms::Label());
			this->img_otsu = (gcnew System::Windows::Forms::PictureBox());
			this->lblNoBlur = (gcnew System::Windows::Forms::Label());
			this->img_blur = (gcnew System::Windows::Forms::PictureBox());
			this->img_noblur = (gcnew System::Windows::Forms::PictureBox());
			this->lblCanny = (gcnew System::Windows::Forms::Label());
			this->lblBlur = (gcnew System::Windows::Forms::Label());
			this->img_canny = (gcnew System::Windows::Forms::PictureBox());
			this->btnSecond = (gcnew System::Windows::Forms::Button());
			this->btnFirst = (gcnew System::Windows::Forms::Button());
			this->origPanel = (gcnew System::Windows::Forms::Panel());
			this->lblPath = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblDiseaseHead = (gcnew System::Windows::Forms::Label());
			this->lblPathHead = (gcnew System::Windows::Forms::Label());
			this->img_orig = (gcnew System::Windows::Forms::PictureBox());
			this->panelBtn = (gcnew System::Windows::Forms::Panel());
			this->btnMin = (gcnew System::Windows::Forms::Button());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_Hue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_Saturation))->BeginInit();
			this->progressPanel->SuspendLayout();
			this->firstPanel->SuspendLayout();
			this->secondPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_otsu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_blur))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_noblur))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_canny))->BeginInit();
			this->origPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_orig))->BeginInit();
			this->panelBtn->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnOpen
			// 
			this->btnOpen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->btnOpen->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			this->btnOpen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOpen->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOpen->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->btnOpen->Location = System::Drawing::Point(253, 22);
			this->btnOpen->Name = L"btnOpen";
			this->btnOpen->Size = System::Drawing::Size(112, 28);
			this->btnOpen->TabIndex = 0;
			this->btnOpen->Text = L"Open File";
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
			this->img_Hue->Location = System::Drawing::Point(1, 6);
			this->img_Hue->Name = L"img_Hue";
			this->img_Hue->Size = System::Drawing::Size(350, 317);
			this->img_Hue->TabIndex = 1;
			this->img_Hue->TabStop = false;
			// 
			// img_Saturation
			// 
			this->img_Saturation->BackColor = System::Drawing::Color::White;
			this->img_Saturation->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_Saturation->Location = System::Drawing::Point(375, 6);
			this->img_Saturation->Name = L"img_Saturation";
			this->img_Saturation->Size = System::Drawing::Size(350, 317);
			this->img_Saturation->TabIndex = 2;
			this->img_Saturation->TabStop = false;
			// 
			// lblHue
			// 
			this->lblHue->AutoSize = true;
			this->lblHue->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHue->Location = System::Drawing::Point(324, 327);
			this->lblHue->Name = L"lblHue";
			this->lblHue->Size = System::Drawing::Size(27, 13);
			this->lblHue->TabIndex = 3;
			this->lblHue->Text = L"Hue";
			// 
			// lblSaturation
			// 
			this->lblSaturation->AutoSize = true;
			this->lblSaturation->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSaturation->Location = System::Drawing::Point(667, 327);
			this->lblSaturation->Name = L"lblSaturation";
			this->lblSaturation->Size = System::Drawing::Size(59, 13);
			this->lblSaturation->TabIndex = 4;
			this->lblSaturation->Text = L"Saturation";
			// 
			// progressPanel
			// 
			this->progressPanel->BackColor = System::Drawing::Color::White;
			this->progressPanel->Controls->Add(this->txtProgress);
			this->progressPanel->Location = System::Drawing::Point(234, 405);
			this->progressPanel->Name = L"progressPanel";
			this->progressPanel->Size = System::Drawing::Size(750, 129);
			this->progressPanel->TabIndex = 7;
			// 
			// txtProgress
			// 
			this->txtProgress->BackColor = System::Drawing::Color::White;
			this->txtProgress->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtProgress->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txtProgress->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtProgress->Location = System::Drawing::Point(13, 13);
			this->txtProgress->Name = L"txtProgress";
			this->txtProgress->ReadOnly = true;
			this->txtProgress->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->txtProgress->Size = System::Drawing::Size(725, 103);
			this->txtProgress->TabIndex = 100;
			this->txtProgress->TabStop = false;
			this->txtProgress->Text = L"";
			// 
			// btnLocation
			// 
			this->btnLocation->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->btnLocation->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			this->btnLocation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLocation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLocation->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->btnLocation->Location = System::Drawing::Point(807, 22);
			this->btnLocation->Name = L"btnLocation";
			this->btnLocation->Size = System::Drawing::Size(133, 28);
			this->btnLocation->TabIndex = 3;
			this->btnLocation->Text = L"Open File Location";
			this->btnLocation->UseVisualStyleBackColor = false;
			this->btnLocation->Click += gcnew System::EventHandler(this, &rgb_hsi_form::btnLocation_Click);
			// 
			// firstPanel
			// 
			this->firstPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->firstPanel->Controls->Add(this->img_Hue);
			this->firstPanel->Controls->Add(this->lblSaturation);
			this->firstPanel->Controls->Add(this->lblHue);
			this->firstPanel->Controls->Add(this->img_Saturation);
			this->firstPanel->Location = System::Drawing::Point(246, 51);
			this->firstPanel->Name = L"firstPanel";
			this->firstPanel->Size = System::Drawing::Size(725, 348);
			this->firstPanel->TabIndex = 9;
			// 
			// secondPanel
			// 
			this->secondPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->secondPanel->Controls->Add(this->lblOtsu);
			this->secondPanel->Controls->Add(this->img_otsu);
			this->secondPanel->Controls->Add(this->lblNoBlur);
			this->secondPanel->Controls->Add(this->img_blur);
			this->secondPanel->Controls->Add(this->img_noblur);
			this->secondPanel->Controls->Add(this->lblCanny);
			this->secondPanel->Controls->Add(this->lblBlur);
			this->secondPanel->Controls->Add(this->img_canny);
			this->secondPanel->Location = System::Drawing::Point(246, 51);
			this->secondPanel->Name = L"secondPanel";
			this->secondPanel->Size = System::Drawing::Size(725, 348);
			this->secondPanel->TabIndex = 10;
			// 
			// lblOtsu
			// 
			this->lblOtsu->AutoSize = true;
			this->lblOtsu->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOtsu->Location = System::Drawing::Point(343, 320);
			this->lblOtsu->Name = L"lblOtsu";
			this->lblOtsu->Size = System::Drawing::Size(81, 13);
			this->lblOtsu->TabIndex = 8;
			this->lblOtsu->Text = L"Otsu\'s Method";
			// 
			// img_otsu
			// 
			this->img_otsu->BackColor = System::Drawing::Color::White;
			this->img_otsu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_otsu->Location = System::Drawing::Point(138, 11);
			this->img_otsu->Name = L"img_otsu";
			this->img_otsu->Size = System::Drawing::Size(286, 306);
			this->img_otsu->TabIndex = 7;
			this->img_otsu->TabStop = false;
			// 
			// lblNoBlur
			// 
			this->lblNoBlur->AutoSize = true;
			this->lblNoBlur->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNoBlur->Location = System::Drawing::Point(78, 147);
			this->lblNoBlur->Name = L"lblNoBlur";
			this->lblNoBlur->Size = System::Drawing::Size(45, 13);
			this->lblNoBlur->TabIndex = 6;
			this->lblNoBlur->Text = L"No Blur";
			// 
			// img_blur
			// 
			this->img_blur->BackColor = System::Drawing::Color::White;
			this->img_blur->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->img_blur->Location = System::Drawing::Point(12, 184);
			this->img_blur->Name = L"img_blur";
			this->img_blur->Size = System::Drawing::Size(111, 133);
			this->img_blur->TabIndex = 5;
			this->img_blur->TabStop = false;
			// 
			// img_noblur
			// 
			this->img_noblur->BackColor = System::Drawing::Color::White;
			this->img_noblur->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->img_noblur->Location = System::Drawing::Point(12, 11);
			this->img_noblur->Name = L"img_noblur";
			this->img_noblur->Size = System::Drawing::Size(111, 133);
			this->img_noblur->TabIndex = 1;
			this->img_noblur->TabStop = false;
			// 
			// lblCanny
			// 
			this->lblCanny->AutoSize = true;
			this->lblCanny->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCanny->Location = System::Drawing::Point(651, 320);
			this->lblCanny->Name = L"lblCanny";
			this->lblCanny->Size = System::Drawing::Size(67, 13);
			this->lblCanny->TabIndex = 4;
			this->lblCanny->Text = L"Canny Edge";
			// 
			// lblBlur
			// 
			this->lblBlur->AutoSize = true;
			this->lblBlur->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBlur->Location = System::Drawing::Point(71, 320);
			this->lblBlur->Name = L"lblBlur";
			this->lblBlur->Size = System::Drawing::Size(52, 13);
			this->lblBlur->TabIndex = 3;
			this->lblBlur->Text = L"Gaussian";
			// 
			// img_canny
			// 
			this->img_canny->BackColor = System::Drawing::Color::White;
			this->img_canny->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_canny->Location = System::Drawing::Point(432, 11);
			this->img_canny->Name = L"img_canny";
			this->img_canny->Size = System::Drawing::Size(286, 306);
			this->img_canny->TabIndex = 2;
			this->img_canny->TabStop = false;
			// 
			// btnSecond
			// 
			this->btnSecond->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->btnSecond->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			this->btnSecond->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSecond->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSecond->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->btnSecond->Location = System::Drawing::Point(437, 22);
			this->btnSecond->Name = L"btnSecond";
			this->btnSecond->Size = System::Drawing::Size(60, 28);
			this->btnSecond->TabIndex = 2;
			this->btnSecond->Text = L"Second";
			this->btnSecond->UseVisualStyleBackColor = false;
			this->btnSecond->Click += gcnew System::EventHandler(this, &rgb_hsi_form::btnSecond_Click);
			// 
			// btnFirst
			// 
			this->btnFirst->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->btnFirst->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			this->btnFirst->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFirst->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFirst->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->btnFirst->Location = System::Drawing::Point(371, 22);
			this->btnFirst->Name = L"btnFirst";
			this->btnFirst->Size = System::Drawing::Size(60, 28);
			this->btnFirst->TabIndex = 1;
			this->btnFirst->Text = L"First";
			this->btnFirst->UseVisualStyleBackColor = false;
			this->btnFirst->Click += gcnew System::EventHandler(this, &rgb_hsi_form::btnFirst_Click);
			// 
			// origPanel
			// 
			this->origPanel->BackColor = System::Drawing::Color::White;
			this->origPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->origPanel->Controls->Add(this->lblPath);
			this->origPanel->Controls->Add(this->label2);
			this->origPanel->Controls->Add(this->lblDiseaseHead);
			this->origPanel->Controls->Add(this->lblPathHead);
			this->origPanel->Controls->Add(this->img_orig);
			this->origPanel->Location = System::Drawing::Point(-8, -5);
			this->origPanel->Name = L"origPanel";
			this->origPanel->Size = System::Drawing::Size(246, 542);
			this->origPanel->TabIndex = 13;
			// 
			// lblPath
			// 
			this->lblPath->BackColor = System::Drawing::Color::White;
			this->lblPath->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lblPath->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPath->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)));
			this->lblPath->Location = System::Drawing::Point(14, 387);
			this->lblPath->Name = L"lblPath";
			this->lblPath->ReadOnly = true;
			this->lblPath->Size = System::Drawing::Size(220, 46);
			this->lblPath->TabIndex = 10;
			this->lblPath->Text = L"C:\\\\";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(9, 466);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 25);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Sakit Here";
			// 
			// lblDiseaseHead
			// 
			this->lblDiseaseHead->AutoSize = true;
			this->lblDiseaseHead->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDiseaseHead->Location = System::Drawing::Point(11, 453);
			this->lblDiseaseHead->Name = L"lblDiseaseHead";
			this->lblDiseaseHead->Size = System::Drawing::Size(95, 13);
			this->lblDiseaseHead->TabIndex = 8;
			this->lblDiseaseHead->Text = L"Detected Disease";
			// 
			// lblPathHead
			// 
			this->lblPathHead->AutoSize = true;
			this->lblPathHead->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPathHead->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)));
			this->lblPathHead->Location = System::Drawing::Point(11, 371);
			this->lblPathHead->Name = L"lblPathHead";
			this->lblPathHead->Size = System::Drawing::Size(124, 13);
			this->lblPathHead->TabIndex = 6;
			this->lblPathHead->Text = L"Path of Original Image";
			// 
			// img_orig
			// 
			this->img_orig->BackColor = System::Drawing::Color::White;
			this->img_orig->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->img_orig->Location = System::Drawing::Point(14, 60);
			this->img_orig->Name = L"img_orig";
			this->img_orig->Size = System::Drawing::Size(220, 304);
			this->img_orig->TabIndex = 5;
			this->img_orig->TabStop = false;
			// 
			// panelBtn
			// 
			this->panelBtn->BackColor = System::Drawing::Color::White;
			this->panelBtn->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelBtn->Controls->Add(this->btnMin);
			this->panelBtn->Controls->Add(this->lblTitle);
			this->panelBtn->Controls->Add(this->btnFirst);
			this->panelBtn->Controls->Add(this->btnOpen);
			this->panelBtn->Controls->Add(this->btnSecond);
			this->panelBtn->Controls->Add(this->btnLocation);
			this->panelBtn->Location = System::Drawing::Point(-8, -12);
			this->panelBtn->Name = L"panelBtn";
			this->panelBtn->Size = System::Drawing::Size(992, 60);
			this->panelBtn->TabIndex = 12;
			this->panelBtn->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &rgb_hsi_form::panelBtn_MouseDown);
			this->panelBtn->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &rgb_hsi_form::panelBtn_MouseMove);
			this->panelBtn->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &rgb_hsi_form::panelBtn_MouseUp);
			// 
			// btnMin
			// 
			this->btnMin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->btnMin->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			this->btnMin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->btnMin->Location = System::Drawing::Point(946, 22);
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
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::Black;
			this->lblTitle->Location = System::Drawing::Point(10, 29);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(197, 21);
			this->lblTitle->TabIndex = 6;
			this->lblTitle->Text = L"Maize Disease Detection";
			// 
			// rgb_hsi_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->ClientSize = System::Drawing::Size(980, 534);
			this->Controls->Add(this->panelBtn);
			this->Controls->Add(this->origPanel);
			this->Controls->Add(this->progressPanel);
			this->Controls->Add(this->firstPanel);
			this->Controls->Add(this->secondPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"rgb_hsi_form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RGB to HSI";
			this->TopMost = true;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_Hue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_Saturation))->EndInit();
			this->progressPanel->ResumeLayout(false);
			this->firstPanel->ResumeLayout(false);
			this->firstPanel->PerformLayout();
			this->secondPanel->ResumeLayout(false);
			this->secondPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_otsu))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_blur))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_noblur))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_canny))->EndInit();
			this->origPanel->ResumeLayout(false);
			this->origPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_orig))->EndInit();
			this->panelBtn->ResumeLayout(false);
			this->panelBtn->PerformLayout();
			this->ResumeLayout(false);

		}

	#pragma endregion

	private: System::Void btnOpen_Click(System::Object^  sender, System::EventArgs^  e) {

		System::String^ message = "";		
		System::String^ final_path = "";
		System::String^ img_change = "";

		txtProgress->Clear();	

		//*** START OF RGB CONVERSION ***/

		rgb_hsi_form::openFile->InitialDirectory = "C:\\Users\Sam\Documents\School\THESIS\THESIS II\corn pics\sRGB\July 7";
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
						// Intensity = 1/3 (r + g + b)

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

						s1.at<Vec3b>(i, j)[0] = s * 100;
						s1.at<Vec3b>(i, j)[1] = s * 100;
						s1.at<Vec3b>(i, j)[2] = s * 100;
					}
				}

				std::string final_path2 = msclr::interop::marshal_as<std::string>(final_path);
				std::string h1_path = std::string("Image Processing/") + final_path2 + std::string("__1__HUE.jpg");
				txtProgress->AppendText("Hue Selection Completed...\r\n");
				std::string s1_path = std::string("Image Processing/") + final_path2 + std::string("__1__SAT.jpg");
				txtProgress->AppendText("Saturation Selection Completed...");
				txtProgress->ScrollToCaret();
						
				imwrite(h1_path, h1); message = gcnew System::String(h1_path.c_str());
				txtProgress->AppendText("\r\n" + message + " successfully created...\r\n");
				imwrite(s1_path, s1); message = gcnew System::String(s1_path.c_str());
				txtProgress->AppendText(message + " successfully created...");
				txtProgress->ScrollToCaret();

				delete img_Hue->Image;
				img_Hue->Image = nullptr;
				delete img_Saturation->Image;
				img_Saturation->Image = nullptr;
			
				std::string open_hue = "C:/Users/Sam/Documents/School/THESIS/THESIS II/programs/form1/form1/" + h1_path;
				std::string open_sat = "C:/Users/Sam/Documents/School/THESIS/THESIS II/programs/form1/form1/" + s1_path;							
				
				img_change = gcnew System::String(open_hue.c_str());				
				img_Hue->BackgroundImage = System::Drawing::Image::FromFile(img_change);
				img_change = gcnew System::String(open_sat.c_str());
				img_Saturation->BackgroundImage = System::Drawing::Image::FromFile(img_change);

				//*** END OF RGB CONVERSION ***/

		#pragma region Gaussian Filter

		/* start producing Gaussian filter kernel */

			txtProgress->AppendText("\r\nCreating Gaussian filter kernel...\r\n");

			const double PI = atan(1) * 4;
			double sigma = 40; // 2 orig --- the higher, the more blurred | 20 previously used
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

			txtProgress->AppendText("Gaussian filter kernel created...\r\n");
		
		//*** End producing Gaussian filter kernel ***//

			txtProgress->AppendText("Applying Gaussian filter to hue image...");
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

			txtProgress->AppendText("\r\nGaussian filter to hue successfully applied...\r\n");		
			txtProgress->AppendText("Applying Gaussian filter to saturation image...");
			txtProgress->ScrollToCaret();

			cv::Mat sat = cv::imread(open_sat);
			Mat Sgray(sat.size(), CV_8UC1);
			Mat SatBlurred(sat.size(), CV_8UC1);
			cvtColor(sat, Sgray, CV_RGB2GRAY);

			//*** FOR SAT ***//
			for (int row = 0 + verticleImageBound; row < Sgray.rows - verticleImageBound; row++) {
				for (int col = 0 + horizontalImageBound; col < Sgray.cols - horizontalImageBound; col++) {
					float value = 0.0;
					for (int kRow = 0; kRow < kernalHeight; kRow++) {
						for (int kCol = 0; kCol < kernalWidth; kCol++) {
							//multiply pixel value with corresponding gaussian kernal value
							float pixel = Sgray.at<uchar>(kRow + row - verticleImageBound, kCol + col - horizontalImageBound) * kernalArray[kRow][kCol];
							value += pixel;
						}
					}
					//assign new values to central point
					SatBlurred.at<uchar>(row, col) = cvRound(value);
				}
			}

			txtProgress->AppendText("\r\nGaussian filter to saturation successfully applied...");		
			txtProgress->ScrollToCaret();
			std::string blurredH = std::string("Image Processing/") + final_path2 + std::string("__2__BLURREDHUE.jpg");
			std::string blurredS = std::string("Image Processing/") + final_path2 + std::string("__2__BLURREDSAT.jpg");
			imwrite(blurredH, HueBlurred); imwrite(blurredS, SatBlurred);
			message = gcnew System::String(blurredH.c_str());
			txtProgress->AppendText("\r\n" + message + " successfully created...");
			message = gcnew System::String(blurredS.c_str());
			txtProgress->AppendText(message + " successfully created...");
			txtProgress->ScrollToCaret();
		
			img_change = gcnew System::String(open_hue.c_str());
			img_noblur->BackgroundImage = System::Drawing::Image::FromFile(img_change);
			img_change = gcnew System::String(blurredH.c_str());
			img_blur->BackgroundImage = System::Drawing::Image::FromFile(img_change);

		#pragma endregion

		/*
			START OF OTSU | OTSU'S METHOD			
		*/

			txtProgress->AppendText("\r\nStart of Otsu's Method...\r\n");
			int pixel;						// pixel value
			float betweenvariance = 0;		// between group variance
			float maxbetweenvariance = 0;	// max between group variance
			float optimizedthresh = 0;		// optimized threshhold, at the end of otsu's algorithm this will be the thresshold with the max between group vairance
			float sum = 0;					// sum of all histogram values to calculate the mean grey level value of the imagem values before threshholding
			float histogram[256], probability[256];

			cv::Mat otsu_img = cv::imread(blurredH, CV_8UC1);
			int rows = otsu_img.rows, cols = otsu_img.cols;
			cv::Size size = otsu_img.size();
			rows = size.height; cols = size.width;		

			for (int i = 0; i <= 255; i++) {
				histogram[i] = 0;
				probability[i] = 0;
			}

			// cycle through entire otsu_img and get pixel values and populate the histogram with them
			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < cols; j++) {				
					pixel = (int)otsu_img.at<uchar>(i, j);
					sum += pixel;
					histogram[pixel]++;
				}
			}

			//calculate the probability of each histogram value and store them in the probability array
			for (int i = 0; i <= 255; i++) {
				probability[i] = histogram[i] / (cols*rows);
			}

			float p1 = probability[0];		// Initial probability p1 which is equal to just the probability of the 0 grey value
			float q1 = p1;					// Initial q which is the sum of probabilities before 1, which is equal to p1		
			float mu1 = 0;					// Initial mean before the 1 has to be 0. mu(1)=0		
			float mu2 = 0;					// Initial mean after the 0. Initially set to 0. This gets reset in the algorithm		
			float mu = sum / (cols*rows);	// Mean grey level (mu) calculation
		
			float q1prev = q1; //set previous q1, q1(t), to equal the current q1
			for (int t = 1; t < 255; t++) {
				float q1next = q1prev + probability[t + 1]; //q1next-q1(t+1)
				float mu1next = (q1prev*mu1 + (t + 1)*(probability[t + 1])) / q1next; //set mu1(t+1)
				float mu2next = (mu - q1next*mu1next) / (1 - q1next); //set mu2(t+1)
				betweenvariance = q1prev*(1 - q1prev)*((mu1 - mu2)*(mu1 - mu2)); //calculate between group variance
																				 //max between group variance is initially set to 0. Change the max between group variance, and change the optimized threshold to t if the current variance is > max.
				if (betweenvariance > maxbetweenvariance) {
					maxbetweenvariance = betweenvariance;
					optimizedthresh = t; //set new optimized threshhold
				}
				q1prev = q1next; //set q1(t) to be used in the next iteration to be equal to the current q1(t+1) which is q1next
				mu1 = mu1next; //do the same for mu1. set mu1(t) of next iteration to equal the current mu1(t+1)
				mu2 = mu2next; //set mu2(t) of next iteration to equal the current mu2(t+1)
				if (q1next == 0) {
					mu1 = 0; //this eliminates divide by 0 errors because the calculate of the next mu1 would be undefend if the next value of q1 is 0, according to the otsu recursive algorithm
				}
			}

			txtProgress->AppendText("Applying Otsu's method...");
			txtProgress->ScrollToCaret();
			//set otsu_img values based on the optimized threshhold calculated above.
			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < cols; j++) {
					pixel = (int)otsu_img.at<uchar>(i, j);
					if (pixel < optimizedthresh) { //if pixel is< than the threshhold, set it to 200
						pixel = otsu_img.at<uchar>(i, j) = 200;
					}
					else { //if pixel is> than the threshhold, set it to 0
						pixel = otsu_img.at<uchar>(i, j) = 0;
					}
				}
			}

			txtProgress->AppendText("\r\nOtsu's Method Completed...\r\n");
			std::string otsu = std::string("Image Processing/") + final_path2 + std::string("__3__OTSU.jpg");
			imwrite(otsu, otsu_img); message = gcnew System::String(otsu.c_str());
			txtProgress->AppendText(message + " successfully created...");
			txtProgress->ScrollToCaret();
		
			img_change = gcnew System::String(otsu.c_str());
			img_otsu->BackgroundImage = System::Drawing::Image::FromFile(img_change);

		//*** END OF OTSU ***//

		/* CANNY EDGE */

			txtProgress->AppendText("\r\nCreating Canny edge filter...");
			txtProgress->ScrollToCaret();
			cv::Mat toCanny = cv::imread(otsu); // Original image
			cv::Mat imgCanny; // Output image

			cv::Canny(toCanny,				// input image
				imgCanny,                   // output image
				100,                        // low threshold
				200);                       // high threshold

			txtProgress->AppendText("\r\nCanny Edge filter Completed...\r\n");
			std::string canny = std::string("Image Processing/") + final_path2 + std::string("__4__CANNY.jpg");
			imwrite(canny, imgCanny); message = gcnew System::String(canny.c_str());
			txtProgress->AppendText(message + " successfully created...");
			txtProgress->ScrollToCaret();

			img_change = gcnew System::String(canny.c_str());
			img_canny->BackgroundImage = System::Drawing::Image::FromFile(img_change);

		//*** END OF CANNY EDGE ***//ssss

		//*** START OF SGDM ***//

			txtProgress->AppendText("Applying SGDM...");
			txtProgress->ScrollToCaret();
			cv::Mat noSGDM = cv::imread(otsu);			
		
			int row = noSGDM.rows, col = noSGDM.cols;
			Mat gl = Mat::zeros(256, 256, CV_32FC1);

			//creating glcm matrix with 256 levels,radius=1 and in the horizontal direction 
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < col - 1; j++) {
					gl.at<float>(noSGDM.at<uchar>(i, j), noSGDM.at<uchar>(i, j + 1)) = gl.at<float>(noSGDM.at<uchar>(i, j), noSGDM.at<uchar>(i, j + 1)) + 1;
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
					homogenity = homogenity + ( gl.at<float>(i, j) / (1 + pow((i - j), 2)) );
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

			ofstream csv;
			if (std::ifstream("sample.csv")) {
				csv.open("sample.csv", std::ios_base::app);
			}
			else {
				csv.open("sample.csv");
				csv << "Filename, Energy, Contrast, Homogenity, IDM, Entropy, Mean1, Cluster Shade, Cluster Prominence\n";
			}
			
			csv << final_path2 + "," + std::to_string(energy) + "," + std::to_string(contrast) + "," + std::to_string(homogenity)
				+ "," + std::to_string(IDM) + "," + std::to_string(entropy) + "," + std::to_string(mean1)
				+ "," + std::to_string(shade) + "," + std::to_string(prominence) + "\n";
			csv.close();

			txtProgress->AppendText("\r\nSGDM Method Completed...");
			txtProgress->ScrollToCaret();

		//*** END OF SGDM ***//

		}
			else {
				System::String^ error = gcnew System::String("Please select another file.");
				MessageBox::Show(error);
				MessageBox::Show(openFile->FileName);
			}		
		
		txtProgress->AppendText("\r\n.\r\n.\r\nImage Processing complete.");
		txtProgress->ScrollToCaret();
		firstPanel->BringToFront();
		//MessageBox::Show("Done");
		}
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



};
} 