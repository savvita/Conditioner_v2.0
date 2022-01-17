#pragma once
class Room
{
private:
	int temperature;

public:
	explicit Room(int temperature);
	inline int getTemperature() const
	{
		return this->temperature;
	}

	void increaseTemperature();
	void decreaseTemperature();
};

