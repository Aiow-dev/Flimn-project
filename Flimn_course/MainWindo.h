#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Settings_win.h"
#include "Load_screen.h"
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
	/// Сводка для MainWindo
	/// </summary>
	public ref class MainWindo : public System::Windows::Forms::Form
	{
	public:
		MainWindo(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			DateTime^ time = gcnew DateTime();
			DateTime^ time1 = gcnew DateTime();
			time1 = time->Now;
			timer1->Start();
			WindowState = FormWindowState::Minimized;
			Load_screen^ newform = gcnew Load_screen();
			newform->Show();
			int hour = time1->Hour;
			fstream theme_file;
			theme_file.open("state_theme.txt");
			string state_theme;
			theme_file >> state_theme;
			if (hour < 13 && hour >= 6) {
				hello_text->Text = "Доброе утро!";
			}
			else if (hour >= 13 && hour < 17) {
				hello_text->Text = "Добрый день!";
			}
			else if (hour >= 17 && hour < 22) {
				hello_text->Text = "Добрый вечер!";
			}
			else if (state_theme == "true" || state_theme == "truee") {
				hello_text->Text = "Ночью тоже можно работать!";
				hello_text->Location = System::Drawing::Point(215, 15);
				hello_text->Size = System::Drawing::Size(341, 49);
				this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				panel_notes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				button_minimize->ForeColor = System::Drawing::Color::White;
				button_resize->ForeColor = System::Drawing::Color::White;
				button_exit->ForeColor = System::Drawing::Color::White;
				button_hidepanel->BackColor = System::Drawing::Color::Transparent;
				button_restore_hidepanel->ForeColor = System::Drawing::Color::White;
				folder_write_note->BackColor = System::Drawing::Color::DarkSlateBlue;
				folder_write_note->ForeColor = System::Drawing::Color::White;
				button_createnote->BackColor = System::Drawing::Color::DarkSlateBlue;
				listBox_recentnotes->BackColor = System::Drawing::Color::DarkSlateBlue;
				listBox_recentnotes->ForeColor = System::Drawing::Color::White;
				hello_text->ForeColor = System::Drawing::Color::White;
				search_folder->BackColor = System::Drawing::Color::DarkSlateBlue;
				search_icon->BackColor = System::Drawing::Color::DarkSlateBlue;
				panel_instruments->BackColor = System::Drawing::Color::DarkSlateBlue;
				button_restore_hidepanelinstruments->BackColor = System::Drawing::Color::DarkSlateBlue;
				button_restore_hidepanelinstruments->ForeColor = System::Drawing::Color::White;
				button_hidepanelinstruments->BackColor = System::Drawing::Color::DarkSlateBlue;
				dark_mode_flag = true;
			}
			fstream file;
			file.open("file.txt");
			string a;
			file >> a;
			System::String^ s = gcnew System::String(a.c_str());
			listBox_recentnotes->Items->Add(Convert::ToString(s));
			fstream username_file;
			username_file.open("username.txt");
			string get_username;
			while (getline(username_file, get_username)) {
				get_username += " ";
				username_folder->Text += Convert_string_to_String(get_username, username_folder->Text);
			}
			fstream check_start;
			check_start.open("start_checked.txt");
			string search_state;
			check_start >> search_state;
			if (search_state == "true" || search_state == "truee") {
				search_icon->Visible = true;
				search_folder->Visible = true;
			}
			else {
				search_icon->Visible = false;
				search_folder->Visible = false;
			}
			fstream panel_instruments_file;
			panel_instruments_file.open("panel_instruments.txt");
			string state_panel_instruments;
			panel_instruments_file >> state_panel_instruments;
			if (state_panel_instruments == "true" || state_panel_instruments == "truee") {
				panel_instruments->Visible = true;
			}
			else {
				setting_button_offpanelinstruments->Visible = true;
				panel_instruments->Visible = false;
			}
			if (dark_mode_flag == false) {
				if (state_theme == "true" || state_theme == "truee") {
					this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(64)));
					panel_notes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(64)));
					button_minimize->ForeColor = System::Drawing::Color::White;
					button_resize->ForeColor = System::Drawing::Color::White;
					button_exit->ForeColor = System::Drawing::Color::White;
					button_hidepanel->BackColor = System::Drawing::Color::Transparent;
					button_restore_hidepanel->ForeColor = System::Drawing::Color::White;
					folder_write_note->BackColor = System::Drawing::Color::DarkSlateBlue;
					folder_write_note->ForeColor = System::Drawing::Color::White;
					folder_write_note->SelectionColor = System::Drawing::Color::Orange;
					this->folder_write_note->SelectionFont = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					button_createnote->BackColor = System::Drawing::Color::DarkSlateBlue;
					listBox_recentnotes->BackColor = System::Drawing::Color::DarkSlateBlue;
					listBox_recentnotes->ForeColor = System::Drawing::Color::White;
					hello_text->ForeColor = System::Drawing::Color::White;
					search_folder->BackColor = System::Drawing::Color::DarkSlateBlue;
					search_icon->BackColor = System::Drawing::Color::DarkSlateBlue;
					panel_instruments->BackColor = System::Drawing::Color::DarkSlateBlue;
					button_restore_hidepanelinstruments->BackColor = System::Drawing::Color::DarkSlateBlue;
					button_restore_hidepanelinstruments->ForeColor = System::Drawing::Color::White;
					button_hidepanelinstruments->BackColor = System::Drawing::Color::DarkSlateBlue;
					dark_mode_flag = true;
				}
				else {
					this->BackColor = System::Drawing::Color::White;
					button_minimize->ForeColor = System::Drawing::Color::Indigo;
					button_resize->ForeColor = System::Drawing::Color::Indigo;
					button_exit->ForeColor = System::Drawing::Color::Indigo;
					button_hidepanel->BackColor = System::Drawing::Color::Indigo;
					button_restore_hidepanel->ForeColor = System::Drawing::Color::Indigo;
					folder_write_note->BackColor = System::Drawing::Color::White;
					folder_write_note->ForeColor = System::Drawing::Color::Black;
					this->folder_write_note->SelectionFont = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					folder_write_note->SelectionColor = System::Drawing::Color::Indigo;
					button_createnote->BackColor = System::Drawing::Color::Indigo;
					listBox_recentnotes->BackColor = System::Drawing::Color::White;
					listBox_recentnotes->ForeColor = System::Drawing::Color::Indigo;
					panel_notes->BackColor = System::Drawing::Color::Indigo;
					hello_text->ForeColor = System::Drawing::Color::Indigo;
					search_folder->BackColor = System::Drawing::Color::Indigo;
					search_icon->BackColor = System::Drawing::Color::Indigo;
					panel_instruments->BackColor = System::Drawing::Color::Indigo;
					button_restore_hidepanelinstruments->BackColor = System::Drawing::Color::Indigo;
					button_restore_hidepanelinstruments->ForeColor = System::Drawing::Color::White;
					button_hidepanelinstruments->BackColor = System::Drawing::Color::Indigo;
					dark_mode_flag = false;
				}
			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainWindo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_notes;
	private: System::Windows::Forms::Label^ name_app_text;
	private: System::Windows::Forms::Label^ button_exit;
	private: System::Windows::Forms::Label^ button_resize;


	private: System::Windows::Forms::Label^ button_minimize;
	private: System::Windows::Forms::RichTextBox^ folder_write_note;


	private: System::Windows::Forms::Panel^ panel_instruments;
	private: System::Windows::Forms::Label^ hello_text;
	private: System::Windows::Forms::Label^ text_recent;
	private: System::Windows::Forms::ListBox^ listBox_recentnotes;
	private: System::Windows::Forms::Label^ search_icon;
	private: System::Windows::Forms::RichTextBox^ search_folder;

	private: System::Windows::Forms::Label^ button_createnote;
private: System::Windows::Forms::Label^ username_folder;

	private: System::Windows::Forms::Label^ button_hidepanel;
	private: System::Windows::Forms::Label^ button_hidepanelinstruments;
	private: System::Windows::Forms::Label^ darkmode_button;
	private: System::Windows::Forms::Label^ button_saveinpanel;
	private: System::Windows::Forms::Label^ button_settings;
	private: System::Windows::Forms::Label^ button_restore_hidepanelinstruments;
	private: System::Windows::Forms::Label^ button_restore_hidepanel;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
private: System::Windows::Forms::Label^ button_deletenotes;
private: System::Windows::Forms::Label^ button_maximizewindow;


private: System::Windows::Forms::Label^ setting_button_offpanelinstruments;
private: System::Windows::Forms::Timer^ timer1;

private: System::ComponentModel::IContainer^ components;



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel_notes = (gcnew System::Windows::Forms::Panel());
			this->button_hidepanel = (gcnew System::Windows::Forms::Label());
			this->username_folder = (gcnew System::Windows::Forms::Label());
			this->listBox_recentnotes = (gcnew System::Windows::Forms::ListBox());
			this->text_recent = (gcnew System::Windows::Forms::Label());
			this->name_app_text = (gcnew System::Windows::Forms::Label());
			this->button_exit = (gcnew System::Windows::Forms::Label());
			this->button_resize = (gcnew System::Windows::Forms::Label());
			this->button_minimize = (gcnew System::Windows::Forms::Label());
			this->folder_write_note = (gcnew System::Windows::Forms::RichTextBox());
			this->panel_instruments = (gcnew System::Windows::Forms::Panel());
			this->button_maximizewindow = (gcnew System::Windows::Forms::Label());
			this->button_deletenotes = (gcnew System::Windows::Forms::Label());
			this->button_hidepanelinstruments = (gcnew System::Windows::Forms::Label());
			this->darkmode_button = (gcnew System::Windows::Forms::Label());
			this->button_saveinpanel = (gcnew System::Windows::Forms::Label());
			this->button_settings = (gcnew System::Windows::Forms::Label());
			this->hello_text = (gcnew System::Windows::Forms::Label());
			this->search_icon = (gcnew System::Windows::Forms::Label());
			this->search_folder = (gcnew System::Windows::Forms::RichTextBox());
			this->button_createnote = (gcnew System::Windows::Forms::Label());
			this->button_restore_hidepanelinstruments = (gcnew System::Windows::Forms::Label());
			this->button_restore_hidepanel = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->setting_button_offpanelinstruments = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel_notes->SuspendLayout();
			this->panel_instruments->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_notes
			// 
			this->panel_notes->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel_notes->BackColor = System::Drawing::Color::Indigo;
			this->panel_notes->Controls->Add(this->button_hidepanel);
			this->panel_notes->Controls->Add(this->username_folder);
			this->panel_notes->Controls->Add(this->listBox_recentnotes);
			this->panel_notes->Controls->Add(this->text_recent);
			this->panel_notes->Controls->Add(this->name_app_text);
			this->panel_notes->Location = System::Drawing::Point(-2, -2);
			this->panel_notes->Name = L"panel_notes";
			this->panel_notes->Size = System::Drawing::Size(216, 539);
			this->panel_notes->TabIndex = 0;
			// 
			// button_hidepanel
			// 
			this->button_hidepanel->AutoSize = true;
			this->button_hidepanel->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_hidepanel->ForeColor = System::Drawing::Color::White;
			this->button_hidepanel->Location = System::Drawing::Point(180, 11);
			this->button_hidepanel->Name = L"button_hidepanel";
			this->button_hidepanel->Size = System::Drawing::Size(33, 39);
			this->button_hidepanel->TabIndex = 4;
			this->button_hidepanel->Text = L"=";
			this->button_hidepanel->Click += gcnew System::EventHandler(this, &MainWindo::button_hidepanel_Click);
			// 
			// username_folder
			// 
			this->username_folder->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->username_folder->AutoSize = true;
			this->username_folder->ForeColor = System::Drawing::Color::White;
			this->username_folder->Location = System::Drawing::Point(16, 493);
			this->username_folder->Name = L"username_folder";
			this->username_folder->Size = System::Drawing::Size(57, 29);
			this->username_folder->TabIndex = 3;
			this->username_folder->Text = L"User";
			// 
			// listBox_recentnotes
			// 
			this->listBox_recentnotes->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->listBox_recentnotes->BackColor = System::Drawing::Color::White;
			this->listBox_recentnotes->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox_recentnotes->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox_recentnotes->ForeColor = System::Drawing::Color::Indigo;
			this->listBox_recentnotes->FormattingEnabled = true;
			this->listBox_recentnotes->ItemHeight = 24;
			this->listBox_recentnotes->Location = System::Drawing::Point(19, 125);
			this->listBox_recentnotes->Name = L"listBox_recentnotes";
			this->listBox_recentnotes->Size = System::Drawing::Size(179, 240);
			this->listBox_recentnotes->TabIndex = 2;
			this->listBox_recentnotes->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindo::listBox_recentnotes_SelectedIndexChanged);
			// 
			// text_recent
			// 
			this->text_recent->AutoSize = true;
			this->text_recent->ForeColor = System::Drawing::Color::White;
			this->text_recent->Location = System::Drawing::Point(14, 53);
			this->text_recent->Name = L"text_recent";
			this->text_recent->Size = System::Drawing::Size(115, 29);
			this->text_recent->TabIndex = 1;
			this->text_recent->Text = L"Недавние";
			// 
			// name_app_text
			// 
			this->name_app_text->AutoSize = true;
			this->name_app_text->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->name_app_text->ForeColor = System::Drawing::Color::White;
			this->name_app_text->Location = System::Drawing::Point(14, 11);
			this->name_app_text->Name = L"name_app_text";
			this->name_app_text->Size = System::Drawing::Size(89, 39);
			this->name_app_text->TabIndex = 0;
			this->name_app_text->Text = L"Flimn";
			// 
			// button_exit
			// 
			this->button_exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button_exit->AutoSize = true;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->ForeColor = System::Drawing::Color::Indigo;
			this->button_exit->Location = System::Drawing::Point(977, -2);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(27, 35);
			this->button_exit->TabIndex = 1;
			this->button_exit->Text = L"x";
			this->button_exit->Click += gcnew System::EventHandler(this, &MainWindo::button_exit_Click);
			// 
			// button_resize
			// 
			this->button_resize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button_resize->AutoSize = true;
			this->button_resize->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_resize->ForeColor = System::Drawing::Color::Indigo;
			this->button_resize->Location = System::Drawing::Point(950, -1);
			this->button_resize->Name = L"button_resize";
			this->button_resize->Size = System::Drawing::Size(37, 35);
			this->button_resize->TabIndex = 2;
			this->button_resize->Text = L"◳";
			this->button_resize->Click += gcnew System::EventHandler(this, &MainWindo::button_resize_Click);
			this->button_resize->DoubleClick += gcnew System::EventHandler(this, &MainWindo::button_resize_DoubleClick);
			// 
			// button_minimize
			// 
			this->button_minimize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button_minimize->AutoSize = true;
			this->button_minimize->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minimize->ForeColor = System::Drawing::Color::Indigo;
			this->button_minimize->Location = System::Drawing::Point(928, -2);
			this->button_minimize->Name = L"button_minimize";
			this->button_minimize->Size = System::Drawing::Size(24, 35);
			this->button_minimize->TabIndex = 3;
			this->button_minimize->Text = L"-";
			this->button_minimize->Click += gcnew System::EventHandler(this, &MainWindo::button_minimize_Click);
			// 
			// folder_write_note
			// 
			this->folder_write_note->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->folder_write_note->BackColor = System::Drawing::Color::White;
			this->folder_write_note->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->folder_write_note->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->folder_write_note->Location = System::Drawing::Point(240, 71);
			this->folder_write_note->Name = L"folder_write_note";
			this->folder_write_note->Size = System::Drawing::Size(701, 400);
			this->folder_write_note->TabIndex = 4;
			this->folder_write_note->Text = L" Напишите что-нибудь:)";
			this->folder_write_note->Visible = false;
			// 
			// panel_instruments
			// 
			this->panel_instruments->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->panel_instruments->BackColor = System::Drawing::Color::Indigo;
			this->panel_instruments->Controls->Add(this->button_maximizewindow);
			this->panel_instruments->Controls->Add(this->button_deletenotes);
			this->panel_instruments->Controls->Add(this->button_hidepanelinstruments);
			this->panel_instruments->Controls->Add(this->darkmode_button);
			this->panel_instruments->Controls->Add(this->button_saveinpanel);
			this->panel_instruments->Controls->Add(this->button_settings);
			this->panel_instruments->Location = System::Drawing::Point(972, 102);
			this->panel_instruments->Name = L"panel_instruments";
			this->panel_instruments->Size = System::Drawing::Size(32, 343);
			this->panel_instruments->TabIndex = 5;
			// 
			// button_maximizewindow
			// 
			this->button_maximizewindow->AutoSize = true;
			this->button_maximizewindow->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_maximizewindow->ForeColor = System::Drawing::Color::White;
			this->button_maximizewindow->Location = System::Drawing::Point(6, 136);
			this->button_maximizewindow->Name = L"button_maximizewindow";
			this->button_maximizewindow->Size = System::Drawing::Size(37, 35);
			this->button_maximizewindow->TabIndex = 15;
			this->button_maximizewindow->Text = L"⬔";
			this->button_maximizewindow->Click += gcnew System::EventHandler(this, &MainWindo::button_maximizewindow_Click);
			this->button_maximizewindow->DoubleClick += gcnew System::EventHandler(this, &MainWindo::button_maximizewindow_DoubleClick);
			// 
			// button_deletenotes
			// 
			this->button_deletenotes->AutoSize = true;
			this->button_deletenotes->ForeColor = System::Drawing::Color::White;
			this->button_deletenotes->Location = System::Drawing::Point(3, 107);
			this->button_deletenotes->Name = L"button_deletenotes";
			this->button_deletenotes->Size = System::Drawing::Size(39, 29);
			this->button_deletenotes->TabIndex = 14;
			this->button_deletenotes->Text = L"🗑";
			// 
			// button_hidepanelinstruments
			// 
			this->button_hidepanelinstruments->AutoSize = true;
			this->button_hidepanelinstruments->BackColor = System::Drawing::Color::Indigo;
			this->button_hidepanelinstruments->ForeColor = System::Drawing::Color::White;
			this->button_hidepanelinstruments->Location = System::Drawing::Point(5, 314);
			this->button_hidepanelinstruments->Name = L"button_hidepanelinstruments";
			this->button_hidepanelinstruments->Size = System::Drawing::Size(26, 29);
			this->button_hidepanelinstruments->TabIndex = 10;
			this->button_hidepanelinstruments->Text = L"o";
			this->button_hidepanelinstruments->Click += gcnew System::EventHandler(this, &MainWindo::button_hidepanelinstruments_Click);
			// 
			// darkmode_button
			// 
			this->darkmode_button->AutoSize = true;
			this->darkmode_button->ForeColor = System::Drawing::Color::White;
			this->darkmode_button->Location = System::Drawing::Point(2, 71);
			this->darkmode_button->Name = L"darkmode_button";
			this->darkmode_button->Size = System::Drawing::Size(39, 29);
			this->darkmode_button->TabIndex = 11;
			this->darkmode_button->Text = L"🌙";
			this->darkmode_button->Click += gcnew System::EventHandler(this, &MainWindo::darkmode_button_Click);
			this->darkmode_button->DoubleClick += gcnew System::EventHandler(this, &MainWindo::darkmode_button_DoubleClick);
			// 
			// button_saveinpanel
			// 
			this->button_saveinpanel->AutoSize = true;
			this->button_saveinpanel->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_saveinpanel->ForeColor = System::Drawing::Color::White;
			this->button_saveinpanel->Location = System::Drawing::Point(4, 38);
			this->button_saveinpanel->Name = L"button_saveinpanel";
			this->button_saveinpanel->Size = System::Drawing::Size(37, 35);
			this->button_saveinpanel->TabIndex = 10;
			this->button_saveinpanel->Text = L"🖫";
			this->button_saveinpanel->Click += gcnew System::EventHandler(this, &MainWindo::button_saveinpanel_Click);
			// 
			// button_settings
			// 
			this->button_settings->AutoSize = true;
			this->button_settings->ForeColor = System::Drawing::Color::White;
			this->button_settings->Location = System::Drawing::Point(2, 9);
			this->button_settings->Name = L"button_settings";
			this->button_settings->Size = System::Drawing::Size(39, 29);
			this->button_settings->TabIndex = 0;
			this->button_settings->Text = L"⚙";
			this->button_settings->Click += gcnew System::EventHandler(this, &MainWindo::button_settings_Click);
			// 
			// hello_text
			// 
			this->hello_text->AutoSize = true;
			this->hello_text->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->hello_text->ForeColor = System::Drawing::Color::Indigo;
			this->hello_text->Location = System::Drawing::Point(244, 3);
			this->hello_text->Name = L"hello_text";
			this->hello_text->Size = System::Drawing::Size(249, 35);
			this->hello_text->TabIndex = 6;
			this->hello_text->Text = L"Добро пожаловать!";
			// 
			// search_icon
			// 
			this->search_icon->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->search_icon->BackColor = System::Drawing::Color::Indigo;
			this->search_icon->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->search_icon->ForeColor = System::Drawing::Color::White;
			this->search_icon->Location = System::Drawing::Point(583, 4);
			this->search_icon->Name = L"search_icon";
			this->search_icon->Size = System::Drawing::Size(26, 19);
			this->search_icon->TabIndex = 7;
			this->search_icon->Text = L"🔎";
			this->search_icon->Click += gcnew System::EventHandler(this, &MainWindo::search_icon_Click);
			this->search_icon->DoubleClick += gcnew System::EventHandler(this, &MainWindo::search_icon_DoubleClick);
			// 
			// search_folder
			// 
			this->search_folder->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->search_folder->BackColor = System::Drawing::Color::Indigo;
			this->search_folder->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->search_folder->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->search_folder->ForeColor = System::Drawing::Color::White;
			this->search_folder->Location = System::Drawing::Point(609, 4);
			this->search_folder->Name = L"search_folder";
			this->search_folder->Size = System::Drawing::Size(296, 19);
			this->search_folder->TabIndex = 8;
			this->search_folder->Text = L"";
			this->search_folder->DoubleClick += gcnew System::EventHandler(this, &MainWindo::search_folder_DoubleClick);
			this->search_folder->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainWindo::Enter);
			// 
			// button_createnote
			// 
			this->button_createnote->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button_createnote->BackColor = System::Drawing::Color::Indigo;
			this->button_createnote->ForeColor = System::Drawing::Color::White;
			this->button_createnote->Location = System::Drawing::Point(556, 491);
			this->button_createnote->Name = L"button_createnote";
			this->button_createnote->Size = System::Drawing::Size(142, 29);
			this->button_createnote->TabIndex = 9;
			this->button_createnote->Text = L"+Создайте заметку";
			this->button_createnote->Click += gcnew System::EventHandler(this, &MainWindo::button_createnote_Click);
			// 
			// button_restore_hidepanelinstruments
			// 
			this->button_restore_hidepanelinstruments->BackColor = System::Drawing::Color::Indigo;
			this->button_restore_hidepanelinstruments->ForeColor = System::Drawing::Color::White;
			this->button_restore_hidepanelinstruments->Location = System::Drawing::Point(942, 416);
			this->button_restore_hidepanelinstruments->Name = L"button_restore_hidepanelinstruments";
			this->button_restore_hidepanelinstruments->Size = System::Drawing::Size(26, 29);
			this->button_restore_hidepanelinstruments->TabIndex = 12;
			this->button_restore_hidepanelinstruments->Text = L"o";
			this->button_restore_hidepanelinstruments->Visible = false;
			this->button_restore_hidepanelinstruments->Click += gcnew System::EventHandler(this, &MainWindo::button_restore_hidepanelinstruments_Click);
			// 
			// button_restore_hidepanel
			// 
			this->button_restore_hidepanel->AutoSize = true;
			this->button_restore_hidepanel->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_restore_hidepanel->ForeColor = System::Drawing::Color::Indigo;
			this->button_restore_hidepanel->Location = System::Drawing::Point(217, 9);
			this->button_restore_hidepanel->Name = L"button_restore_hidepanel";
			this->button_restore_hidepanel->Size = System::Drawing::Size(33, 39);
			this->button_restore_hidepanel->TabIndex = 13;
			this->button_restore_hidepanel->Text = L"=";
			this->button_restore_hidepanel->Visible = false;
			this->button_restore_hidepanel->Click += gcnew System::EventHandler(this, &MainWindo::button_restore_hidepanel_Click);
			// 
			// setting_button_offpanelinstruments
			// 
			this->setting_button_offpanelinstruments->AutoSize = true;
			this->setting_button_offpanelinstruments->BackColor = System::Drawing::Color::Indigo;
			this->setting_button_offpanelinstruments->ForeColor = System::Drawing::Color::White;
			this->setting_button_offpanelinstruments->Location = System::Drawing::Point(974, 70);
			this->setting_button_offpanelinstruments->Name = L"setting_button_offpanelinstruments";
			this->setting_button_offpanelinstruments->Size = System::Drawing::Size(39, 29);
			this->setting_button_offpanelinstruments->TabIndex = 16;
			this->setting_button_offpanelinstruments->Text = L"⚙";
			this->setting_button_offpanelinstruments->Visible = false;
			this->setting_button_offpanelinstruments->Click += gcnew System::EventHandler(this, &MainWindo::setting_button_offpanelinstruments_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 8000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MainWindo::timer1_Tick);
			// 
			// MainWindo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1000, 529);
			this->ControlBox = false;
			this->Controls->Add(this->setting_button_offpanelinstruments);
			this->Controls->Add(this->button_restore_hidepanel);
			this->Controls->Add(this->button_restore_hidepanelinstruments);
			this->Controls->Add(this->button_createnote);
			this->Controls->Add(this->search_folder);
			this->Controls->Add(this->search_icon);
			this->Controls->Add(this->hello_text);
			this->Controls->Add(this->panel_instruments);
			this->Controls->Add(this->folder_write_note);
			this->Controls->Add(this->button_minimize);
			this->Controls->Add(this->button_resize);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->panel_notes);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1800, 900);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(600, 430);
			this->Name = L"MainWindo";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->panel_notes->ResumeLayout(false);
			this->panel_notes->PerformLayout();
			this->panel_instruments->ResumeLayout(false);
			this->panel_instruments->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool dark_mode_flag = false;
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
				  private: System::Void button_minimize_Click(System::Object^ sender, System::EventArgs^ e) {
					  WindowState = FormWindowState::Minimized;
				  }
private: System::Void button_resize_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Height = 350;
	this->Width = 550;
}
	   private: System::Void button_resize_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		   this->Height = 600;
		   this->Width = 1000;
	   }
private: System::Void button_hidepanel_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_notes->Visible = false;
	button_restore_hidepanel->Visible = true;
	button_restore_hidepanel->Location = System::Drawing::Point(3, 10);
	folder_write_note->Location = System::Drawing::Point(10, 53);
	hello_text->Location = System::Drawing::Point(43, 12);
	button_createnote->Location = System::Drawing::Point(439, 487);
}
private: System::Void button_restore_hidepanel_Click(System::Object^ sender, System::EventArgs^ e) {
	button_restore_hidepanel->Visible = false;
	panel_notes->Visible = true;
	folder_write_note->Location = System::Drawing::Point(240, 71);
	if (hello_text->Text->Equals("Ночью тоже можно работать!")) {
		hello_text->Location = System::Drawing::Point(215, 2);
	}
	else {
		hello_text->Location = System::Drawing::Point(237, 5);
	}
	button_createnote->Location = System::Drawing::Point(513, 487);
}
private: System::Void darkmode_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	panel_notes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	button_minimize->ForeColor = System::Drawing::Color::White;
	button_resize->ForeColor = System::Drawing::Color::White;
	button_exit->ForeColor = System::Drawing::Color::White;
	button_hidepanel->BackColor = System::Drawing::Color::Transparent;
	button_restore_hidepanel->ForeColor = System::Drawing::Color::White;
	folder_write_note->BackColor = System::Drawing::Color::DarkSlateBlue;
	folder_write_note->ForeColor = System::Drawing::Color::White;
	folder_write_note->SelectionColor = System::Drawing::Color::Orange;
	this->folder_write_note->SelectionFont = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	button_createnote->BackColor = System::Drawing::Color::DarkSlateBlue;
	listBox_recentnotes->BackColor = System::Drawing::Color::DarkSlateBlue;
	listBox_recentnotes->ForeColor = System::Drawing::Color::White;
	hello_text->ForeColor = System::Drawing::Color::White;
	search_folder->BackColor = System::Drawing::Color::DarkSlateBlue;
	search_icon->BackColor = System::Drawing::Color::DarkSlateBlue;
	panel_instruments->BackColor = System::Drawing::Color::DarkSlateBlue;
	button_restore_hidepanelinstruments->BackColor = System::Drawing::Color::DarkSlateBlue;
	button_restore_hidepanelinstruments->ForeColor = System::Drawing::Color::White;
	button_hidepanelinstruments->BackColor = System::Drawing::Color::DarkSlateBlue;
	setting_button_offpanelinstruments->BackColor = System::Drawing::Color::DarkSlateBlue;
	dark_mode_flag = true;
}
	   private: System::Void darkmode_button_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		   this->BackColor = System::Drawing::Color::White;
		   button_minimize->ForeColor = System::Drawing::Color::Indigo;
		   button_resize->ForeColor = System::Drawing::Color::Indigo;
		   button_exit->ForeColor = System::Drawing::Color::Indigo;
		   button_hidepanel->BackColor = System::Drawing::Color::Indigo;
		   button_restore_hidepanel->ForeColor = System::Drawing::Color::Indigo;
		   folder_write_note->BackColor = System::Drawing::Color::White;
		   folder_write_note->ForeColor = System::Drawing::Color::Black;
		   this->folder_write_note->SelectionFont = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			   static_cast<System::Byte>(204)));
		   folder_write_note->SelectionColor = System::Drawing::Color::Indigo;
		   button_createnote->BackColor = System::Drawing::Color::Indigo;
		   listBox_recentnotes->BackColor = System::Drawing::Color::White;
		   listBox_recentnotes->ForeColor = System::Drawing::Color::Indigo;
		   panel_notes->BackColor = System::Drawing::Color::Indigo;
		   hello_text->ForeColor = System::Drawing::Color::Indigo;
		   search_folder->BackColor = System::Drawing::Color::Indigo;
		   search_icon->BackColor = System::Drawing::Color::Indigo;
		   panel_instruments->BackColor = System::Drawing::Color::Indigo;
		   button_restore_hidepanelinstruments->BackColor = System::Drawing::Color::Indigo;
		   button_restore_hidepanelinstruments->ForeColor = System::Drawing::Color::White;
		   button_hidepanelinstruments->BackColor = System::Drawing::Color::Indigo;
		   setting_button_offpanelinstruments->BackColor = System::Drawing::Color::Indigo;
		   dark_mode_flag = false;
	   }
private: System::Void listBox_recentnotes_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	/*for (int i = listBox_recentnotes->Items->Count - 1; i >= 0; i--)*/
	folder_write_note->Text = System::Convert::ToString(listBox_recentnotes->SelectedItem);
	/*listBox_recentnotes->Items->Remove(listBox_recentnotes->SelectedItem);*/
	folder_write_note->Visible = true;
}
	   int count = 0;
private: System::Void button_createnote_Click(System::Object^ sender, System::EventArgs^ e) {
	folder_write_note->Visible = true;
	count++;
	if (count >= 2) {
		folder_write_note->Clear();
	}
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
private: System::Void button_saveinpanel_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("save");
	fstream file;
	string note1;
	Convert_String_to_string(folder_write_note->Text->ToString(), note1);
	file.open("file.txt");
	if (file.is_open()) {
		/*const char* text1 = (const char*)(Marshal::StringToHGlobalAnsi(textBox1->Text)).ToPointer();
		string sIn(char);*/
		/*String^ text1 = textBox1->Text;*/
		/*int a = Convert::ToInt32(textBox1->Text);
		file << a;*/
		file << note1;
		listBox_recentnotes->Items->Remove(listBox_recentnotes->SelectedItem);
		System::String^ s_list = gcnew System::String(note1.c_str());
		listBox_recentnotes->Items->Add(Convert::ToString(s_list));
		file.close();
	}
	else folder_write_note->Text = "do not find";
}
private: System::Void search_folder_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	colorDialog1->AllowFullOpen = true;
	colorDialog1->ShowDialog();
	search_folder->BackColor = colorDialog1->Color;
	/*colorDialog1->CustomColors;*/
}
private: System::Void search_icon_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	colorDialog1->AllowFullOpen = true;
	colorDialog1->ShowDialog();
	search_icon->BackColor = colorDialog1->Color;
	/*colorDialog1->CustomColors;*/
}
private: System::Void search_icon_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dark_mode_flag == true) {
		folder_write_note->SelectionColor = System::Drawing::Color::White;
	}
	else {
		folder_write_note->SelectionColor = System::Drawing::Color::Black;
	}
	if (folder_write_note->Visible == false) {
		MessageBox::Show("Заметка не открыта, чтобы осуществить поиск :(");
	}
	else {
		string search;
		Convert_String_to_string(search_folder->Text, search);
		int index = 0;
		while (index < folder_write_note->Text->LastIndexOf(search_folder->Text)) {
			folder_write_note->Find(search_folder->Text, index, folder_write_note->TextLength, RichTextBoxFinds::None);
			if (dark_mode_flag == true) {
				folder_write_note->SelectionColor = System::Drawing::Color::Orange;
				this->folder_write_note->SelectionFont = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
			}
			else {
				folder_write_note->SelectionColor = System::Drawing::Color::Indigo;
				this->folder_write_note->SelectionFont = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
			}
			index = folder_write_note->Text->IndexOf(search_folder->Text, index) + 1;
		}
	}
	if (dark_mode_flag == false) {
		if (folder_write_note->SelectionColor == System::Drawing::Color::Black) {
			folder_write_note->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			MessageBox::Show("Не удалось найти данные из поиска:(");
		}
	}
	else {
		if (folder_write_note->SelectionColor == System::Drawing::Color::White) {
			folder_write_note->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			MessageBox::Show("Не удалось найти данные из поиска:(");
		}
	}
}
private: System::Void Enter(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys(13)) {
		search_icon_Click(sender, e);
	}
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox_recentnotes->Items->Remove(listBox_recentnotes->SelectedItem);
}
private: System::Void button_hidepanelinstruments_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_instruments->Visible = false;
	button_restore_hidepanelinstruments->Visible = true;
	button_restore_hidepanelinstruments->Location = System::Drawing::Point(977, 416);
	button_restore_hidepanelinstruments->ForeColor = System::Drawing::Color::White;
	button_restore_hidepanelinstruments->Size = System::Drawing::Size(22, 22);
}
private: System::Void button_restore_hidepanelinstruments_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_instruments->Visible = true;
	button_restore_hidepanelinstruments->Visible = false;
	button_restore_hidepanelinstruments->Location = System::Drawing::Point(680, 400);
}
private: System::Void button_maximizewindow_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Height = 800;
	this->Width = 1750;
	this->Location = System::Drawing::Point(0, 0);
}
	   private: System::Void button_maximizewindow_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		   this->Height = 500;
		   this->Width = 800;
		   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		   this->Location = System::Drawing::Point(175, 175);
		   //куда сохраниться?
	   }
private: System::Void button_settings_Click(System::Object^ sender, System::EventArgs^ e) {
	Settings_win^ setting_form = gcnew Settings_win();
	setting_form->Show();
}
private: System::Void setting_button_offpanelinstruments_Click(System::Object^ sender, System::EventArgs^ e) {
	Settings_win^ setting_form = gcnew Settings_win();
	setting_form->Show();
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	WindowState = FormWindowState::Normal;
	/*this->Height = 600;
	this->Width = 1400;*/
	timer1->Stop();
	}
};
}