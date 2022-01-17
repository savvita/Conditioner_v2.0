#include "Room.h"

Room::Room(int temperature) :temperature{ temperature }
{
}

void Room::increaseTemperature()
{
    this->temperature++;
}

void Room::decreaseTemperature()
{
    this->temperature--;
}
