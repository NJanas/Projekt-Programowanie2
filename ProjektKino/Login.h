#pragma once
#include "Globals.h"


namespace ProjektKino {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Globals;
	using namespace System::IO;

	/// <summary>
	/// Podsumowanie informacji o Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  butZaloguj;
	private: System::Windows::Forms::TextBox^  txtLogin;
	private: System::Windows::Forms::TextBox^  txtPassword;
	private: System::Windows::Forms::Label^  lblLogin;
	private: System::Windows::Forms::Label^  lblPassword;
	private: System::Windows::Forms::Button^  butRejestr;
	private: System::Windows::Forms::Label^  lblLoginInfo;
			 /// <summary>
			 /// Wymagana zmienna projektanta.
			 /// </summary>
			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
			 /// jej zawartoœci w edytorze kodu.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->butZaloguj = (gcnew System::Windows::Forms::Button());
				 this->txtLogin = (gcnew System::Windows::Forms::TextBox());
				 this->txtPassword = (gcnew System::Windows::Forms::TextBox());
				 this->lblLogin = (gcnew System::Windows::Forms::Label());
				 this->lblPassword = (gcnew System::Windows::Forms::Label());
				 this->butRejestr = (gcnew System::Windows::Forms::Button());
				 this->lblLoginInfo = (gcnew System::Windows::Forms::Label());
				 this->SuspendLayout();
				 // 
				 // butZaloguj
				 // 
				 this->butZaloguj->BackColor = System::Drawing::Color::PaleGoldenrod;
				 this->butZaloguj->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->butZaloguj->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->butZaloguj->Location = System::Drawing::Point(43, 128);
				 this->butZaloguj->Name = L"butZaloguj";
				 this->butZaloguj->Size = System::Drawing::Size(107, 26);
				 this->butZaloguj->TabIndex = 0;
				 this->butZaloguj->Text = L"Zaloguj";
				 this->butZaloguj->UseVisualStyleBackColor = false;
				 this->butZaloguj->Click += gcnew System::EventHandler(this, &Login::butZaloguj_Click);
				 // 
				 // txtLogin
				 // 
				 this->txtLogin->Anchor = System::Windows::Forms::AnchorStyles::Top;
				 this->txtLogin->Location = System::Drawing::Point(118, 23);
				 this->txtLogin->MaxLength = 15;
				 this->txtLogin->Name = L"txtLogin";
				 this->txtLogin->Size = System::Drawing::Size(122, 20);
				 this->txtLogin->TabIndex = 1;
				 // 
				 // txtPassword
				 // 
				 this->txtPassword->Location = System::Drawing::Point(119, 69);
				 this->txtPassword->MaxLength = 15;
				 this->txtPassword->Name = L"txtPassword";
				 this->txtPassword->PasswordChar = '*';
				 this->txtPassword->Size = System::Drawing::Size(122, 20);
				 this->txtPassword->TabIndex = 2;
				 // 
				 // lblLogin
				 // 
				 this->lblLogin->AutoSize = true;
				 this->lblLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->lblLogin->Location = System::Drawing::Point(71, 24);
				 this->lblLogin->Name = L"lblLogin";
				 this->lblLogin->Size = System::Drawing::Size(41, 15);
				 this->lblLogin->TabIndex = 3;
				 this->lblLogin->Text = L"Login:";
				 // 
				 // lblPassword
				 // 
				 this->lblPassword->AutoSize = true;
				 this->lblPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->lblPassword->Location = System::Drawing::Point(70, 70);
				 this->lblPassword->Name = L"lblPassword";
				 this->lblPassword->Size = System::Drawing::Size(42, 15);
				 this->lblPassword->TabIndex = 4;
				 this->lblPassword->Text = L"Has³o:";
				 // 
				 // butRejestr
				 // 
				 this->butRejestr->BackColor = System::Drawing::Color::PaleGoldenrod;
				 this->butRejestr->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->butRejestr->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->butRejestr->Location = System::Drawing::Point(186, 128);
				 this->butRejestr->Name = L"butRejestr";
				 this->butRejestr->Size = System::Drawing::Size(107, 26);
				 this->butRejestr->TabIndex = 5;
				 this->butRejestr->Text = L"Zarejestruj";
				 this->butRejestr->UseVisualStyleBackColor = false;
				 this->butRejestr->Click += gcnew System::EventHandler(this, &Login::butRejestr_Click);
				 // 
				 // lblLoginInfo
				 // 
				 this->lblLoginInfo->AutoSize = true;
				 this->lblLoginInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->lblLoginInfo->ForeColor = System::Drawing::Color::Red;
				 this->lblLoginInfo->Location = System::Drawing::Point(115, 101);
				 this->lblLoginInfo->Name = L"lblLoginInfo";
				 this->lblLoginInfo->Size = System::Drawing::Size(137, 15);
				 this->lblLoginInfo->TabIndex = 10;
				 this->lblLoginInfo->Text = L"B³êdne dane logowania";
				 this->lblLoginInfo->Visible = false;
				 // 
				 // Login
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::Silver;
				 this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
				 this->ClientSize = System::Drawing::Size(336, 174);
				 this->Controls->Add(this->lblLoginInfo);
				 this->Controls->Add(this->butRejestr);
				 this->Controls->Add(this->lblPassword);
				 this->Controls->Add(this->lblLogin);
				 this->Controls->Add(this->txtPassword);
				 this->Controls->Add(this->txtLogin);
				 this->Controls->Add(this->butZaloguj);
				 this->Cursor = System::Windows::Forms::Cursors::Arrow;
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				 this->HelpButton = true;
				 this->MaximizeBox = false;
				 this->Name = L"Login";
				 this->ShowIcon = false;
				 this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
				 this->Text = L"Logowanie";
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }

	private: String^ pathToDir = "Data\\Accounts\\Accounts.txt";


#pragma endregion



	private: System::Void butZaloguj_Click(System::Object^  sender, System::EventArgs^  e)
	{
		StreamReader^ reader = gcnew StreamReader(pathToDir, System::Text::Encoding::Default);
		String^ text;
		String^ buffer = txtLogin->Text + " " + txtPassword->Text;

		while (text = reader->ReadLine()) {

			if (buffer == text) {
				LoginUser();
			}

		}
		reader->Close();

		lblLoginInfo->Text = "B³êdne dane logowanie";
		lblLoginInfo->Visible = true;

	}

	private: System::Void butRejestr_Click(System::Object^  sender, System::EventArgs^  e) {


		StreamReader^ reader = gcnew StreamReader(pathToDir);
		String^ loginCheck;
		bool notFound = true;

		if (CheckSymbolsOfInput(txtLogin->Text, txtPassword->Text)) {

			String^ buffer = txtLogin->Text + " " + txtPassword->Text;

			while (loginCheck = reader->ReadLine()) { // szuka czy nie ma w pliku powtórki loginu

				loginCheck = loginCheck->Substring(0, loginCheck->IndexOf(" "));

				if (loginCheck == txtLogin->Text) {

					lblLoginInfo->Text = "Taki login ju¿ istnieje";
					notFound = false;
					break;
				}

			}

			reader->Close();

			if (notFound) {

				StreamWriter^ writer = gcnew StreamWriter(pathToDir, true);
				writer->WriteLine(buffer);
				LoginUser();
				writer->Close();

			}

		}

		reader->Close();
		lblLoginInfo->Visible = true;

	}
			 //
			 //
			 // funkcje ni¿ej
			 //
			 //
	private: void LoginUser() {

		GlobalClass::userLogin = txtLogin->Text;
		this->Close();

	}

	private: bool CheckSymbolsOfInput(String^ login, String^ password) {

		if (login->Length > 0 && password->Length > 0) {

			for (int i = 0; i < login->Length; i++) {

				if (!(login[i] >= 48 && login[i] <= 57 || login[i] >= 65 && login[i] <= 90 || login[i] >= 97 && login[i] <= 122)) {

					lblLoginInfo->Text = "B³êdne dane rejestracji";
					return false;
				}

			}


			for (int i = 0; i < password->Length; i++) {

				if (!(password[i] >= 48 && password[i] <= 57 || password[i] >= 65 && password[i] <= 90 || password[i] >= 97 && password[i] <= 122)) {

					lblLoginInfo->Text = "B³êdne dane rejestracji";
					return false;
				}

			}

			return true;

		}

		lblLoginInfo->Text = "B³êdne dane rejestracji";
		return false;
	}

	};
}
