#pragma once

class Conditioner;

class Room
{
private:
	int temperature;

public:
	explicit Room(int temperature);
	explicit Room(const Room& room);

	inline int getTemperature() const
	{
		return this->temperature;
	}

	//void increaseTemperature();
	//void decreaseTemperature();

	friend class Conditioner;
};

