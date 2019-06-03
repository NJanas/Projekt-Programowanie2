#pragma once
#include "Room.h"
#include "Globals.h"
const int Seats = 40; // Liczba miejsc w sali
const int Price = 20; //Cena za jeden bilet


namespace ProjektKino
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace Globals;


	/// <summary>
	/// Podsumowanie informacji o SeatPicker
	/// </summary>
	public ref class SeatPicker : public System::Windows::Forms::Form
	{
	public:
		SeatPicker(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

		SeatPicker(String^ Name, String^ Data, String^ Time)
		{
			InitializeComponent();
			MovieData = Data;
			MovieName = Name;
			MovieTime = Time;
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~SeatPicker()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  butConfirm;
	private: System::Windows::Forms::PictureBox^  p0;
	private: System::Windows::Forms::PictureBox^  p1;
	private: System::Windows::Forms::PictureBox^  p2;
	private: System::Windows::Forms::PictureBox^  p5;
	private: System::Windows::Forms::PictureBox^  p4;
	private: System::Windows::Forms::PictureBox^  p6;
	private: System::Windows::Forms::PictureBox^  p14;
	private: System::Windows::Forms::PictureBox^  p12;
	private: System::Windows::Forms::PictureBox^  p13;
	private: System::Windows::Forms::PictureBox^  p10;
	private: System::Windows::Forms::PictureBox^  p9;
	private: System::Windows::Forms::PictureBox^  p8;
	private: System::Windows::Forms::PictureBox^  p22;
	private: System::Windows::Forms::PictureBox^  p20;
	private: System::Windows::Forms::PictureBox^  p21;
	private: System::Windows::Forms::PictureBox^  p18;
	private: System::Windows::Forms::PictureBox^  p17;
	private: System::Windows::Forms::PictureBox^  p16;
	private: System::Windows::Forms::PictureBox^  p30;
	private: System::Windows::Forms::PictureBox^  p28;
	private: System::Windows::Forms::PictureBox^  p29;
	private: System::Windows::Forms::PictureBox^  p26;
	private: System::Windows::Forms::PictureBox^  p25;
	private: System::Windows::Forms::PictureBox^  p24;
	private: System::Windows::Forms::PictureBox^  p38;
	private: System::Windows::Forms::PictureBox^  p36;
	private: System::Windows::Forms::PictureBox^  p37;
	private: System::Windows::Forms::PictureBox^  p34;
	private: System::Windows::Forms::PictureBox^  p33;
	private: System::Windows::Forms::PictureBox^  p32;
	private: System::Windows::Forms::PictureBox^  p35;
	private: System::Windows::Forms::PictureBox^  p27;
	private: System::Windows::Forms::PictureBox^  p19;
	private: System::Windows::Forms::PictureBox^  p11;
	private: System::Windows::Forms::PictureBox^  p3;
	private: System::Windows::Forms::PictureBox^  p39;
	private: System::Windows::Forms::PictureBox^  p31;
	private: System::Windows::Forms::PictureBox^  p23;
	private: System::Windows::Forms::PictureBox^  p15;
	private: System::Windows::Forms::PictureBox^  p7;
	private: System::Windows::Forms::PictureBox^  picEkran;
	private: System::Windows::Forms::Label^  lblEkran;
	private: System::Windows::Forms::Button^  butBack;
	private: System::Windows::Forms::Label^  lblCenaNapis;
	private: System::Windows::Forms::Label^  lblCena;
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
			this->butConfirm = (gcnew System::Windows::Forms::Button());
			this->p0 = (gcnew System::Windows::Forms::PictureBox());
			this->p1 = (gcnew System::Windows::Forms::PictureBox());
			this->p2 = (gcnew System::Windows::Forms::PictureBox());
			this->p5 = (gcnew System::Windows::Forms::PictureBox());
			this->p4 = (gcnew System::Windows::Forms::PictureBox());
			this->p6 = (gcnew System::Windows::Forms::PictureBox());
			this->p14 = (gcnew System::Windows::Forms::PictureBox());
			this->p12 = (gcnew System::Windows::Forms::PictureBox());
			this->p13 = (gcnew System::Windows::Forms::PictureBox());
			this->p10 = (gcnew System::Windows::Forms::PictureBox());
			this->p9 = (gcnew System::Windows::Forms::PictureBox());
			this->p8 = (gcnew System::Windows::Forms::PictureBox());
			this->p22 = (gcnew System::Windows::Forms::PictureBox());
			this->p20 = (gcnew System::Windows::Forms::PictureBox());
			this->p21 = (gcnew System::Windows::Forms::PictureBox());
			this->p18 = (gcnew System::Windows::Forms::PictureBox());
			this->p17 = (gcnew System::Windows::Forms::PictureBox());
			this->p16 = (gcnew System::Windows::Forms::PictureBox());
			this->p30 = (gcnew System::Windows::Forms::PictureBox());
			this->p28 = (gcnew System::Windows::Forms::PictureBox());
			this->p29 = (gcnew System::Windows::Forms::PictureBox());
			this->p26 = (gcnew System::Windows::Forms::PictureBox());
			this->p25 = (gcnew System::Windows::Forms::PictureBox());
			this->p24 = (gcnew System::Windows::Forms::PictureBox());
			this->p38 = (gcnew System::Windows::Forms::PictureBox());
			this->p36 = (gcnew System::Windows::Forms::PictureBox());
			this->p37 = (gcnew System::Windows::Forms::PictureBox());
			this->p34 = (gcnew System::Windows::Forms::PictureBox());
			this->p33 = (gcnew System::Windows::Forms::PictureBox());
			this->p32 = (gcnew System::Windows::Forms::PictureBox());
			this->p35 = (gcnew System::Windows::Forms::PictureBox());
			this->p27 = (gcnew System::Windows::Forms::PictureBox());
			this->p19 = (gcnew System::Windows::Forms::PictureBox());
			this->p11 = (gcnew System::Windows::Forms::PictureBox());
			this->p3 = (gcnew System::Windows::Forms::PictureBox());
			this->p39 = (gcnew System::Windows::Forms::PictureBox());
			this->p31 = (gcnew System::Windows::Forms::PictureBox());
			this->p23 = (gcnew System::Windows::Forms::PictureBox());
			this->p15 = (gcnew System::Windows::Forms::PictureBox());
			this->p7 = (gcnew System::Windows::Forms::PictureBox());
			this->picEkran = (gcnew System::Windows::Forms::PictureBox());
			this->lblEkran = (gcnew System::Windows::Forms::Label());
			this->butBack = (gcnew System::Windows::Forms::Button());
			this->lblCenaNapis = (gcnew System::Windows::Forms::Label());
			this->lblCena = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picEkran))->BeginInit();
			this->SuspendLayout();
			// 
			// butConfirm
			// 
			this->butConfirm->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->butConfirm->Enabled = false;
			this->butConfirm->Location = System::Drawing::Point(101, 388);
			this->butConfirm->Name = L"butConfirm";
			this->butConfirm->Size = System::Drawing::Size(90, 30);
			this->butConfirm->TabIndex = 0;
			this->butConfirm->Text = L"PotwierdŸ";
			this->butConfirm->UseVisualStyleBackColor = false;
			this->butConfirm->Click += gcnew System::EventHandler(this, &SeatPicker::butConfirm_Click);
			// 
			// p0
			// 
			this->p0->BackColor = System::Drawing::Color::LawnGreen;
			this->p0->Location = System::Drawing::Point(12, 50);
			this->p0->Name = L"p0";
			this->p0->Size = System::Drawing::Size(60, 60);
			this->p0->TabIndex = 1;
			this->p0->TabStop = false;
			this->p0->Tag = L"P";
			this->p0->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p1
			// 
			this->p1->BackColor = System::Drawing::Color::LawnGreen;
			this->p1->Location = System::Drawing::Point(78, 50);
			this->p1->Name = L"p1";
			this->p1->Size = System::Drawing::Size(60, 60);
			this->p1->TabIndex = 2;
			this->p1->TabStop = false;
			this->p1->Tag = L"P";
			this->p1->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p2
			// 
			this->p2->BackColor = System::Drawing::Color::LawnGreen;
			this->p2->Location = System::Drawing::Point(144, 50);
			this->p2->Name = L"p2";
			this->p2->Size = System::Drawing::Size(60, 60);
			this->p2->TabIndex = 3;
			this->p2->TabStop = false;
			this->p2->Tag = L"P";
			this->p2->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p5
			// 
			this->p5->BackColor = System::Drawing::Color::LawnGreen;
			this->p5->Location = System::Drawing::Point(408, 50);
			this->p5->Name = L"p5";
			this->p5->Size = System::Drawing::Size(60, 60);
			this->p5->TabIndex = 4;
			this->p5->TabStop = false;
			this->p5->Tag = L"P";
			this->p5->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p4
			// 
			this->p4->BackColor = System::Drawing::Color::LawnGreen;
			this->p4->Location = System::Drawing::Point(342, 50);
			this->p4->Name = L"p4";
			this->p4->Size = System::Drawing::Size(60, 60);
			this->p4->TabIndex = 5;
			this->p4->TabStop = false;
			this->p4->Tag = L"P";
			this->p4->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p6
			// 
			this->p6->BackColor = System::Drawing::Color::LawnGreen;
			this->p6->Location = System::Drawing::Point(474, 50);
			this->p6->Name = L"p6";
			this->p6->Size = System::Drawing::Size(60, 60);
			this->p6->TabIndex = 6;
			this->p6->TabStop = false;
			this->p6->Tag = L"P";
			this->p6->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p14
			// 
			this->p14->BackColor = System::Drawing::Color::LawnGreen;
			this->p14->Location = System::Drawing::Point(474, 116);
			this->p14->Name = L"p14";
			this->p14->Size = System::Drawing::Size(60, 60);
			this->p14->TabIndex = 12;
			this->p14->TabStop = false;
			this->p14->Tag = L"P";
			this->p14->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p12
			// 
			this->p12->BackColor = System::Drawing::Color::LawnGreen;
			this->p12->Location = System::Drawing::Point(342, 116);
			this->p12->Name = L"p12";
			this->p12->Size = System::Drawing::Size(60, 60);
			this->p12->TabIndex = 11;
			this->p12->TabStop = false;
			this->p12->Tag = L"P";
			this->p12->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p13
			// 
			this->p13->BackColor = System::Drawing::Color::LawnGreen;
			this->p13->Location = System::Drawing::Point(408, 116);
			this->p13->Name = L"p13";
			this->p13->Size = System::Drawing::Size(60, 60);
			this->p13->TabIndex = 10;
			this->p13->TabStop = false;
			this->p13->Tag = L"P";
			this->p13->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p10
			// 
			this->p10->BackColor = System::Drawing::Color::LawnGreen;
			this->p10->Location = System::Drawing::Point(144, 116);
			this->p10->Name = L"p10";
			this->p10->Size = System::Drawing::Size(60, 60);
			this->p10->TabIndex = 9;
			this->p10->TabStop = false;
			this->p10->Tag = L"P";
			this->p10->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p9
			// 
			this->p9->BackColor = System::Drawing::Color::LawnGreen;
			this->p9->Location = System::Drawing::Point(78, 116);
			this->p9->Name = L"p9";
			this->p9->Size = System::Drawing::Size(60, 60);
			this->p9->TabIndex = 8;
			this->p9->TabStop = false;
			this->p9->Tag = L"P";
			this->p9->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p8
			// 
			this->p8->BackColor = System::Drawing::Color::LawnGreen;
			this->p8->Location = System::Drawing::Point(12, 116);
			this->p8->Name = L"p8";
			this->p8->Size = System::Drawing::Size(60, 60);
			this->p8->TabIndex = 7;
			this->p8->TabStop = false;
			this->p8->Tag = L"P";
			this->p8->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p22
			// 
			this->p22->BackColor = System::Drawing::Color::LawnGreen;
			this->p22->Location = System::Drawing::Point(474, 182);
			this->p22->Name = L"p22";
			this->p22->Size = System::Drawing::Size(60, 60);
			this->p22->TabIndex = 18;
			this->p22->TabStop = false;
			this->p22->Tag = L"P";
			this->p22->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p20
			// 
			this->p20->BackColor = System::Drawing::Color::LawnGreen;
			this->p20->Location = System::Drawing::Point(342, 182);
			this->p20->Name = L"p20";
			this->p20->Size = System::Drawing::Size(60, 60);
			this->p20->TabIndex = 17;
			this->p20->TabStop = false;
			this->p20->Tag = L"P";
			this->p20->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p21
			// 
			this->p21->BackColor = System::Drawing::Color::LawnGreen;
			this->p21->Location = System::Drawing::Point(408, 182);
			this->p21->Name = L"p21";
			this->p21->Size = System::Drawing::Size(60, 60);
			this->p21->TabIndex = 16;
			this->p21->TabStop = false;
			this->p21->Tag = L"P";
			this->p21->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p18
			// 
			this->p18->BackColor = System::Drawing::Color::LawnGreen;
			this->p18->Location = System::Drawing::Point(144, 182);
			this->p18->Name = L"p18";
			this->p18->Size = System::Drawing::Size(60, 60);
			this->p18->TabIndex = 15;
			this->p18->TabStop = false;
			this->p18->Tag = L"P";
			this->p18->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p17
			// 
			this->p17->BackColor = System::Drawing::Color::LawnGreen;
			this->p17->Location = System::Drawing::Point(78, 182);
			this->p17->Name = L"p17";
			this->p17->Size = System::Drawing::Size(60, 60);
			this->p17->TabIndex = 14;
			this->p17->TabStop = false;
			this->p17->Tag = L"P";
			this->p17->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p16
			// 
			this->p16->BackColor = System::Drawing::Color::LawnGreen;
			this->p16->Location = System::Drawing::Point(12, 182);
			this->p16->Name = L"p16";
			this->p16->Size = System::Drawing::Size(60, 60);
			this->p16->TabIndex = 13;
			this->p16->TabStop = false;
			this->p16->Tag = L"P";
			this->p16->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p30
			// 
			this->p30->BackColor = System::Drawing::Color::LawnGreen;
			this->p30->Location = System::Drawing::Point(474, 248);
			this->p30->Name = L"p30";
			this->p30->Size = System::Drawing::Size(60, 60);
			this->p30->TabIndex = 24;
			this->p30->TabStop = false;
			this->p30->Tag = L"P";
			this->p30->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p28
			// 
			this->p28->BackColor = System::Drawing::Color::LawnGreen;
			this->p28->Location = System::Drawing::Point(342, 248);
			this->p28->Name = L"p28";
			this->p28->Size = System::Drawing::Size(60, 60);
			this->p28->TabIndex = 23;
			this->p28->TabStop = false;
			this->p28->Tag = L"P";
			this->p28->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p29
			// 
			this->p29->BackColor = System::Drawing::Color::LawnGreen;
			this->p29->Location = System::Drawing::Point(408, 248);
			this->p29->Name = L"p29";
			this->p29->Size = System::Drawing::Size(60, 60);
			this->p29->TabIndex = 22;
			this->p29->TabStop = false;
			this->p29->Tag = L"P";
			this->p29->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p26
			// 
			this->p26->BackColor = System::Drawing::Color::LawnGreen;
			this->p26->Location = System::Drawing::Point(144, 248);
			this->p26->Name = L"p26";
			this->p26->Size = System::Drawing::Size(60, 60);
			this->p26->TabIndex = 21;
			this->p26->TabStop = false;
			this->p26->Tag = L"P";
			this->p26->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p25
			// 
			this->p25->BackColor = System::Drawing::Color::LawnGreen;
			this->p25->Location = System::Drawing::Point(78, 248);
			this->p25->Name = L"p25";
			this->p25->Size = System::Drawing::Size(60, 60);
			this->p25->TabIndex = 20;
			this->p25->TabStop = false;
			this->p25->Tag = L"P";
			this->p25->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p24
			// 
			this->p24->BackColor = System::Drawing::Color::LawnGreen;
			this->p24->Location = System::Drawing::Point(12, 248);
			this->p24->Name = L"p24";
			this->p24->Size = System::Drawing::Size(60, 60);
			this->p24->TabIndex = 19;
			this->p24->TabStop = false;
			this->p24->Tag = L"P";
			this->p24->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p38
			// 
			this->p38->BackColor = System::Drawing::Color::LawnGreen;
			this->p38->Location = System::Drawing::Point(474, 314);
			this->p38->Name = L"p38";
			this->p38->Size = System::Drawing::Size(60, 60);
			this->p38->TabIndex = 30;
			this->p38->TabStop = false;
			this->p38->Tag = L"P";
			this->p38->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p36
			// 
			this->p36->BackColor = System::Drawing::Color::LawnGreen;
			this->p36->Location = System::Drawing::Point(342, 314);
			this->p36->Name = L"p36";
			this->p36->Size = System::Drawing::Size(60, 60);
			this->p36->TabIndex = 29;
			this->p36->TabStop = false;
			this->p36->Tag = L"P";
			this->p36->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p37
			// 
			this->p37->BackColor = System::Drawing::Color::LawnGreen;
			this->p37->Location = System::Drawing::Point(408, 314);
			this->p37->Name = L"p37";
			this->p37->Size = System::Drawing::Size(60, 60);
			this->p37->TabIndex = 28;
			this->p37->TabStop = false;
			this->p37->Tag = L"P";
			this->p37->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p34
			// 
			this->p34->BackColor = System::Drawing::Color::LawnGreen;
			this->p34->Location = System::Drawing::Point(144, 314);
			this->p34->Name = L"p34";
			this->p34->Size = System::Drawing::Size(60, 60);
			this->p34->TabIndex = 27;
			this->p34->TabStop = false;
			this->p34->Tag = L"P";
			this->p34->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p33
			// 
			this->p33->BackColor = System::Drawing::Color::LawnGreen;
			this->p33->Location = System::Drawing::Point(78, 314);
			this->p33->Name = L"p33";
			this->p33->Size = System::Drawing::Size(60, 60);
			this->p33->TabIndex = 26;
			this->p33->TabStop = false;
			this->p33->Tag = L"P";
			this->p33->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p32
			// 
			this->p32->BackColor = System::Drawing::Color::LawnGreen;
			this->p32->Location = System::Drawing::Point(12, 314);
			this->p32->Name = L"p32";
			this->p32->Size = System::Drawing::Size(60, 60);
			this->p32->TabIndex = 25;
			this->p32->TabStop = false;
			this->p32->Tag = L"P";
			this->p32->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p35
			// 
			this->p35->BackColor = System::Drawing::Color::LawnGreen;
			this->p35->Location = System::Drawing::Point(210, 314);
			this->p35->Name = L"p35";
			this->p35->Size = System::Drawing::Size(60, 60);
			this->p35->TabIndex = 35;
			this->p35->TabStop = false;
			this->p35->Tag = L"P";
			this->p35->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p27
			// 
			this->p27->BackColor = System::Drawing::Color::LawnGreen;
			this->p27->Location = System::Drawing::Point(210, 248);
			this->p27->Name = L"p27";
			this->p27->Size = System::Drawing::Size(60, 60);
			this->p27->TabIndex = 34;
			this->p27->TabStop = false;
			this->p27->Tag = L"P";
			this->p27->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p19
			// 
			this->p19->BackColor = System::Drawing::Color::LawnGreen;
			this->p19->Location = System::Drawing::Point(210, 182);
			this->p19->Name = L"p19";
			this->p19->Size = System::Drawing::Size(60, 60);
			this->p19->TabIndex = 33;
			this->p19->TabStop = false;
			this->p19->Tag = L"P";
			this->p19->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p11
			// 
			this->p11->BackColor = System::Drawing::Color::LawnGreen;
			this->p11->Location = System::Drawing::Point(210, 116);
			this->p11->Name = L"p11";
			this->p11->Size = System::Drawing::Size(60, 60);
			this->p11->TabIndex = 32;
			this->p11->TabStop = false;
			this->p11->Tag = L"P";
			this->p11->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p3
			// 
			this->p3->BackColor = System::Drawing::Color::LawnGreen;
			this->p3->Location = System::Drawing::Point(210, 50);
			this->p3->Name = L"p3";
			this->p3->Size = System::Drawing::Size(60, 60);
			this->p3->TabIndex = 31;
			this->p3->TabStop = false;
			this->p3->Tag = L"P";
			this->p3->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p39
			// 
			this->p39->BackColor = System::Drawing::Color::LawnGreen;
			this->p39->Location = System::Drawing::Point(540, 314);
			this->p39->Name = L"p39";
			this->p39->Size = System::Drawing::Size(60, 60);
			this->p39->TabIndex = 40;
			this->p39->TabStop = false;
			this->p39->Tag = L"P";
			this->p39->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p31
			// 
			this->p31->BackColor = System::Drawing::Color::LawnGreen;
			this->p31->Location = System::Drawing::Point(540, 248);
			this->p31->Name = L"p31";
			this->p31->Size = System::Drawing::Size(60, 60);
			this->p31->TabIndex = 39;
			this->p31->TabStop = false;
			this->p31->Tag = L"P";
			this->p31->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p23
			// 
			this->p23->BackColor = System::Drawing::Color::LawnGreen;
			this->p23->Location = System::Drawing::Point(540, 182);
			this->p23->Name = L"p23";
			this->p23->Size = System::Drawing::Size(60, 60);
			this->p23->TabIndex = 38;
			this->p23->TabStop = false;
			this->p23->Tag = L"P";
			this->p23->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p15
			// 
			this->p15->BackColor = System::Drawing::Color::LawnGreen;
			this->p15->Location = System::Drawing::Point(540, 116);
			this->p15->Name = L"p15";
			this->p15->Size = System::Drawing::Size(60, 60);
			this->p15->TabIndex = 37;
			this->p15->TabStop = false;
			this->p15->Tag = L"P";
			this->p15->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// p7
			// 
			this->p7->BackColor = System::Drawing::Color::LawnGreen;
			this->p7->Location = System::Drawing::Point(540, 50);
			this->p7->Name = L"p7";
			this->p7->Size = System::Drawing::Size(60, 60);
			this->p7->TabIndex = 36;
			this->p7->TabStop = false;
			this->p7->Tag = L"P";
			this->p7->Click += gcnew System::EventHandler(this, &SeatPicker::SeatClick);
			// 
			// picEkran
			// 
			this->picEkran->BackColor = System::Drawing::SystemColors::Desktop;
			this->picEkran->Location = System::Drawing::Point(27, 12);
			this->picEkran->Name = L"picEkran";
			this->picEkran->Size = System::Drawing::Size(561, 19);
			this->picEkran->TabIndex = 41;
			this->picEkran->TabStop = false;
			// 
			// lblEkran
			// 
			this->lblEkran->AutoSize = true;
			this->lblEkran->BackColor = System::Drawing::SystemColors::Desktop;
			this->lblEkran->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblEkran->Location = System::Drawing::Point(285, 15);
			this->lblEkran->Name = L"lblEkran";
			this->lblEkran->Size = System::Drawing::Size(44, 13);
			this->lblEkran->TabIndex = 42;
			this->lblEkran->Text = L"EKRAN";
			// 
			// butBack
			// 
			this->butBack->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->butBack->Location = System::Drawing::Point(510, 388);
			this->butBack->Name = L"butBack";
			this->butBack->Size = System::Drawing::Size(90, 30);
			this->butBack->TabIndex = 43;
			this->butBack->Text = L"Wróæ";
			this->butBack->UseVisualStyleBackColor = false;
			this->butBack->Click += gcnew System::EventHandler(this, &SeatPicker::butBack_Click);
			// 
			// lblCenaNapis
			// 
			this->lblCenaNapis->AutoSize = true;
			this->lblCenaNapis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblCenaNapis->Location = System::Drawing::Point(12, 393);
			this->lblCenaNapis->Name = L"lblCenaNapis";
			this->lblCenaNapis->Size = System::Drawing::Size(47, 18);
			this->lblCenaNapis->TabIndex = 44;
			this->lblCenaNapis->Text = L"Cena:";
			// 
			// lblCena
			// 
			this->lblCena->AutoSize = true;
			this->lblCena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblCena->Location = System::Drawing::Point(65, 393);
			this->lblCena->Name = L"lblCena";
			this->lblCena->Size = System::Drawing::Size(16, 18);
			this->lblCena->TabIndex = 45;
			this->lblCena->Text = L"0";
			// 
			// SeatPicker
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(612, 430);
			this->Controls->Add(this->lblCena);
			this->Controls->Add(this->lblCenaNapis);
			this->Controls->Add(this->butBack);
			this->Controls->Add(this->lblEkran);
			this->Controls->Add(this->picEkran);
			this->Controls->Add(this->p39);
			this->Controls->Add(this->p31);
			this->Controls->Add(this->p23);
			this->Controls->Add(this->p15);
			this->Controls->Add(this->p7);
			this->Controls->Add(this->p35);
			this->Controls->Add(this->p27);
			this->Controls->Add(this->p19);
			this->Controls->Add(this->p11);
			this->Controls->Add(this->p3);
			this->Controls->Add(this->p38);
			this->Controls->Add(this->p36);
			this->Controls->Add(this->p37);
			this->Controls->Add(this->p34);
			this->Controls->Add(this->p33);
			this->Controls->Add(this->p32);
			this->Controls->Add(this->p30);
			this->Controls->Add(this->p28);
			this->Controls->Add(this->p29);
			this->Controls->Add(this->p26);
			this->Controls->Add(this->p25);
			this->Controls->Add(this->p24);
			this->Controls->Add(this->p22);
			this->Controls->Add(this->p20);
			this->Controls->Add(this->p21);
			this->Controls->Add(this->p18);
			this->Controls->Add(this->p17);
			this->Controls->Add(this->p16);
			this->Controls->Add(this->p14);
			this->Controls->Add(this->p12);
			this->Controls->Add(this->p13);
			this->Controls->Add(this->p10);
			this->Controls->Add(this->p9);
			this->Controls->Add(this->p8);
			this->Controls->Add(this->p6);
			this->Controls->Add(this->p4);
			this->Controls->Add(this->p5);
			this->Controls->Add(this->p2);
			this->Controls->Add(this->p1);
			this->Controls->Add(this->p0);
			this->Controls->Add(this->butConfirm);
			this->Name = L"SeatPicker";
			this->Text = L"SeatPicker";
			this->Load += gcnew System::EventHandler(this, &SeatPicker::LoadRoom);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picEkran))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		Room* room = new Room(Seats); //Tablica ktora trzyma wartosc czy miejsce w sali jest zarezerwowane czy nie
		String^ dir = "Data\\Seanse\\"; //Œcie¿ka do pliku gdzie bêd¹ zapisywane seanse
		String^ accDir = "Data\\Accounts\\Reservation\\";
		String^ MovieName;
		String^ MovieData;
		String^ MovieTime;
		List<int>^ seatsReserved = gcnew List<int>();
		int fullPrice = 0;


#pragma endregion

	private: void SaveRezerwInUser()
	{
		StreamWriter^ writer = gcnew StreamWriter(accDir + GlobalClass::userLogin + ".txt", true);
		seatsReserved->Sort();
		for (int i = 0; i < seatsReserved->Count; i++)
		{
			writer->WriteLine(MovieName);
			writer->WriteLine(MovieData);
			writer->WriteLine(MovieTime);
			writer->WriteLine(seatsReserved[i]);
		}
		writer->Close();
	}


	private: System::Void butBack_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->Close();
	}

	private: System::Void LoadRoom(System::Object^  sender, System::EventArgs^  e)
	{
		room->FileReader(dir + MovieName + " " + MovieData + " " + MovieTime + ".txt");
		int x;
		for each (Control^ item in this->Controls)
		{
			if (item->Tag == "P")
			{
				x = Convert::ToInt32(item->Name->Remove(0, 1));
				if (room->Tab[x])
				{
					item->Enabled = false;
					item->BackColor = Color::Red;
				}
			}
		}
		if (!room->NoZero())
		{
			MessageBox::Show("Brak wolnych miejsc na wybrany seans", "Brak miejsc", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->Close();
		}
	}


	private: System::Void SeatClick(System::Object^  sender, System::EventArgs^  e)
	{

		PictureBox^ buff = (PictureBox^)sender;
		int x = Convert::ToInt32(buff->Name->Remove(0, 1));

		if (room->Tab[x])
		{
			buff->BackColor = Color::LawnGreen;
			room->Tab[x] = !room->Tab[x];
			fullPrice -= Price;
			lblCena->Text = fullPrice + "";
			if (fullPrice == 0)
				butConfirm->Enabled = false;
			seatsReserved->Remove(x);

		}
		else
		{
			buff->BackColor = Color::Gold;
			room->Tab[x] = !room->Tab[x];
			fullPrice += Price;
			lblCena->Text = fullPrice + "";
			butConfirm->Enabled = true;
			seatsReserved->Add(x);
		}
	}

	private: System::Void butConfirm_Click(System::Object^  sender, System::EventArgs^  e)
	{
		room->FileWriter(dir + MovieName + " " + MovieData + " " + MovieTime + ".txt");
		MessageBox::Show("Bilety zosta³y kupione\nCena do zap³aty przy kasie " + fullPrice + " z³\nOdbiór biletów mo¿liwy do 30 minut przed rozpoczêciem seansu", "Rezerwacja udana", MessageBoxButtons::OK, MessageBoxIcon::Information);
		SaveRezerwInUser();
		GlobalClass::Reserv = true;
		this->Close();
	}



	};
}
