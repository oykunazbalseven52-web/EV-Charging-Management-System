# EV Charging Management System

A console-based Electric Vehicle Charging Management System developed in **C++** using Object-Oriented Programming (OOP) principles.

The application allows users to manage electric cars and electric bikes, calculate estimated charging times, and determine charging costs based on battery capacity, current battery level, charging power, and electricity price.

## Features

- Electric car and electric bike support
- Interactive console menu
- User-defined vehicle information
- Battery capacity and level management
- Estimated charging time calculation
- Estimated charging cost calculation
- Input validation for vehicle and charging information
- Object-Oriented Programming design

## Technologies Used

- C++
- C++17
- Object-Oriented Programming (OOP)
- Visual Studio Code
- Clang++ Compiler

## OOP Concepts

**Abstraction:** The `Vehicle` class represents common vehicle properties and charging operations.

**Encapsulation:** Vehicle attributes are private and accessed through public methods.

**Inheritance:** The `ElectricCar` and `ElectricBike` classes inherit shared functionality from the `Vehicle` class.

## Project Structure

```text
EV-Charging-Management-System/
├── Vehicle.h
├── Vehicle.cpp
├── ElectricCar.h
├── ElectricCar.cpp
├── ElectricBike.h
├── ElectricBike.cpp
├── main.cpp
└── README.md
```

## Charging Calculations

**Required Energy (kWh)**

```text
Battery Capacity × (100 - Battery Level) / 100
```

**Charging Time (hours)**

```text
Required Energy / Charging Power
```

**Charging Cost**

```text
Required Energy × Electricity Price
```

Calculations are simplified estimates that assume constant charging power and do not account for charging losses.

## Example Usage

```text
===== EV CHARGING MANAGEMENT SYSTEM =====
1. Electric Car
2. Electric Bike
0. Exit

Enter your choice: 1

--- ELECTRIC CAR ---
Enter brand: Tesla
Enter model: Model3
Enter battery capacity (kWh): 60
Enter battery level (%): 40
Enter number of doors: 4
Enter charging power (kW): 10
Enter electricity price (TL/kWh): 3

--- CHARGING RESULTS ---
Brand: Tesla
Model: Model3
Doors: 4
Required Energy: 36 kWh
Charging Time: 3.6 hours
Charging Cost: 108 TL
```

## How to Run

Compile the source files using a C++17-compatible compiler:

```bash
clang++ -std=c++17 main.cpp Vehicle.cpp ElectricCar.cpp ElectricBike.cpp -o program
```

Run the application:

```bash
./program
```

Depending on the macOS development environment, additional SDK include paths may be required.

## Future Improvements

- Support for multiple saved vehicles
- Charging history
- Persistent data storage
- Improved input validation
- Graphical user interface

## Project Purpose

This project was developed to practice Object-Oriented Programming concepts in C++ and apply them to a practical electric vehicle charging scenario.