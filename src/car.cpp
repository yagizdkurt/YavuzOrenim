#include "car.hpp"

void car::accelerate(float amount) {
    speed += amount;
}

void car::brake(float amount) {
    speed -= amount;
    if (speed < 0) speed = 0;
}

void car::refuel(float amount) {
    fuel += amount;
}

void car::drive(float time) {
    if (fuel <= 0) return; // Can't drive without fuel
    float distance_traveled = speed * time;
    distance += distance_traveled;
    fuel -= distance_traveled * 0.1; // Assume fuel consumption rate
    if (fuel < 0) fuel = 0;
}

void car::init() {
    fuel = 100.0f; // Full tank
    distance = 0.0f;
    speed = 0.0f;
    EmptyObject = false;
}