#pragma once

class Conditioner;

class Room
{
private:
	int temperature;

public:
	explicit Room(int temperature) :temperature{ temperature }
	{

	}

	inline int getTemperature() const
	{
		return this->temperature;
	}

	friend class Conditioner;
};

