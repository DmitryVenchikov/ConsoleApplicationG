
#include "F1Car.h"
#include <iostream>

F1Car::F1Car(int maxSpeed) : m_maxSpeed(maxSpeed) {}

F1Car::~F1Car() {
    std::cout << "F1 crashed" << std::endl;
}

int F1Car::getMaxSpeed() const {
    return m_maxSpeed;
}

void F1Car::drive() {
    std::cout << "Driving an F1 car at high speed!" << std::endl;
}