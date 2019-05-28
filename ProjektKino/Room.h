#pragma once
using namespace System;
using namespace System::IO;

class Room
{
public:
	bool* Tab;
	int Lenght;
	int Height, Width;
	void FileReader(String^);
	void FileWriter(String^);
	bool NoZero();

	Room();
	Room(int x, int, int);
	~Room();

};

