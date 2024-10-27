#pragma once
#ifndef RALLYCAR_H
#define RALLYCAR_H

#include "Car.h"

class RallyCar : public Car {
public:
    explicit RallyCar(int maxSpeed, bool isOffroad);

    int getMaxSpeed() const override;
    void drive() override;

private:
    int m_maxSpeed;
    bool m_isOffroad;
};

#endif // RALLYCAR_H