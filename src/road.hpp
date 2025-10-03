#pragma once
#include "car.hpp"
#include <iostream>

class road {
public:
void addCar(car newCar);
void removeCar(car oldCar);
void simulateTraffic();
void printCars();
car cars[10];

private:


};