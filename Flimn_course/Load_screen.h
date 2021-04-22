#pragma once
#include <iostream>
#include <random>
#include <time.h>
namespace Flimncourse {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Сводка для Load_screen
	/// </summary>
	public ref class Load_screen : public System::Windows::Forms::Form
	{
	public:

		Load_screen(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->Location = System::Drawing::Point(300, 300);
			string advice;
			srand(time(NULL));
			int key_advice = 1 + rand() % 11;
			if (key_advice == 1) {
				label2->Text = "Совет: Хотите изменить тему приложения? Вы можете это сделать на панели инструментов или в настройках";
			}
			if (key_advice == 2) {
				label2->Text = "Совет: Вы можете настроить множество параметров элементов интерфейса в Flimn в настройках (например, выключить поиск)";
			}
			if (key_advice == 3) {
				label2->Text = "Совет: Хотите быстрее искать информацию? После ввода данных нажмите Enter, после чего начнется поиск";
			}
			if (key_advice == 4) {
				label2->Text = "Совет: Flimn всегда будет знать как вас поприветствовать. Просто зайдите в приложение и Flimn сделает это";
			}
			if (key_advice == 5) {
				label2->Text = "Совет: Экспериментируйте вместе с Flimn: многие кнопки или будь то другие элементы интерфейса имеют множество функций (раскрывайте их потенциал, используя, например, клик или двойной клик)";
			}
			if (key_advice == 6) {
				label2->Text = "Совет: Если у Вас не получается найти нужную информацию, попробуйте задать поиску правильный регистр";
			}
			if (key_advice == 7) {
				label2->Text = "Совет: В Flimn продуманная система заметок. У вас не получится искать что-либо в заметках, если они не открыты";
			}
			if (key_advice == 8) {
				label2->Text = "Совет: Панель недавних заметок расположена в левой части приложения. Панель отображает все созданные или редактированные заметки в относительно недавнее время";
			}
			if (key_advice == 9) {
				label2->Text = "Совет: Хотите удалить заметку? Нажмите кнопку корзины в панели инструментов";
			}
			if (key_advice == 10) {
				label2->Text = "Совет: Хотите получить более подробную информацию о Flimn? Вы можете получить ее, нажав вопрос на панеле инструментов или Справка в найстройках Flimn";
			}
			if (key_advice == 11) {
				label2->Text = "Совет: В Flimn изменения, сделанные в найстроках, вступят в силу после перезагрузки приложения. Вы можете быстро выйти из приложения или непосредственно перезагрузить Flimn прямо из настроек";
			}
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
	private: System::Windows::Forms::Timer^ timer1;
	protected:
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Label^ label5;




	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Load_screen::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Load_screen::timer1_Tick);
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::Color::Indigo;
			this->progressBar1->ForeColor = System::Drawing::Color::Salmon;
			this->progressBar1->Location = System::Drawing::Point(18, 47);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(404, 6);
			this->progressBar1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(212)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(192, 35);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Загрузка Flimn";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(212)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->label2->Location = System::Drawing::Point(559, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(491, 185);
			this->label2->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(212)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->label3->Location = System::Drawing::Point(848, 391);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(212, 34);
			this->label3->TabIndex = 3;
			this->label3->Text = L"InnoSoftware 2021";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(212)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->label4->Location = System::Drawing::Point(922, 439);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 34);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Build 0.3.1";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::White;
			this->flowLayoutPanel1->Location = System::Drawing::Point(82, 121);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(601, 3);
			this->flowLayoutPanel1->TabIndex = 5;
			this->flowLayoutPanel1->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-4, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1054, 764);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &Load_screen::timer2_Tick);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(212)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->label5->Location = System::Drawing::Point(14, 72);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(441, 34);
			this->label5->TabIndex = 7;
			// 
			// Load_screen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1049, 763);
			this->ControlBox = false;
			this->Controls->Add(this->label5);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"Load_screen";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Load_screen";
			this->Load += gcnew System::EventHandler(this, &Load_screen::Load_screen_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Increment(2);
		if (progressBar1->Value == 100) {
			timer1->Stop();
			this->Visible = false;
		}
	}
	private: System::Void Load_screen_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
		timer2->Start();
	}
		   int key_loadprocess = 0;
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (key_loadprocess == 0) {
			label5->Text = "Подготавливаем файлы";
		}
		if (key_loadprocess == 1) {
			label5->Text = "Обрабатываем файлы конфигурации";
		}
		if (key_loadprocess == 2) {
			label5->Text = "Собираем приложение";
		}
		if (key_loadprocess == 3) {
			label5->Text = "Почти готово! Мы уже летим прямо к финишу";
		}
		if (key_loadprocess == 4) {
			label5->Text = "Все готово! Мы готовы к запуску!";
		}
		key_loadprocess++;
	}
};
}
