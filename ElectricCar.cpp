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