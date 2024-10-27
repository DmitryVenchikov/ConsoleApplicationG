#include "RallyCar.h"
#include <iostream>

RallyCar::RallyCar(int maxSpeed, bool isOffroad) : m_maxSpeed(maxSpeed), m_isOffroad(isOffroad) {}

int RallyCar::getMaxSpeed() const {
    return m_maxSpeed;
}

void RallyCar::drive() {
    if (m_isOffroad) {
        std::cout << "Driving a rally car off-road!" << std::endl;
    }
    else {
        std::cout << "Driving a rally car on the road!" << std::endl;
    }
}