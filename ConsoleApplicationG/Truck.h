#pragma once


#include "Car.h"

class Truck : public Car {
public:
    Truck(int maxSpeed, double accelerationTime);
    Truck(int maxSpeed, double accelerationTime, double weight);
    ~Truck();

    int getMaxSpeed() const override; // Реализуем чистую виртуальную функцию
    double getAccelerationTime() const;
    void setAccelerationTime(double accelerationTime);
    void setWeigth(double weigth);
    double getWeigth() const;

private:
    int m_maxSpeed;
    double m_accelerationTime;
    double m_weight;
};

 