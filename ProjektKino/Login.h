#pragma once
namespace ProjektKino {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^  lblRPasswrod;
	private: System::Windows::Forms::Label^  lblRLogin;
	private: System::Windows::Forms::TextBox^  txtRPassword;
	private: System::Windows::Forms::TextBox^  txtRLogin;
	private: System::Windows::Forms::Label^  lblLoginInfo;
	private: System::Windows::Forms::Label^  lblRInfo;
	private: System::Windows::Forms::CheckBox^  chBLIsChecked;



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
			this->lblRPasswrod = (gcnew System::Windows::Forms::Label());
			this->lblRLogin = (gcnew System::Windows::Forms::Label());
			this->txtRPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtRLogin = (gcnew System::Windows::Forms::TextBox());
			this->lblLoginInfo = (gcnew System::Windows::Forms::Label());
			this->lblRInfo = (gcnew System::Windows::Forms::Label());
			this->chBLIsChecked = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// butZaloguj
			// 
			this->butZaloguj->Location = System::Drawing::Point(16, 148);
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
			this->txtLogin->Location = System::Drawing::Point(16, 31);
			this->txtLogin->Margin = System::Windows::Forms::Padding(4);
			this->txtLogin->Name = L"txtLogin";
			this->txtLogin->Size = System::Drawing::Size(161, 22);
			this->txtLogin->TabIndex = 1;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(16, 86);
			this->txtPassword->Margin = System::Windows::Forms::Padding(4);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(161, 22);
			this->txtPassword->TabIndex = 2;
			// 
			// lblLogin
			// 
			this->lblLogin->AutoSize = true;
			this->lblLogin->Location = System::Drawing::Point(16, 11);
			this->lblLogin->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblLogin->Name = L"lblLogin";
			this->lblLogin->Size = System::Drawing::Size(47, 17);
			this->lblLogin->TabIndex = 3;
			this->lblLogin->Text = L"Login:";
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Location = System::Drawing::Point(16, 66);
			this->lblPassword->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(73, 17);
			this->lblPassword->TabIndex = 4;
			this->lblPassword->Text = L"Password:";
			// 
			// butRejestr
			// 
			this->butRejestr->Location = System::Drawing::Point(260, 148);
			this->butRejestr->Margin = System::Windows::Forms::Padding(4);
			this->butRejestr->Name = L"butRejestr";
			this->butRejestr->Size = System::Drawing::Size(143, 32);
			this->butRejestr->TabIndex = 5;
			this->butRejestr->Text = L"Zarejestruj";
			this->butRejestr->UseVisualStyleBackColor = true;
			// 
			// lblRPasswrod
			// 
			this->lblRPasswrod->AutoSize = true;
			this->lblRPasswrod->Location = System::Drawing::Point(260, 66);
			this->lblRPasswrod->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRPasswrod->Name = L"lblRPasswrod";
			this->lblRPasswrod->Size = System::Drawing::Size(73, 17);
			this->lblRPasswrod->TabIndex = 9;
			this->lblRPasswrod->Text = L"Password:";
			// 
			// lblRLogin
			// 
			this->lblRLogin->AutoSize = true;
			this->lblRLogin->Location = System::Drawing::Point(260, 11);
			this->lblRLogin->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRLogin->Name = L"lblRLogin";
			this->lblRLogin->Size = System::Drawing::Size(47, 17);
			this->lblRLogin->TabIndex = 8;
			this->lblRLogin->Text = L"Login:";
			// 
			// txtRPassword
			// 
			this->txtRPassword->Location = System::Drawing::Point(260, 86);
			this->txtRPassword->Margin = System::Windows::Forms::Padding(4);
			this->txtRPassword->Name = L"txtRPassword";
			this->txtRPassword->Size = System::Drawing::Size(161, 22);
			this->txtRPassword->TabIndex = 7;
			// 
			// txtRLogin
			// 
			this->txtRLogin->Location = System::Drawing::Point(260, 31);
			this->txtRLogin->Margin = System::Windows::Forms::Padding(4);
			this->txtRLogin->Name = L"txtRLogin";
			this->txtRLogin->Size = System::Drawing::Size(161, 22);
			this->txtRLogin->TabIndex = 6;
			// 
			// lblLoginInfo
			// 
			this->lblLoginInfo->AutoSize = true;
			this->lblLoginInfo->ForeColor = System::Drawing::Color::Red;
			this->lblLoginInfo->Location = System::Drawing::Point(12, 121);
			this->lblLoginInfo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblLoginInfo->Name = L"lblLoginInfo";
			this->lblLoginInfo->Size = System::Drawing::Size(180, 17);
			this->lblLoginInfo->TabIndex = 10;
			this->lblLoginInfo->Text = L"Tutaj Text na z³e logowanie";
			this->lblLoginInfo->Visible = false;
			// 
			// lblRInfo
			// 
			this->lblRInfo->AutoSize = true;
			this->lblRInfo->ForeColor = System::Drawing::Color::Red;
			this->lblRInfo->Location = System::Drawing::Point(260, 121);
			this->lblRInfo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRInfo->Name = L"lblRInfo";
			this->lblRInfo->Size = System::Drawing::Size(144, 17);
			this->lblRInfo->TabIndex = 11;
			this->lblRInfo->Text = L"Tutaj info o rejestracji";
			this->lblRInfo->Visible = false;
			// 
			// chBLIsChecked
			// 
			this->chBLIsChecked->AutoSize = true;
			this->chBLIsChecked->Location = System::Drawing::Point(165, 60);
			this->chBLIsChecked->Name = L"chBLIsChecked";
			this->chBLIsChecked->Size = System::Drawing::Size(98, 21);
			this->chBLIsChecked->TabIndex = 12;
			this->chBLIsChecked->Text = L"checkBox1";
			this->chBLIsChecked->UseVisualStyleBackColor = true;
			this->chBLIsChecked->CheckedChanged += gcnew System::EventHandler(this, &Login::chBLIsChecked_CheckedChanged);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(448, 214);
			this->Controls->Add(this->chBLIsChecked);
			this->Controls->Add(this->lblRInfo);
			this->Controls->Add(this->lblLoginInfo);
			this->Controls->Add(this->lblRPasswrod);
			this->Controls->Add(this->lblRLogin);
			this->Controls->Add(this->txtRPassword);
			this->Controls->Add(this->txtRLogin);
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

		

		private: System::Void butZaloguj_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			this->Close();
			// asdasdas
			//sdasdsada//git

		}
	private: System::Void chBLIsChecked_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	}
};
}
