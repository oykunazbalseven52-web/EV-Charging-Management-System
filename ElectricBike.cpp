
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

double ElectricBike::calculateChargingTime(double chargingPower)
{
    if (chargingPower <= 0)
    {
        return -1;
    }
    double requiredEnergy = getBatteryCapacity() * (100 - getBatteryLevel()) / 100;
    double chargingTime = requiredEnergy / (chargingPower * 0.85);
    return chargingTime;
}