#pragma once
using namespace System;

// klasa której elemntem jest jedno zarezerwowane miejsce
namespace UserReservation
{
	public ref class URes
	{
	public: String^ Title;
	public: String^ Date;
	public: String^ Time;
	public: int Seat;
	};
}
