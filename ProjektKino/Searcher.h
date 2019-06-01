#pragma once
#include "Login.h"
#include "SeatPicker.h"
#include "Globals.h"
#include"UserReservation.h"



namespace ProjektKino
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Globals;
	using namespace UserReservation;

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
	private: System::Windows::Forms::ComboBox^  comReserv;



	private: System::Windows::Forms::Label^  lblReserv;
	private: System::Windows::Forms::Button^  butUnReserv;




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
			this->comReserv = (gcnew System::Windows::Forms::ComboBox());
			this->lblReserv = (gcnew System::Windows::Forms::Label());
			this->butUnReserv = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// butZaloguj
			// 
			this->butZaloguj->Location = System::Drawing::Point(12, 27);
			this->butZaloguj->Name = L"butZaloguj";
			this->butZaloguj->Size = System::Drawing::Size(111, 36);
			this->butZaloguj->TabIndex = 0;
			this->butZaloguj->Text = L"Zaloguj";
			this->butZaloguj->UseVisualStyleBackColor = true;
			this->butZaloguj->Click += gcnew System::EventHandler(this, &Searcher::butZaloguj_Click);
			// 
			// butRezerwuj
			// 
			this->butRezerwuj->Location = System::Drawing::Point(136, 278);
			this->butRezerwuj->Name = L"butRezerwuj";
			this->butRezerwuj->Size = System::Drawing::Size(111, 36);
			this->butRezerwuj->TabIndex = 1;
			this->butRezerwuj->Text = L"Rezerwuj";
			this->butRezerwuj->UseVisualStyleBackColor = true;
			this->butRezerwuj->Click += gcnew System::EventHandler(this, &Searcher::butRezerwuj_Click);
			// 
			// butExit
			// 
			this->butExit->Location = System::Drawing::Point(12, 69);
			this->butExit->Name = L"butExit";
			this->butExit->Size = System::Drawing::Size(111, 36);
			this->butExit->TabIndex = 2;
			this->butExit->Text = L"WyjdŸ";
			this->butExit->UseVisualStyleBackColor = true;
			this->butExit->Click += gcnew System::EventHandler(this, &Searcher::butExit_Click);
			// 
			// lblAccountInfo
			// 
			this->lblAccountInfo->AutoSize = true;
			this->lblAccountInfo->Location = System::Drawing::Point(13, 9);
			this->lblAccountInfo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblAccountInfo->Name = L"lblAccountInfo";
			this->lblAccountInfo->Size = System::Drawing::Size(35, 13);
			this->lblAccountInfo->TabIndex = 3;
			this->lblAccountInfo->Text = L"User :";
			this->lblAccountInfo->Visible = false;
			// 
			// lblUserName
			// 
			this->lblUserName->AutoSize = true;
			this->lblUserName->Location = System::Drawing::Point(48, 1);
			this->lblUserName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblUserName->Name = L"lblUserName";
			this->lblUserName->Size = System::Drawing::Size(0, 13);
			this->lblUserName->TabIndex = 4;
			// 
			// comReserv
			// 
			this->comReserv->FormattingEnabled = true;
			this->comReserv->Location = System::Drawing::Point(616, 36);
			this->comReserv->Name = L"comReserv";
			this->comReserv->Size = System::Drawing::Size(218, 21);
			this->comReserv->TabIndex = 7;
			this->comReserv->TabStop = false;
			// 
			// lblReserv
			// 
			this->lblReserv->AutoSize = true;
			this->lblReserv->Location = System::Drawing::Point(681, 9);
			this->lblReserv->Name = L"lblReserv";
			this->lblReserv->Size = System::Drawing::Size(90, 13);
			this->lblReserv->TabIndex = 8;
			this->lblReserv->Text = L"Twoje rezerwacje";
			// 
			// butUnReserv
			// 
			this->butUnReserv->Location = System::Drawing::Point(684, 80);
			this->butUnReserv->Name = L"butUnReserv";
			this->butUnReserv->Size = System::Drawing::Size(111, 36);
			this->butUnReserv->TabIndex = 9;
			this->butUnReserv->Text = L"Odrezerwuj";
			this->butUnReserv->UseVisualStyleBackColor = true;
			this->butUnReserv->Click += gcnew System::EventHandler(this, &Searcher::butUnReserv_Click);
			// 
			// Searcher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(846, 326);
			this->Controls->Add(this->butUnReserv);
			this->Controls->Add(this->lblReserv);
			this->Controls->Add(this->comReserv);
			this->Controls->Add(this->lblUserName);
			this->Controls->Add(this->lblAccountInfo);
			this->Controls->Add(this->butExit);
			this->Controls->Add(this->butRezerwuj);
			this->Controls->Add(this->butZaloguj);
			this->Name = L"Searcher";
			this->Text = L"Searcher";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		String^ MovieName = "Shrek";// do tych 3 zmiennych wchodzi nazwa data i godzina filmu
		String^ MovieData = "11.06.2018";
		String^ MovieTime = "20;00";
		String^ accDir = "Data\\Accounts\\Reservation\\";
		String^ dir = "Data\\Seanse\\"; //Œcie¿ka do pliku gdzie bêd¹ zapisywane seanse
		List<URes^>^ list = gcnew List<URes^>();
		Room* room = new Room(Seats);


#pragma endregion

	private: Void LoadUserReservation()
	{
		list->Clear();
		comReserv->Items->Clear();
		StreamReader^ reader;
		try
		{
			reader = gcnew StreamReader(accDir + GlobalClass::userLogin + ".txt");

		}
		catch (...)
		{
			return;
		}
		String^ line;
		int i = 0;
		while (line = reader->ReadLine())
		{
			URes^ buffer = gcnew URes;
			buffer->Title = line;
			buffer->Date = reader->ReadLine();
			buffer->Time = reader->ReadLine();
			buffer->Seat = Convert::ToInt32(reader->ReadLine()) + 1;
			list->Add(buffer);
		}
		reader->Close();
		for (int i = 0; i < list->Count; i++)
		{
			comReserv->Items->Add(list[i]->Title + " " + list[i]->Date + " o godzinie " + list[i]->Time + " miejsce " + list[i]->Seat);
		}
	}

	private: System::Void butZaloguj_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (butZaloguj->Text == "Wyloguj") {
			GlobalClass::userLogin == "";
			butZaloguj->Text == "Zaloguj";
		}
		ProjektKino::Login^ login = gcnew ProjektKino::Login;
		login->ShowDialog();
		lblUserName->Text = GlobalClass::userLogin;
		LoadUserReservation();

	}

	private: System::Void butRezerwuj_Click(System::Object^  sender, System::EventArgs^  e)
	{
		SeatPicker^ seatPicker = gcnew SeatPicker(MovieName, MovieData, MovieTime);
		seatPicker->ShowDialog();

		if (GlobalClass::Reserv)
		{
			LoadUserReservation();
			GlobalClass::Reserv = false;
		}

	}

	private: System::Void butExit_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->Close();
	}

	private: System::Void butUnReserv_Click(System::Object^  sender, System::EventArgs^  e)
	{

		int k = comReserv->SelectedIndex;
		if (k >= 0)
		{
			int i = 0;
			StreamWriter^ writer = gcnew StreamWriter(accDir + GlobalClass::userLogin + ".txt");
			for (; i < k; i++)
			{
				writer->WriteLine(list[i]->Title);
				writer->WriteLine(list[i]->Date);
				writer->WriteLine(list[i]->Time);
				writer->WriteLine(list[i]->Seat - 1);
			}
			i++;
			for (; i < list->Count; i++)
			{
				writer->WriteLine(list[i]->Title);
				writer->WriteLine(list[i]->Date);
				writer->WriteLine(list[i]->Time);
				writer->WriteLine(list[i]->Seat - 1);
			}
			writer->Close();
			room->FileReader(dir + MovieName + " " + MovieData + " " + MovieTime + ".txt");
			room->Tab[list[k]->Seat - 1] = !room->Tab[list[k]->Seat - 1];
			room->FileWriter(dir + MovieName + " " + MovieData + " " + MovieTime + ".txt");
			LoadUserReservation();
			comReserv->Text = "";

			// TUTAJ FUNKCJA ODREZERWOWANIA CZYLI ZAMIENIENIA W PLIKU "FILM DATA GODZ" LINIJKI O NUMERZE "list[comReserv->SelectedIndex]" na "0"
			// ORAZ W PLIKU "LOGIN.TXT" USUNAC 4 LININIJKI (CZYLI REZERWACJE 1 BILETU, BO 4 LINIE TO 1 BILET) TE KRORE ODPOWIADAJA DANEMU BILETOWI
			// TRZEBA WCZYTYWAC PO 4 LINIJKI, SPRAWDZAC CZY WSZYSTKIE SIE ZGADZAJA Z "list[SelectedIndex]->Title/Date/Time/Seat". JESLI TAK TO KASUJ TE 4 LINJKI
		}

	}



	};
}
