#pragma once
using namespace System;
using namespace System::IO;

class Room
{
public:
	bool* Tab;
	int Lenght;
	void FileReader(String^); // otwiera plik na dany seans o danej godzienie, jesli go nie ma to go tworzy
	void FileWriter(String^); //wpisueje do pliku zarezerwoane miejsca
	bool NoZero(); //sprawdza czy w tabeli jest zerowy element czyli puste miesjce w sali

	Room();
	Room(int);
	~Room();

};

