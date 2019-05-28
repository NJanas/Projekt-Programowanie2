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

	Room();
	Room(int x, int, int);
	~Room();

};

