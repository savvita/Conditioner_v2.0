#include "Conditioner.h"

Conditioner::Conditioner() :temperature{ 20 }, state{ false }, room{ Room(20) }
{
}

Conditioner::Conditioner(int currentTemperature) : temperature{ currentTemperature }, state{ false }, room{ Room(currentTemperature) }
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
		if (this->room.getTemperature() < temperature)
		{
			while (this->room.getTemperature() != temperature)
			{
				this->room.increaseTemperature();
				std::cout << "Temperature: " << this->room.getTemperature() << "\n";
			}
		}
		else
		{
			while (this->room.getTemperature() != temperature)
			{
				this->room.decreaseTemperature();
				std::cout << "Temperature: " << this->room.getTemperature() << "\n";
			}
		}
	}
}

