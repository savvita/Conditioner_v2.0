#pragma once
#include<iostream>
#include "Room.h"

class Conditioner
{
private:
	int temperature;
	bool state;
	Room* room;

public:
	explicit Conditioner(Room& room);

	void turnOn();
	void turnOff();

	void setTemperature(int temperature);

	inline int getCurrentTemperature() const
	{
		return this->room->getTemperature();
	}
};

