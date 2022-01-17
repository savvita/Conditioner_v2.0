#pragma once
#include"Conditioner.h"

class RemoteControl
{
public:
	void turOn(Conditioner& cond) const;
	void turOff(Conditioner& cond) const;

	void setTemperature(Conditioner& cond, int temperature) const;
};

