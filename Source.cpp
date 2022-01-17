#include <iostream>
#include "RemoteControl.h"

int main()
{
    RemoteControl r;
    Conditioner c(45);

    std::cout << "Current: ";
    std::cout << c.getCurrentTemperature() << "\n";
    std::cout << "Trying set 25 degrees:\n";
    r.setTemperature(c, 25);
    std::cout << c.getCurrentTemperature() << "\n";
    std::cout << "==============================\n";
    std::cout << "Trying set 30 degrees:\n";
    r.setTemperature(c, 30);
    std::cout << c.getCurrentTemperature() << "\n";
    std::cout << "==============================\n";

    std::cout << "\n\nTurn on:\n";
    r.turOn(c);
    std::cout << "Current: ";
    std::cout << c.getCurrentTemperature() << "\n";
    std::cout << "Trying set 25 degrees:\n";
    r.setTemperature(c, 25);
    std::cout << c.getCurrentTemperature() << "\n";
    std::cout << "==============================\n";
    std::cout << "Trying set 30 degrees:\n";
    r.setTemperature(c, 30);
    std::cout << c.getCurrentTemperature() << "\n";
    std::cout << "==============================\n";
    std::cout << "Trying set 10 degrees:\n";
    r.setTemperature(c, 10);
    std::cout << c.getCurrentTemperature() << "\n";
    std::cout << "==============================\n";

}

