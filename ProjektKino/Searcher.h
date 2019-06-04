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

	const short dateDigits = 10;
	const short timeDigits = 5;

	/// <summary>
	/// Podsumowanie informacji o Searcher
	/// </summary>
	public ref class Searcher : public System::Windows::Forms::Form
	{
	public:
		Searcher(void)
		{
			InitializeComponent();
			this->Width = 340;
			InitializeItemsOfFilmBrowser();
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
	private: System::Windows::Forms::ComboBox^  comReserv;
	private: System::Windows::Forms::Label^  lblReserv;
	private: System::Windows::Forms::Button^  butUnReserv;
	private: System::Windows::Forms::Label^  lblUser;
	private: System::Windows::Forms::ComboBox^  comFilmBrowser;

			 /// <summary>
			 /// Wymagana zmienna projektanta.
			 /// </summary>
			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
			 /// jej zawartoœci w edytorze kodu.
			 /// </summary>

			 String^ movieTimeDir = "Data\\Filmy\\MovieTime\\";
			 String^ moviesDir = "Data\\Filmy\\Movies.txt";
			 String^ MovieName = "Shrek";// do tych 3 zmiennych wchodzi nazwa data i godzina filmu. format ma byc taki jak w inicjalizacji
			 String^ MovieData = "11.06.2018";
			 String^ MovieTime = "20;00";
			 String^ accDir = "Data\\Accounts\\Reservation\\";
			 String^ dir = "Data\\Seanse\\"; //Œcie¿ka do pliku gdzie bêd¹ zapisywane seanse
			 List<URes^>^ list = gcnew List<URes^>(); //lista która trzyma rezerwacje zalogowanej osoby
			 Room* room = new Room(Seats);

	private: System::Windows::Forms::ComboBox^  comDateBrowser;
	private: System::Windows::Forms::ComboBox^  comTimeBrowser;
	private: System::Windows::Forms::Label^  lblMoviePick;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;


			 StreamReader^ initializer;

			 void InitializeComponent(void)
			 {
				 this->butZaloguj = (gcnew System::Windows::Forms::Button());
				 this->butRezerwuj = (gcnew System::Windows::Forms::Button());
				 this->butExit = (gcnew System::Windows::Forms::Button());
				 this->lblAccountInfo = (gcnew System::Windows::Forms::Label());
				 this->comReserv = (gcnew System::Windows::Forms::ComboBox());
				 this->lblReserv = (gcnew System::Windows::Forms::Label());
				 this->butUnReserv = (gcnew System::Windows::Forms::Button());
				 this->lblUser = (gcnew System::Windows::Forms::Label());
				 this->comFilmBrowser = (gcnew System::Windows::Forms::ComboBox());
				 this->comDateBrowser = (gcnew System::Windows::Forms::ComboBox());
				 this->comTimeBrowser = (gcnew System::Windows::Forms::ComboBox());
				 this->lblMoviePick = (gcnew System::Windows::Forms::Label());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->SuspendLayout();
				 // 
				 // butZaloguj
				 // 
				 this->butZaloguj->BackColor = System::Drawing::Color::PaleGoldenrod;
				 this->butZaloguj->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->butZaloguj->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->butZaloguj->Location = System::Drawing::Point(12, 12);
				 this->butZaloguj->Name = L"butZaloguj";
				 this->butZaloguj->Size = System::Drawing::Size(111, 36);
				 this->butZaloguj->TabIndex = 0;
				 this->butZaloguj->Text = L"Zaloguj";
				 this->butZaloguj->UseVisualStyleBackColor = false;
				 this->butZaloguj->Click += gcnew System::EventHandler(this, &Searcher::butZaloguj_Click);
				 // 
				 // butRezerwuj
				 // 
				 this->butRezerwuj->BackColor = System::Drawing::Color::PaleGoldenrod;
				 this->butRezerwuj->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->butRezerwuj->Enabled = false;
				 this->butRezerwuj->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->butRezerwuj->Location = System::Drawing::Point(12, 235);
				 this->butRezerwuj->Name = L"butRezerwuj";
				 this->butRezerwuj->Size = System::Drawing::Size(111, 36);
				 this->butRezerwuj->TabIndex = 2;
				 this->butRezerwuj->Text = L"Rezerwuj";
				 this->butRezerwuj->UseVisualStyleBackColor = false;
				 this->butRezerwuj->Click += gcnew System::EventHandler(this, &Searcher::butRezerwuj_Click);
				 // 
				 // butExit
				 // 
				 this->butExit->BackColor = System::Drawing::Color::PaleGoldenrod;
				 this->butExit->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->butExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->butExit->Location = System::Drawing::Point(129, 12);
				 this->butExit->Name = L"butExit";
				 this->butExit->Size = System::Drawing::Size(111, 36);
				 this->butExit->TabIndex = 1;
				 this->butExit->Text = L"WyjdŸ";
				 this->butExit->UseVisualStyleBackColor = false;
				 this->butExit->Click += gcnew System::EventHandler(this, &Searcher::butExit_Click);
				 // 
				 // lblAccountInfo
				 // 
				 this->lblAccountInfo->AutoSize = true;
				 this->lblAccountInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->lblAccountInfo->Location = System::Drawing::Point(189, 66);
				 this->lblAccountInfo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->lblAccountInfo->Name = L"lblAccountInfo";
				 this->lblAccountInfo->Size = System::Drawing::Size(44, 18);
				 this->lblAccountInfo->TabIndex = 3;
				 this->lblAccountInfo->Text = L"User ";
				 this->lblAccountInfo->Visible = false;
				 this->lblAccountInfo->TextChanged += gcnew System::EventHandler(this, &Searcher::lblAccountInfo_TextChanged);
				 // 
				 // comReserv
				 // 
				 this->comReserv->BackColor = System::Drawing::Color::PaleGoldenrod;
				 this->comReserv->FormattingEnabled = true;
				 this->comReserv->Location = System::Drawing::Point(331, 63);
				 this->comReserv->Name = L"comReserv";
				 this->comReserv->Size = System::Drawing::Size(246, 21);
				 this->comReserv->TabIndex = 7;
				 this->comReserv->TabStop = false;
				 // 
				 // lblReserv
				 // 
				 this->lblReserv->AutoSize = true;
				 this->lblReserv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->lblReserv->Location = System::Drawing::Point(385, 20);
				 this->lblReserv->Name = L"lblReserv";
				 this->lblReserv->Size = System::Drawing::Size(124, 18);
				 this->lblReserv->TabIndex = 8;
				 this->lblReserv->Text = L"Twoje rezerwacje";
				 // 
				 // butUnReserv
				 // 
				 this->butUnReserv->BackColor = System::Drawing::Color::PaleGoldenrod;
				 this->butUnReserv->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->butUnReserv->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->butUnReserv->Location = System::Drawing::Point(331, 106);
				 this->butUnReserv->Name = L"butUnReserv";
				 this->butUnReserv->Size = System::Drawing::Size(111, 36);
				 this->butUnReserv->TabIndex = 9;
				 this->butUnReserv->Text = L"Odrezerwuj";
				 this->butUnReserv->UseVisualStyleBackColor = false;
				 this->butUnReserv->Click += gcnew System::EventHandler(this, &Searcher::butUnReserv_Click);
				 // 
				 // lblUser
				 // 
				 this->lblUser->AutoSize = true;
				 this->lblUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->lblUser->Location = System::Drawing::Point(12, 66);
				 this->lblUser->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->lblUser->Name = L"lblUser";
				 this->lblUser->Size = System::Drawing::Size(174, 18);
				 this->lblUser->TabIndex = 10;
				 this->lblUser->Text = L"Zalogowany u¿ytkownik :";
				 this->lblUser->Visible = false;
				 // 
				 // comFilmBrowser
				 // 
				 this->comFilmBrowser->BackColor = System::Drawing::Color::PaleGoldenrod;
				 this->comFilmBrowser->FormattingEnabled = true;
				 this->comFilmBrowser->Location = System::Drawing::Point(117, 106);
				 this->comFilmBrowser->Margin = System::Windows::Forms::Padding(2);
				 this->comFilmBrowser->Name = L"comFilmBrowser";
				 this->comFilmBrowser->Size = System::Drawing::Size(178, 21);
				 this->comFilmBrowser->TabIndex = 2;
				 this->comFilmBrowser->SelectedIndexChanged += gcnew System::EventHandler(this, &Searcher::comboBox1_SelectedIndexChanged);
				 // 
				 // comDateBrowser
				 // 
				 this->comDateBrowser->BackColor = System::Drawing::Color::PaleGoldenrod;
				 this->comDateBrowser->FormattingEnabled = true;
				 this->comDateBrowser->Location = System::Drawing::Point(117, 149);
				 this->comDateBrowser->Margin = System::Windows::Forms::Padding(2);
				 this->comDateBrowser->Name = L"comDateBrowser";
				 this->comDateBrowser->Size = System::Drawing::Size(178, 21);
				 this->comDateBrowser->TabIndex = 3;
				 this->comDateBrowser->SelectedIndexChanged += gcnew System::EventHandler(this, &Searcher::comDateBrowser_SelectedIndexChanged);
				 // 
				 // comTimeBrowser
				 // 
				 this->comTimeBrowser->BackColor = System::Drawing::Color::PaleGoldenrod;
				 this->comTimeBrowser->FormattingEnabled = true;
				 this->comTimeBrowser->Location = System::Drawing::Point(142, 192);
				 this->comTimeBrowser->Margin = System::Windows::Forms::Padding(2);
				 this->comTimeBrowser->Name = L"comTimeBrowser";
				 this->comTimeBrowser->Size = System::Drawing::Size(153, 21);
				 this->comTimeBrowser->TabIndex = 4;
				 this->comTimeBrowser->TextChanged += gcnew System::EventHandler(this, &Searcher::comTimeBrowser_TextChanged);
				 // 
				 // lblMoviePick
				 // 
				 this->lblMoviePick->AutoSize = true;
				 this->lblMoviePick->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->lblMoviePick->Location = System::Drawing::Point(12, 109);
				 this->lblMoviePick->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->lblMoviePick->Name = L"lblMoviePick";
				 this->lblMoviePick->Size = System::Drawing::Size(98, 18);
				 this->lblMoviePick->TabIndex = 15;
				 this->lblMoviePick->Text = L"Wybierz Film:";
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->label1->Location = System::Drawing::Point(12, 152);
				 this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(101, 18);
				 this->label1->TabIndex = 16;
				 this->label1->Text = L"Wybierz Datê:";
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->label2->Location = System::Drawing::Point(12, 195);
				 this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(126, 18);
				 this->label2->TabIndex = 17;
				 this->label2->Text = L"Wybierz Godzinê:";
				 // 
				 // Searcher
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::Silver;
				 this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
				 this->ClientSize = System::Drawing::Size(586, 282);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->lblMoviePick);
				 this->Controls->Add(this->comTimeBrowser);
				 this->Controls->Add(this->comDateBrowser);
				 this->Controls->Add(this->comFilmBrowser);
				 this->Controls->Add(this->lblUser);
				 this->Controls->Add(this->butUnReserv);
				 this->Controls->Add(this->lblReserv);
				 this->Controls->Add(this->comReserv);
				 this->Controls->Add(this->lblAccountInfo);
				 this->Controls->Add(this->butExit);
				 this->Controls->Add(this->butRezerwuj);
				 this->Controls->Add(this->butZaloguj);
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				 this->MaximizeBox = false;
				 this->Name = L"Searcher";
				 this->Text = L"Rezerwacja biletów";
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }

			 void InitializeItemsOfFilmBrowser(void) {

				 StreamReader^ initializer = gcnew StreamReader(moviesDir, System::Text::Encoding::Default);
				 String^ movie;
				 while (movie = initializer->ReadLine()) {
					 this->comFilmBrowser->Items->Add(movie);
				 }
				 initializer->Close();
			 }


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
			comReserv->Items->Add(list[i]->Title + " " + list[i]->Date + " o godz. " + list[i]->Time + " miejsce " + list[i]->Seat);
		}
	}

	private: System::Void butZaloguj_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (butZaloguj->Text == "Wyloguj") {  //zalogowany

			GlobalClass::userLogin = "";
			lblAccountInfo->Text = GlobalClass::userLogin;
			LoadUserReservation();
		}
		else {                                // wylogowany

			ProjektKino::Login^ login = gcnew ProjektKino::Login;
			login->ShowDialog();
			lblAccountInfo->Text = GlobalClass::userLogin;
			LoadUserReservation();
		}

	}

	private: System::Void butRezerwuj_Click(System::Object^  sender, System::EventArgs^  e)
	{
		MovieName = comFilmBrowser->Text;
		MovieData = comDateBrowser->Text;
		MovieTime = comTimeBrowser->Text;

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
		if (MessageBox::Show("Czy wy³¹czyæ aplikacjê?", "Rezerwacja biletów", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			Application::Exit();
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


		}

	}



	private: System::Void lblAccountInfo_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{

		if (GlobalClass::userLogin != "") { // kiedy u¿ytkownik siê zalogowa³

			butZaloguj->Text = "Wyloguj";
			lblAccountInfo->Visible = true;
			lblUser->Visible = true;
			this->Width = 602;
			if (comTimeBrowser->Text != "")
				butRezerwuj->Enabled = true;

		}

		else {                              // kiedy u¿ytkownik siê wylogowa³

			butZaloguj->Text = "Zaloguj";
			lblAccountInfo->Visible = false;
			lblUser->Visible = false;
			butRezerwuj->Enabled = false;
			this->Width = 340;

		}
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		String^ chosenFilm = comFilmBrowser->SelectedItem->ToString();
		String^ specifiedPath = movieTimeDir + chosenFilm;
		try {
			auto datesOfMovie = Directory::EnumerateFiles(specifiedPath);

			comDateBrowser->Text = "";
			comTimeBrowser->Text = "";

			comDateBrowser->Items->Clear();
			comTimeBrowser->Items->Clear();

			for each (String^ date in datesOfMovie)
			{

				String^ fileName = date->Substring(specifiedPath->Length + 1, dateDigits);
				comDateBrowser->Items->Add(fileName);

			}
		}
		catch (...) {

		}
	}

	private: System::Void comDateBrowser_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		String^ specifiedPath = movieTimeDir + comFilmBrowser->SelectedItem->ToString() + "\\" + comDateBrowser->SelectedItem->ToString() + ".txt";
		StreamReader^ reader = gcnew StreamReader(specifiedPath);
		String^ time;

		comTimeBrowser->Text = "";
		comTimeBrowser->Items->Clear();

		while (time = reader->ReadLine()) {
			comTimeBrowser->Items->Add(time);
		}

		reader->Close();
	}

	private: System::Void comTimeBrowser_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		if (comTimeBrowser->Text != "" && GlobalClass::userLogin != "") {
			butRezerwuj->Enabled = true;
		}
		else {
			butRezerwuj->Enabled = false;
		}
	}
	};
}
