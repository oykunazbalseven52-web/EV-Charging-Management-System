#include "Vehicle.h"
Vehicle::Vehicle(std::string b, std::string m, double capacity, double level)
{
    brand = b;
    model = m;
    batteryCapacity = capacity;
    batteryLevel = level;
}

Vehicle::~Vehicle()
{
}

std::string Vehicle::getBrand()
{
    return brand;
}

std::string Vehicle::getModel()
{
    return model;
}

double Vehicle::getBatteryCapacity()
{
    return batteryCapacity;
}

double Vehicle::getBatteryLevel()
{
    return batteryLevel;
}

void Vehicle::setBatteryLevel(double level)
{
    if (level >= 0 && level <= 100)
    {
        batteryLevel = level;
    }
}

void Vehicle::charge(double amount)
{
    if (amount > 0)
    {
        if (batteryLevel + amount > 100)
        {
            batteryLevel = 100;
        }
        else
        {
            batteryLevel += amount;
        }
    }
}

double Vehicle::calculateChargingCost(double electricityPrice)
{
    if (electricityPrice < 0)
    {
        return -1;
    }

    double requiredEnergy = batteryCapacity * (100 - batteryLevel) / 100;

    double chargingCost = requiredEnergy * electricityPrice;

    return chargingCost;
}
