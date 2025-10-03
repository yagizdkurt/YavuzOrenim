#include "road.hpp"

void road::addCar(car newCar) {
    for (int i = 0; i < 10; ++i) {
        if(!cars[i].EmptyObject){
            cars[i] = newCar;
            return;
        }
    }
}

void road::removeCar(car oldCar) {
    for (int i = 0; i < 10; ++i) {
        if(cars[i] ==oldCar){
            cars[i];
            break;
        }
    }
}

void road::simulateTraffic() {

}

void road::printCars() {
    for (int i = 0; i < 10; ++i) {
        if(!cars[i].EmptyObject){
            // Print car details (for simplicity, just printing a placeholder)
            printf("Car %d: Speed = %.2f, Fuel = %.2f, Distance = %.2f\n", i, cars[i].speed, cars[i].fuel, cars[i].distance);
        }
    }
}