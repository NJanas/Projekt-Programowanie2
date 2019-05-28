#pragma once
#include "Login.h"
#include "SeatPicker.h"



namespace ProjektKino
{
	//public ref class Login : public System::Windows::Forms::Form;




	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			this->SuspendLayout();
			// 
			// butZaloguj
			// 
			this->butZaloguj->Location = System::Drawing::Point(653, 12);
			this->butZaloguj->Name = L"butZaloguj";
			this->butZaloguj->Size = System::Drawing::Size(169, 48);
			this->butZaloguj->TabIndex = 0;
			this->butZaloguj->Text = L"Zaloguj";
			this->butZaloguj->UseVisualStyleBackColor = true;
			this->butZaloguj->Click += gcnew System::EventHandler(this, &Searcher::butZaloguj_Click);
			// 
			// butRezerwuj
			// 
			this->butRezerwuj->Location = System::Drawing::Point(633, 352);
			this->butRezerwuj->Name = L"butRezerwuj";
			this->butRezerwuj->Size = System::Drawing::Size(189, 48);
			this->butRezerwuj->TabIndex = 1;
			this->butRezerwuj->Text = L"Rezerwuj";
			this->butRezerwuj->UseVisualStyleBackColor = true;
			this->butRezerwuj->Click += gcnew System::EventHandler(this, &Searcher::butRezerwuj_Click);
			// 
			// butExit
			// 
			this->butExit->Location = System::Drawing::Point(660, 75);
			this->butExit->Name = L"butExit";
			this->butExit->Size = System::Drawing::Size(162, 47);
			this->butExit->TabIndex = 2;
			this->butExit->Text = L"WyjdŸ";
			this->butExit->UseVisualStyleBackColor = true;
			this->butExit->Click += gcnew System::EventHandler(this, &Searcher::butExit_Click);
			// 
			// Searcher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(834, 412);
			this->Controls->Add(this->butExit);
			this->Controls->Add(this->butRezerwuj);
			this->Controls->Add(this->butZaloguj);
			this->Name = L"Searcher";
			this->Text = L"Searcher";
			this->ResumeLayout(false);

		}
	#pragma endregion

		private: System::Void butZaloguj_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			ProjektKino::Login^ login = gcnew ProjektKino::Login;
			login->Show();
		}

		
		private: System::Void butRezerwuj_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			SeatPicker^ seatPicker = gcnew SeatPicker;
			seatPicker->Show();
		}

		private: System::Void butExit_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			this->Close();
			//DODANO
		}
};
}
