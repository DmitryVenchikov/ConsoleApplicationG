#pragma once
#ifndef FORMULA_ONE_CAR_H
#define FORMULA_ONE_CAR_H

#include "Car.h"

class FormulaOneCar : public Car {
public:
    FormulaOneCar(int maxSpeed, double accelerationTime);

    int getMaxSpeed() const override; // Реализуем чистую виртуальную функцию
    double getAccelerationTime() const;
    void setAccelerationTime(double accelerationTime);

private:
    int m_maxSpeed;
    double m_accelerationTime;
};

#endif // FORMULA_ONE_CAR_H