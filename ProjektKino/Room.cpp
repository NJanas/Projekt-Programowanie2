#include "Room.h"


void Room::FileReader(String ^ a)
{

	try
	{
		StreamReader^ reader = gcnew StreamReader(a, System::Text::Encoding::Default);
		String^ line;
		int i = 0;
		while (line = reader->ReadLine())
			Tab[i++] = (line == "1");
		reader->Close();
	}
	catch (...)
	{
		StreamWriter^ writer = gcnew StreamWriter(a);
		int i = 0;
		while (i < Lenght)
		{
			writer->WriteLine("0");
			Tab[i++] = false;
		}
		writer->Close();
	}
}

void Room::FileWriter(String ^a)
{
	StreamWriter^ writer = gcnew StreamWriter(a);
	int i = 0;
	while (i < Lenght)
		writer->WriteLine(Tab[i++] ? "1" : "0");
	writer->Close();
}

void Room::Change(int k)
{
	Tab[k] = !Tab[k];
}

bool Room::NoZero()
{
	int i = 0;
	while (i<Lenght)
	{
		if (!Tab[i++])
			return true;
	}
	return false;
}

Room::Room()
{
}

Room::Room(int x)
{
	Tab = new bool[x];
	Lenght = x;
}

Room::~Room()
{
	delete[] Tab;
}