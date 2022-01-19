#include "Conditioner.h"

Conditioner::Conditioner(Room& room) : temperature{ room.temperature }, state{ false }, room{ &room }
{
}

void Conditioner::turnOn()
{
	this->state = true;
}

void Conditioner::turnOff()
{
	this->state = false;
}

void Conditioner::setTemperature(int temperature)
{
	if (this->state)
	{
		if (this->room->getTemperature() < temperature)
		{
			while (this->room->getTemperature() != temperature)
			{
				this->temperature = temperature;
				this->room->temperature++;
				std::cout << "Temperature: " << this->room->getTemperature() << "\n";
			}
		}
		else
		{
			while (this->room->getTemperature() != temperature)
			{
				this->temperature = temperature;
				this->room->temperature--;
				std::cout << "Temperature: " << this->room->getTemperature() << "\n";
			}
		}
	}
}


