#pragma once

class car {
public:
float fuel;
float distance;
float speed;
bool EmptyObject;
car(){ EmptyObject = true; }

void init();
void accelerate(float amount);
void brake(float amount);
void refuel(float amount);
void drive(float time);

bool operator==(const car& other) const {return (other == *this);}
};

