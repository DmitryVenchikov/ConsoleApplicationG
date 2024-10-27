#pragma once
#ifndef F1CAR_H
#define F1CAR_H

#include "Car.h"

class F1Car : public Car {
public:
    explicit F1Car(int maxSpeed);

    int getMaxSpeed() const override;
    void drive() override;

private:
    int m_maxSpeed;
};

#endif // F1CAR_H