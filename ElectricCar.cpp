#include "ElectricCar.h"
ElectricCar::ElectricCar(std::string b, std::string m, double capacity, double level, int doors)
    : Vehicle(b, m, capacity, level)
{
    numberOfDoors = doors;
}
int ElectricCar::getNumberOfDoors()
{
    return numberOfDoors;
}

double ElectricCar::calculateChargingTime(double chargingPower)
{
    if (chargingPower <= 0)
    {
        return -1;
    }
    double requiredEnergy = getBatteryCapacity() * (100 - getBatteryLevel()) / 100;
    double chargingTime = requiredEnergy / (chargingPower * 0.90);

    return chargingTime;
}