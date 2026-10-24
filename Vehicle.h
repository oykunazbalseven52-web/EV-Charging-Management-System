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
    virtual ~Vehicle();

    std::string getBrand();
    std::string getModel();
    double getBatteryCapacity();
    double getBatteryLevel();

    void setBatteryLevel(double level);
    virtual void charge(double amount);

    virtual double calculateChargingTime(double chargingPower) = 0;
    virtual double calculateChargingCost(double electricityPrice);
};
