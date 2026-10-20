
#pragma once
#include "Vehicle.h"

class ElectricBike : public Vehicle
{
private:
    int pedalAssistLevel;

public:
    ElectricBike(std::string b, std::string m, double capacity, double level, int assistLevel);

    int getPedalAssistLevel();
};
