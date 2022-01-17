#include "Room.h"

Room::Room(int temperature) :temperature{ temperature }
{
}

Room::Room(const Room& room) : temperature{ room.temperature }
{
}

//void Room::increaseTemperature()
//{
//    this->temperature++;
//}
//
//void Room::decreaseTemperature()
//{
//    this->temperature--;
//}
