#pragma once
#include "Login.h"
#include "SeatPicker.h"
#include "Globals.h"



namespace ProjektKino
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Globals;

	/// <summary>
	/// Podsumowanie informacji o Searcher
	/// </summary>
	public ref class Searcher : public System::Windows::Forms::Form
	{
	public:
		Searcher(void)
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
		~Searcher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  butZaloguj;
	private: System::Windows::Forms::Button^  butRezerwuj;
	private: System::Windows::Forms::Button^  butExit;
	private: System::Windows::Forms::Label^  lblAccountInfo;
	private: System::Windows::Forms::Label^  lblUserName;



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
			this->butRezerwuj = (gcnew System::Windows::Forms::Button());
			this->butExit = (gcnew System::Windows::Forms::Button());
			this->lblAccountInfo = (gcnew System::Windows::Forms::Label());
			this->lblUserName = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// butZaloguj
			// 
			this->butZaloguj->Location = System::Drawing::Point(871, 13);
			this->butZaloguj->Margin = System::Windows::Forms::Padding(4);
			this->butZaloguj->Name = L"butZaloguj";
			this->butZaloguj->Size = System::Drawing::Size(225, 59);
			this->butZaloguj->TabIndex = 0;
			this->butZaloguj->Text = L"Zaloguj";
			this->butZaloguj->UseVisualStyleBackColor = true;
			this->butZaloguj->Click += gcnew System::EventHandler(this, &Searcher::butZaloguj_Click);
			// 
			// butRezerwuj
			// 
			this->butRezerwuj->Location = System::Drawing::Point(844, 433);
			this->butRezerwuj->Margin = System::Windows::Forms::Padding(4);
			this->butRezerwuj->Name = L"butRezerwuj";
			this->butRezerwuj->Size = System::Drawing::Size(252, 59);
			this->butRezerwuj->TabIndex = 1;
			this->butRezerwuj->Text = L"Rezerwuj";
			this->butRezerwuj->UseVisualStyleBackColor = true;
			this->butRezerwuj->Click += gcnew System::EventHandler(this, &Searcher::butRezerwuj_Click);
			// 
			// butExit
			// 
			this->butExit->Location = System::Drawing::Point(871, 140);
			this->butExit->Margin = System::Windows::Forms::Padding(4);
			this->butExit->Name = L"butExit";
			this->butExit->Size = System::Drawing::Size(225, 58);
			this->butExit->TabIndex = 2;
			this->butExit->Text = L"WyjdŸ";
			this->butExit->UseVisualStyleBackColor = true;
			this->butExit->Click += gcnew System::EventHandler(this, &Searcher::butExit_Click);
			//
			// lblAccountInfo
			// 
			this->lblAccountInfo->AutoSize = true;
			this->lblAccountInfo->Location = System::Drawing::Point(923, 94);
			this->lblAccountInfo->Name = L"lblAccountInfo";
			this->lblAccountInfo->Size = System::Drawing::Size(46, 17);
			this->lblAccountInfo->TabIndex = 3;
			this->lblAccountInfo->Text = L"User :";
			this->lblAccountInfo->Visible = false;
			// 
			// lblUserName
			// 
			this->lblUserName->AutoSize = true;
			this->lblUserName->Location = System::Drawing::Point(975, 94);
			this->lblUserName->Name = L"lblUserName";
			this->lblUserName->Size = System::Drawing::Size(46, 17);
			this->lblUserName->TabIndex = 4;
			this->lblUserName->Text = L"label1";
			// 
			// Searcher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1112, 507);
			this->Controls->Add(this->lblUserName);
			this->Controls->Add(this->lblAccountInfo);
			this->Controls->Add(this->butExit);
			this->Controls->Add(this->butRezerwuj);
			this->Controls->Add(this->butZaloguj);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Searcher";
			this->Text = L"Searcher";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void butZaloguj_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			if (butZaloguj->Text == "Wyloguj") {
				GlobalClass::userLogin == "";
				butZaloguj->Text == "Zaloguj";
			}
			ProjektKino::Login^ login = gcnew ProjektKino::Login;
			login->ShowDialog();

		}

		private: System::Void butRezerwuj_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			SeatPicker^ seatPicker = gcnew SeatPicker;
			seatPicker->ShowDialog();
		}

		private: System::Void butExit_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			this->Close();
		}
		
	};
}
