#pragma once
//#include "MainWindo.h"
#include <iostream>
#include <fstream>
#include <string>
namespace Flimncourse {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Runtime::InteropServices;

	/// <summary>
	/// Сводка для Settings_win
	/// </summary>
	public ref class Settings_win : public System::Windows::Forms::Form
	{
	public:
		Settings_win(void)
		{
			InitializeComponent();
			fstream theme_file;
			theme_file.open("state_theme.txt");
			string state_theme;
			theme_file >> state_theme;
			if (state_theme == "true" || state_theme == "truee") {
				panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				richTextBox1->BackColor = System::Drawing::Color::DarkSlateBlue;
				richTextBox1->ForeColor = System::Drawing::Color::White;
				this->BackColor = System::Drawing::Color::DarkSlateBlue;
				label1->BackColor = System::Drawing::Color::DarkSlateBlue;
				label1->ForeColor = System::Drawing::Color::White;
				label14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				label17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				label18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				label19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				label20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				label21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				label22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				label23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				label24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				checkBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				label25->BackColor = System::Drawing::Color::DarkSlateBlue;
				label26->BackColor = System::Drawing::Color::DarkSlateBlue;
				label15->BackColor= System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				richTextBox2->BackColor= System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Settings_win()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Indigo;
			this->label1->Location = System::Drawing::Point(983, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"x";
			this->label1->Click += gcnew System::EventHandler(this, &Settings_win::label1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Indigo;
			this->panel1->Controls->Add(this->label28);
			this->panel1->Controls->Add(this->label27);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(264, 585);
			this->panel1->TabIndex = 1;
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->ForeColor = System::Drawing::Color::White;
			this->label28->Location = System::Drawing::Point(3, 515);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(246, 60);
			this->label28->TabIndex = 13;
			this->label28->Text = L"Политика конфиденциальности";
			this->label28->Click += gcnew System::EventHandler(this, &Settings_win::label28_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->ForeColor = System::Drawing::Color::White;
			this->label27->Location = System::Drawing::Point(3, 482);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(81, 24);
			this->label27->TabIndex = 12;
			this->label27->Text = L"Справка";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(3, 449);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(89, 24);
			this->label16->TabIndex = 11;
			this->label16->Text = L"О версии";
			this->label16->Click += gcnew System::EventHandler(this, &Settings_win::label16_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(3, 415);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(168, 24);
			this->label13->TabIndex = 6;
			this->label13->Text = L"Создание заметок";
			this->label13->Click += gcnew System::EventHandler(this, &Settings_win::label13_Click);
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(3, 359);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(258, 56);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Уменьшить/увеличить размер окна Flimn";
			this->label12->Click += gcnew System::EventHandler(this, &Settings_win::label12_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(3, 324);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(187, 24);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Свернуть окно Flimn";
			this->label11->Click += gcnew System::EventHandler(this, &Settings_win::label11_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(3, 290);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(139, 24);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Выход из Flimn";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(3, 256);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(170, 24);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Недавние заметки";
			this->label9->Click += gcnew System::EventHandler(this, &Settings_win::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(3, 222);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(128, 24);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Поле заметок";
			this->label8->Click += gcnew System::EventHandler(this, &Settings_win::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(3, 186);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(147, 24);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Панель заметок";
			this->label7->Click += gcnew System::EventHandler(this, &Settings_win::label7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(3, 148);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(199, 24);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Панель инструментов";
			this->label6->Click += gcnew System::EventHandler(this, &Settings_win::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(3, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 24);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Поиск";
			this->label5->Click += gcnew System::EventHandler(this, &Settings_win::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(3, 77);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 24);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Цветовая схема";
			this->label4->Click += gcnew System::EventHandler(this, &Settings_win::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(3, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 24);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Имя пользователя";
			this->label3->Click += gcnew System::EventHandler(this, &Settings_win::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 29);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Настройки Flimn";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::White;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->ForeColor = System::Drawing::Color::Black;
			this->richTextBox1->Location = System::Drawing::Point(281, 42);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(716, 106);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Visible = false;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::Indigo;
			this->label14->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(281, 163);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(257, 31);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Изменить имя пользователя";
			this->label14->Visible = false;
			this->label14->Click += gcnew System::EventHandler(this, &Settings_win::label14_Click);
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::Indigo;
			this->label15->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(281, 215);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(257, 31);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Новое имя пользователя:";
			this->label15->Visible = false;
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::Indigo;
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox2->ForeColor = System::Drawing::Color::White;
			this->richTextBox2->Location = System::Drawing::Point(544, 215);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(404, 31);
			this->richTextBox2->TabIndex = 5;
			this->richTextBox2->Text = L"";
			this->richTextBox2->Visible = false;
			this->richTextBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Settings_win::Enter_username);
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::Indigo;
			this->label17->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(281, 267);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(307, 31);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Включить/Выключить поиск";
			this->label17->Visible = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Indigo;
			this->checkBox1->Location = System::Drawing::Point(594, 271);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(22, 21);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->Visible = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Settings_win::checkBox1_CheckedChanged);
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::Indigo;
			this->label18->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(281, 317);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(307, 31);
			this->label18->TabIndex = 8;
			this->label18->Text = L"Выбрать цвет поля поиска";
			this->label18->Visible = false;
			this->label18->Click += gcnew System::EventHandler(this, &Settings_win::label18_Click);
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::Indigo;
			this->label19->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(281, 359);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(106, 31);
			this->label19->TabIndex = 9;
			this->label19->Text = L"Включить";
			this->label19->Visible = false;
			this->label19->Click += gcnew System::EventHandler(this, &Settings_win::label19_Click);
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::Color::Indigo;
			this->label20->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(404, 359);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(134, 31);
			this->label20->TabIndex = 10;
			this->label20->Text = L"Выключить";
			this->label20->Visible = false;
			this->label20->Click += gcnew System::EventHandler(this, &Settings_win::label20_Click);
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::Color::Indigo;
			this->label21->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(281, 408);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(106, 31);
			this->label21->TabIndex = 11;
			this->label21->Text = L"Включить";
			this->label21->Visible = false;
			this->label21->Click += gcnew System::EventHandler(this, &Settings_win::label21_Click);
			// 
			// label22
			// 
			this->label22->BackColor = System::Drawing::Color::Indigo;
			this->label22->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(404, 408);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(134, 31);
			this->label22->TabIndex = 12;
			this->label22->Text = L"Выключить";
			this->label22->Visible = false;
			this->label22->Click += gcnew System::EventHandler(this, &Settings_win::label22_Click);
			// 
			// label23
			// 
			this->label23->BackColor = System::Drawing::Color::Indigo;
			this->label23->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(281, 215);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(148, 31);
			this->label23->TabIndex = 13;
			this->label23->Text = L"Ночной режим";
			this->label23->Visible = false;
			this->label23->Click += gcnew System::EventHandler(this, &Settings_win::label23_Click);
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::Color::Indigo;
			this->label24->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(435, 215);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(148, 31);
			this->label24->TabIndex = 14;
			this->label24->Text = L"Светлая тема";
			this->label24->Visible = false;
			this->label24->Click += gcnew System::EventHandler(this, &Settings_win::label24_Click);
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::Color::Indigo;
			this->label25->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->ForeColor = System::Drawing::Color::White;
			this->label25->Location = System::Drawing::Point(824, 544);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(177, 31);
			this->label25->TabIndex = 15;
			this->label25->Text = L"Выйти из Flimn";
			this->label25->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label25->Click += gcnew System::EventHandler(this, &Settings_win::label25_Click);
			// 
			// label26
			// 
			this->label26->BackColor = System::Drawing::Color::Indigo;
			this->label26->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->ForeColor = System::Drawing::Color::White;
			this->label26->Location = System::Drawing::Point(589, 544);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(222, 31);
			this->label26->TabIndex = 16;
			this->label26->Text = L"Перезагрузить Flimn";
			this->label26->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label26->Click += gcnew System::EventHandler(this, &Settings_win::label26_Click);
			// 
			// Settings_win
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1009, 584);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->Name = L"Settings_win";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Settings_win";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*MainWindo^ main_windo_form = gcnew MainWindo();
		this->Hide();
		main_windo_form->Show();*/
		this->Close();
	}
		   string& Convert_String_to_string(System::String^ text1, string& text2) {
			   const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(text1)).ToPointer();
			   text2 = chars;
			   Marshal::FreeHGlobal(IntPtr((void*)chars));
			   return text2;
		   }
		   String^ Convert_string_to_String(string& text1, String^ text2) {
			   text2 = gcnew System::String(text1.c_str());
			   return text2;
		   }
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Visible = true;
		richTextBox2->Visible = false;
		label15->Visible = false;
		label14->Visible = false;
		label17->Visible = false;
		checkBox1->Visible = false;
		label18->Visible = false;
		label19->Visible = false;
		label20->Visible = false;
		richTextBox1->Text = "Панель недавних заметок отображает список последних созданных или редактированных заметок. Вы можете отключить или включить данный элемент интерфейса";
		label21->Visible = true;
		label22->Visible = true;
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Visible = true;
		richTextBox2->Visible = false;
		label15->Visible = false;
		label14->Visible = false;
		label17->Visible = false;
		checkBox1->Visible = false;
		label18->Visible = false;
		label19->Visible = false;
		label20->Visible = false;
		label21->Visible = false;
		label22->Visible = false;
		richTextBox1->Text = "Элемент сворачивания окна позволит полностью свернуть окно приложения. Вы можете включить или отключить данный элемент интерфейса";
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream file_user;
		file_user.open("username.txt");
		string username_t;
		file_user >> username_t;
		richTextBox1->Visible = true;
		label17->Visible = false;
		checkBox1->Visible = false;
		richTextBox1->Text = "Имя пользователя будет отображаться при входе в Flimn в панели заметок\nВаше имя пользователя: " + Convert_string_to_String(username_t, richTextBox1->Text);
		label14->Visible = true;
		label18->Visible = false;
		label19->Visible = false;
		label20->Visible = false;
		label21->Visible = false;
		label22->Visible = false;
		label23->Visible = false;
		label24->Visible = false;
	}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
		label15->Visible = true;
		richTextBox2->Visible = true;
	}
	private: System::Void save_username(System::Object^ sender, System::EventArgs^ e) {
		label15->Visible = true;
		richTextBox2->Visible = true;
		fstream file_user;
		file_user.open("username.txt");
		string new_username_t;
		new_username_t = Convert_String_to_string(richTextBox2->Text, new_username_t);
		file_user << new_username_t;
		MessageBox::Show("Сохранено!");
	}
	private: System::Void Enter_username(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys(13)) {
			save_username(sender, e);
		}
	}
	private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Visible = true;
		richTextBox2->Visible = false;
		label15->Visible = false;
		label14->Visible = false;
		label17->Visible = false;
		checkBox1->Visible = false;
		label18->Visible = false;
		label19->Visible = false;
		label20->Visible = false;
		label21->Visible = false;
		label22->Visible = false;
		label23->Visible = false;
		label24->Visible = false;
		richTextBox1->Text = "Версия Flimn: build 1.1.0";
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Visible = true;
		richTextBox2->Visible = false;
		label15->Visible = false;
		label14->Visible = false;
		richTextBox1->Text = "Поиск позволяет искать данные в заметках. Вы можете включить или отключить его, изменить цвет и многое другое";
		label17->Visible = true;
		label17->Location = System::Drawing::Point(227, 100);
		checkBox1->Visible = true;
		checkBox1->Location = System::Drawing::Point(199, 104);
		label18->Visible = true;
		label18->Location = System::Drawing::Point(227, 140);
		label19->Visible = false;
		label20->Visible = false;
		label21->Visible = false;
		label22->Visible = false;
		label23->Visible = false;
		label24->Visible = false;
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		string index_search = "true";
		if (checkBox1->Checked == true) {
			index_search = "true";
		}
		else {
			index_search = "false";
		}
		fstream file_start_checked;
		file_start_checked.open("start_checked.txt");
		file_start_checked << index_search;
	}
	private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->AllowFullOpen = true;
		colorDialog1->ShowDialog();
		fstream color_search;
		color_search.open("color_search.txt");
		System::Drawing::Color color = colorDialog1->Color;
		MessageBox::Show("Сохранено!");
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Visible = true;
		richTextBox2->Visible = false;
		label15->Visible = false;
		label14->Visible = false;
		label17->Visible = false;
		checkBox1->Visible = false;
		label18->Visible = false;
		richTextBox1->Text = "Панель инструментов представляет собой набор инструментов в правой части экрана. Вы можете включить или отключить данный элемент интерфейса";
		label19->Visible = true;
		label20->Visible = true;
		label19->Location = System::Drawing::Point(219, 100);
		label20->Location = System::Drawing::Point(300, 100);
		label21->Visible = false;
		label22->Visible = false;
		label23->Visible = false;
		label24->Visible = false;
	}
	private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream panel_instruments;
		panel_instruments.open("panel_instruments.txt");
		string state_panel_instruments = "true";
		panel_instruments << state_panel_instruments;
		MessageBox::Show("Сохранено!");
	}
	private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream panel_instruments;
		panel_instruments.open("panel_instruments.txt");
		string state_panel_instruments = "false";
		panel_instruments << state_panel_instruments;
		MessageBox::Show("Сохранено!");
	}
	private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream recent_notes;
		recent_notes.open("panel_instruments.txt");
		string state_panel = "true";
		recent_notes << state_panel;
		MessageBox::Show("Сохранено!");
	}
	private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream recent_notes;
		recent_notes.open("panel_instruments.txt");
		string state_panel_instruments = "false";
		recent_notes << state_panel_instruments;
		MessageBox::Show("Сохранено!");
	}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Visible = true;
		richTextBox2->Visible = false;
		label15->Visible = false;
		label14->Visible = false;
		label17->Visible = false;
		checkBox1->Visible = false;
		label18->Visible = false;
		label19->Visible = false;
		label20->Visible = false;
		label21->Visible = false;
		label22->Visible = false;
		label23->Visible = false;
		label24->Visible = false;
		richTextBox1->Text = "Элемент сворачивания и разворачивания окна расположен в правой верхней части интерфейса. Данный элемент позволяет как уменьшить размер окна, сделав одинарный клик, так и увеличить, сделав двойной. Вы можете изменить параметры увеличения и уменьшения окна Flimn";
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Visible = true;
		richTextBox2->Visible = false;
		label15->Visible = false;
		label14->Visible = false;
		label17->Visible = false;
		checkBox1->Visible = false;
		label18->Visible = false;
		label19->Visible = false;
		label20->Visible = false;
		label21->Visible = false;
		label22->Visible = false;
		label23->Visible = true;
		label24->Visible = true;
		richTextBox1->Text = "Цветовая схема позволяет изменить цвет по умолчанию в Flimn. Например, вы можете по умолчанию поставить ночной режим в приложении";
	}
	private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream theme_file;
		theme_file.open("state_theme.txt");
		string state_theme = "true";
		theme_file << state_theme;
		MessageBox::Show("Сохранено!");
	}
	private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream theme_file;
		theme_file.open("state_theme.txt");
		string state_theme = "false";
		theme_file << state_theme;
		MessageBox::Show("Сохранено!");
	}
	private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Application::Exit();
	}
private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Visible = true;
	richTextBox2->Visible = false;
	label15->Visible = false;
	label14->Visible = false;
	label17->Visible = false;
	checkBox1->Visible = false;
	label18->Visible = false;
	label19->Visible = false;
	label20->Visible = false;
	label21->Visible = false;
	label22->Visible = false;
	label23->Visible = false;
	label24->Visible = false;
	richTextBox1->Text = "Панель недавних заметок расположена в левой части экрана. Панель отображает заметки, созданные в относительно недавние промежутки времени. Вы можете включить или отключить данную панель";
}
private: System::Void label28_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Visible = true;
	richTextBox2->Visible = false;
	label15->Visible = false;
	label14->Visible = false;
	label17->Visible = false;
	checkBox1->Visible = false;
	label18->Visible = false;
	label19->Visible = false;
	label20->Visible = false;
	label21->Visible = false;
	label22->Visible = false;
	label23->Visible = false;
	label24->Visible = false;
	richTextBox1->Size = System::Drawing::Size(475, 500);
	richTextBox1->Text = "Политика конфиденциальности Flimn. Flimn обеспечивает защиту конфиденциальности ваших данных от сторонних вмешательств. Только Вы можете получить доступ к Вашим заметкам. В случае, если приложение было повреждено пользователем или злоумышленниками (в том числе, злоумыленники получили доступ к файлам компьютера пользователя), InnoSoftware не несет никакой ответственности за утечку или утерю пользовательских данных. Будьте внимательны, и не передавайте файлы заметок или конфигурации приложения Flimn. Также, во избежание поломки приложения, рекомендуется не изменять файлы Flimn, в частности, файлы конфигурации. Используя Flimn, вы соглашаетесь со всеми условиями настоящей политики конфиденциальности Flimn";
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Visible = true;
	richTextBox2->Visible = false;
	label15->Visible = false;
	label14->Visible = false;
	label17->Visible = false;
	checkBox1->Visible = false;
	label18->Visible = false;
	label19->Visible = false;
	label20->Visible = false;
	label21->Visible = false;
	label22->Visible = false;
	label23->Visible = false;
	label24->Visible = false;
	/*String^ stroka = L"Times New Roman";*/
	this->label28->Font = (gcnew System::Drawing::Font(L"Calibri", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Visible = true;
	richTextBox2->Visible = false;
	label15->Visible = false;
	label14->Visible = false;
	label17->Visible = false;
	checkBox1->Visible = false;
	label18->Visible = false;
	label19->Visible = false;
	label20->Visible = false;
	label21->Visible = false;
	label22->Visible = false;
	label23->Visible = false;
	label24->Visible = false;
	richTextBox1->Text = "Поле заметок - это основной элемент приложения. Данный элемент отображает и записывает пользовательские заметки. Вы можете изменить шрифт, отображаемый данныи полем";
	String^ font_foldernote = L"Times New Roman";
	this->label28->Font = (gcnew System::Drawing::Font(font_foldernote, 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
}
};
}
