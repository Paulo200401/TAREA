#pragma once
#include "pch.h"
#include "UICREATE.h"
#include <string>
using namespace System;
using namespace INTERFAZMODEL;
using namespace INTERFAZCONTROLLER;
using namespace System::Collections::Generic;
//Viva Kanye West

namespace INTERFAZ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for UI
	/// </summary>
	public ref class UI : public System::Windows::Forms::Form
	{
	public:
		UI(void)
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
		~UI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_usuario;
	private: System::Windows::Forms::TextBox^ txt_contrasena;


	private: System::Windows::Forms::PictureBox^ pictureBox1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UI::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_usuario = (gcnew System::Windows::Forms::TextBox());
			this->txt_contrasena = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(46, 287);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UI::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(172, 287);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 44);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Crear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UI::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(51, 110);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 164);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Contraseña";
			// 
			// txt_usuario
			// 
			this->txt_usuario->Location = System::Drawing::Point(144, 110);
			this->txt_usuario->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_usuario->Name = L"txt_usuario";
			this->txt_usuario->Size = System::Drawing::Size(122, 20);
			this->txt_usuario->TabIndex = 4;
			// 
			// txt_contrasena
			// 
			this->txt_contrasena->Location = System::Drawing::Point(144, 170);
			this->txt_contrasena->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_contrasena->Name = L"txt_contrasena";
			this->txt_contrasena->Size = System::Drawing::Size(122, 20);
			this->txt_contrasena->TabIndex = 5;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(300, 36);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(227, 239);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			//this->pictureBox1->Click += gcnew System::EventHandler(this, &UI::pictureBox1_Click);
			// 
			// UI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(548, 348);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txt_contrasena);
			this->Controls->Add(this->txt_usuario);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"UI";
			this->Text = L"UI";
			this->Load += gcnew System::EventHandler(this, &UI::UI_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UI_Load(System::Object^ sender, System::EventArgs^ e) {
		List<User^>^ listuser = gcnew List<User^>();
		listuser = Controller::GetUser();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int i;
		int j = 0;
		List<User^>^ listuser = gcnew List<User^>();
		listuser = Controller::GetUser();
		int number = listuser->Count - 1;

		for (i = 0; i <= number; i++) {
			if (((txt_usuario->Text) == (listuser[number]->user)) && ((txt_contrasena->Text) == (listuser[number]->password))) {
				MessageBox::Show("Bienvenido " + listuser[number]->name);
				j = 1;
				break;
			}
		}
		if (j == 0) {
			MessageBox::Show("Incorrecto");
		}
	}
	public: static string toStandardString(System::String^ string)
	{
		using System::Runtime::InteropServices::Marshal;
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string returnString(charPointer, string->Length);
		Marshal::FreeHGlobal(pointer);
		return returnString;

	}

	private: static String^ toSystemString(string str) {
		return gcnew String(str.c_str());
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	UICREATE^ UIForm = gcnew UICREATE();
	UIForm->Show();
}
};
}
