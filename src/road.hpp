#pragma once
#include "Includes.hpp"

class road {
public:
void addCar(car newCar);
void removeCar(car oldCar);
void simulateTraffic();
void printCars();
car cars[10];

private:


};