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
		while (i++ < Lenght)
			writer->WriteLine("0");
		writer->Close();
	}
}

Room::Room()
{
}

Room::Room(int x, int H, int W)
{
	Tab = new bool[x];
	Width = W;
	Height = H;
	Lenght = H * W;
}

Room::~Room()
{
	delete [] Tab;
}