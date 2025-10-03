//YavuzTest
#include <iostream>
#include "car.hpp"
#include "road.hpp"

int main() {
    road myRoad;
    car car1;
    car1.init();


    for (int i = 0; i < 10; ++i) {
        std::cout << myRoad.cars[i].EmptyObject << std::endl;
    }

    std::cin.get();
    return 0;
}