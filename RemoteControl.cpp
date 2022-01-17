#include "RemoteControl.h"

void RemoteControl::turOn(Conditioner& cond) const
{
	cond.turnOn();
}

void RemoteControl::turOff(Conditioner& cond) const
{
	cond.turnOff();
}

void RemoteControl::setTemperature(Conditioner& cond, int temperature) const
{
	cond.setTemperature(temperature);
}
