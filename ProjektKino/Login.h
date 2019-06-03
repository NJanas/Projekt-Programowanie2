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





	protected:

	protected:

	private:
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
			this->butZaloguj->Location = System::Drawing::Point(57, 158);
			this->butZaloguj->Margin = System::Windows::Forms::Padding(4);
			this->butZaloguj->Name = L"butZaloguj";
			this->butZaloguj->Size = System::Drawing::Size(143, 32);
			this->butZaloguj->TabIndex = 0;
			this->butZaloguj->Text = L"Zaloguj";
			this->butZaloguj->UseVisualStyleBackColor = true;
			this->butZaloguj->Click += gcnew System::EventHandler(this, &Login::butZaloguj_Click);
			// 
			// txtLogin
			// 
			this->txtLogin->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->txtLogin->Location = System::Drawing::Point(161, 30);
			this->txtLogin->Margin = System::Windows::Forms::Padding(4);
			this->txtLogin->MaxLength = 15;
			this->txtLogin->Name = L"txtLogin";
			this->txtLogin->Size = System::Drawing::Size(161, 22);
			this->txtLogin->TabIndex = 1;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(161, 86);
			this->txtPassword->Margin = System::Windows::Forms::Padding(4);
			this->txtPassword->MaxLength = 15;
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(161, 22);
			this->txtPassword->TabIndex = 2;
			// 
			// lblLogin
			// 
			this->lblLogin->AutoSize = true;
			this->lblLogin->Location = System::Drawing::Point(95, 30);
			this->lblLogin->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblLogin->Name = L"lblLogin";
			this->lblLogin->Size = System::Drawing::Size(47, 17);
			this->lblLogin->TabIndex = 3;
			this->lblLogin->Text = L"Login:";
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Location = System::Drawing::Point(94, 86);
			this->lblPassword->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(48, 17);
			this->lblPassword->TabIndex = 4;
			this->lblPassword->Text = L"Has³o:";
			// 
			// butRejestr
			// 
			this->butRejestr->Location = System::Drawing::Point(248, 158);
			this->butRejestr->Margin = System::Windows::Forms::Padding(4);
			this->butRejestr->Name = L"butRejestr";
			this->butRejestr->Size = System::Drawing::Size(143, 32);
			this->butRejestr->TabIndex = 5;
			this->butRejestr->Text = L"Zarejestruj";
			this->butRejestr->UseVisualStyleBackColor = true;
			this->butRejestr->Click += gcnew System::EventHandler(this, &Login::butRejestr_Click);
			// 
			// lblLoginInfo
			// 
			this->lblLoginInfo->AutoSize = true;
			this->lblLoginInfo->ForeColor = System::Drawing::Color::Red;
			this->lblLoginInfo->Location = System::Drawing::Point(167, 127);
			this->lblLoginInfo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblLoginInfo->Name = L"lblLoginInfo";
			this->lblLoginInfo->Size = System::Drawing::Size(155, 17);
			this->lblLoginInfo->TabIndex = 10;
			this->lblLoginInfo->Text = L"B³êdne dane logowania";
			this->lblLoginInfo->Visible = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(448, 214);
			this->Controls->Add(this->lblLoginInfo);
			this->Controls->Add(this->butRejestr);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->lblLogin);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtLogin);
			this->Controls->Add(this->butZaloguj);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Login";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion


	private: String^ pathToDir = "Data\\Accounts\\Accounts.txt";

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

			if ( CheckSymbolsOfInput(txtLogin->Text, txtPassword->Text ) ) {
				
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

				if ( !( login[i] >= 48 && login[i] <= 57 || login[i] >= 65 && login[i] <= 90 || login[i] >= 97 && login[i] <= 122 ) ) {

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
