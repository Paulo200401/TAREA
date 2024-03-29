#pragma once
#include "pch.h"
using namespace System;
using namespace	INTERFAZMODEL;
using namespace INTERFAZCONTROLLER;
using namespace System::Collections::Generic;

namespace INTERFAZ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UICREATE
	/// </summary>
	public ref class UICREATE : public System::Windows::Forms::Form
	{
	public:
		UICREATE(void)
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
		~UICREATE()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ confirmacion;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->confirmacion = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			this->label1->Click += gcnew System::EventHandler(this, &UICREATE::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(205, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Usuario:";
			this->label2->Click += gcnew System::EventHandler(this, &UICREATE::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(205, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Contraseņa:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(27, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(208, 43);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(208, 120);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(121, 210);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 37);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Crear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UICREATE::button1_Click);
			// 
			// confirmacion
			// 
			this->confirmacion->AutoSize = true;
			this->confirmacion->Location = System::Drawing::Point(205, 185);
			this->confirmacion->Name = L"confirmacion";
			this->confirmacion->Size = System::Drawing::Size(67, 13);
			this->confirmacion->TabIndex = 7;
			this->confirmacion->Text = L"";
			// 
			// UICREATE
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(347, 272);
			this->Controls->Add(this->confirmacion);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"UICREATE";
			this->Text = L"UICREATE";
			this->Load += gcnew System::EventHandler(this, &UICREATE::UICREATE_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UICREATE_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//CREAR CLASE
		List<User^>^ listuser = gcnew List<User^>();
		User^ user = gcnew User();
		user->name = textBox1->Text;
		user->user = textBox2->Text;
		user->password = textBox3->Text;
		Controller::AddUser(user);
		listuser = Controller::GetUser();
		this->confirmacion->Text = L"Usuario creado";
	}
};
}