#pragma once
#include <string>
class Vehicle
{
private:
    std::string brand;
    std::string model;
    double batteryCapacity;
    double batteryLevel;

public:
    Vehicle(std::string b, std::string m, double capacity, double level);

    std::string getBrand();
    std::string getModel();
    double getBatteryCapacity();
    double getBatteryLevel();

    void setBatteryLevel(double level);
    void charge(double amount);

    double calculateChargingTime(double chargingPower);
    double calculateChargingCost(double electricityPrice);
};
