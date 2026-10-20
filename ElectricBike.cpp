
#include "ElectricBike.h"

ElectricBike::ElectricBike(std::string b, std::string m, double capacity, double level, int assistLevel)
    : Vehicle(b, m, capacity, level)
{
    if (assistLevel >= 0 && assistLevel <= 5)
    {
        pedalAssistLevel = assistLevel;
    }
    else
    {
        pedalAssistLevel = 0;
    }
}

int ElectricBike::getPedalAssistLevel()
{
    return pedalAssistLevel;
}
