#pragma once
#include "Vehicle.h"

class ElectricCar : public Vehicle
{
private:
    int numberOfDoors;

public:
    ElectricCar(std::string b, std::string m, double capacity, double level, int doors);
    int getNumberOfDoors();

    double calculateChargingTime(double chargingPower) override;
};