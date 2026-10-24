
#include <iostream>
#include <string>
#include <limits>
#include "ElectricCar.h"
#include "ElectricBike.h"

void showChargingResults(Vehicle *vehicle, double power, double price)
{
    double requiredEnergy =
        vehicle->getBatteryCapacity() *
        (100 - vehicle->getBatteryLevel()) / 100;

    std::cout << "\n--- CHARGING RESULTS ---" << std::endl;

    std::cout << "Brand: " << vehicle->getBrand() << std::endl;
    std::cout << "Model: " << vehicle->getModel() << std::endl;

    std::cout << "Required Energy: "
              << requiredEnergy << " kWh" << std::endl;

    std::cout << "Charging Time: "
              << vehicle->calculateChargingTime(power)
              << " hours" << std::endl;

    std::cout << "Charging Cost: "
              << vehicle->calculateChargingCost(price)
              << " TL" << std::endl;
}

void handleElectricCar()
{
    std::string brand, model;
    double capacity, level, power, price;
    int doors;

    std::cout << "\n--- ELECTRIC CAR ---" << std::endl;

    std::cout << "Enter brand: ";
    std::cin >> brand;

    std::cout << "Enter model: ";
    std::cin >> model;

    std::cout << "Enter battery capacity (kWh): ";
    std::cin >> capacity;

    std::cout << "Enter battery level (%): ";
    std::cin >> level;

    std::cout << "Enter number of doors: ";
    std::cin >> doors;

    std::cout << "Enter charging power (kW): ";
    std::cin >> power;

    std::cout << "Enter electricity price (TL/kWh): ";
    std::cin >> price;

    if (!std::cin || capacity <= 0 || level < 0 ||
        level > 100 || doors <= 0 || power <= 0 ||
        price < 0)
    {
        std::cout << "Invalid vehicle or charging information!" << std::endl;

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }

    ElectricCar car1(brand, model, capacity, level, doors);

    std::cout << "Doors: "
              << car1.getNumberOfDoors() << std::endl;

    Vehicle *vehicle = &car1;

    showChargingResults(vehicle, power, price);

    double amount;

    std::cout << "Enter charging amount (%): ";
    std::cin >> amount;

    if (!std::cin || amount <= 0)
    {
        std::cout << "Invalid charging amount!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }

    vehicle->charge(amount);

    std::cout << "Updated Battery Level: "
              << vehicle->getBatteryLevel()
              << "%" << std::endl;
}

void handleElectricBike()
{
    std::string brand, model;
    double capacity, level, power, price;
    int assistLevel;

    std::cout << "\n--- ELECTRIC BIKE ---" << std::endl;

    std::cout << "Enter brand: ";
    std::cin >> brand;

    std::cout << "Enter model: ";
    std::cin >> model;

    std::cout << "Enter battery capacity (kWh): ";
    std::cin >> capacity;

    std::cout << "Enter battery level (%): ";
    std::cin >> level;

    std::cout << "Enter pedal assist level (0-5): ";
    std::cin >> assistLevel;

    std::cout << "Enter charging power (kW): ";
    std::cin >> power;

    std::cout << "Enter electricity price (TL/kWh): ";
    std::cin >> price;

    if (!std::cin || capacity <= 0 || level < 0 ||
        level > 100 || assistLevel < 0 || assistLevel > 5 ||
        power <= 0 || price < 0)
    {
        std::cout << "Invalid bike or charging information!" << std::endl;

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }

    ElectricBike bike1(brand, model, capacity, level, assistLevel);

    std::cout << "Pedal Assist Level: "
              << bike1.getPedalAssistLevel() << std::endl;

    Vehicle *vehicle = &bike1;

    showChargingResults(vehicle, power, price);

    double amount;

    std::cout << "Enter charging amount (%): ";
    std::cin >> amount;

    if (!std::cin || amount <= 0)
    {
        std::cout << "Invalid charging amount!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }

    vehicle->charge(amount);

    std::cout << "Updated Battery Level: "
              << vehicle->getBatteryLevel()
              << "%" << std::endl;
}

int main()
{
    int choice = -1;

    while (choice != 0)
    {
        std::cout << "\n===== EV CHARGING MANAGEMENT SYSTEM =====" << std::endl;
        std::cout << "1. Electric Car" << std::endl;
        std::cout << "2. Electric Bike" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter your choice: ";

        if (!(std::cin >> choice))
        {
            std::cout << "Invalid input!" << std::endl;

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        switch (choice)
        {
        case 1:
            handleElectricCar();
            break;

        case 2:
            handleElectricBike();
            break;

        case 0:
            std::cout << "Exiting program..." << std::endl;
            break;

        default:
            std::cout << "Invalid choice!" << std::endl;
        }
    }

    return 0;
}
