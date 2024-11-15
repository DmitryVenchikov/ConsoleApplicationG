#include "Truck.h"
#include <iostream>

// Конструктор
Truck::Truck(int maxSpeed, double accelerationTime)
    : m_maxSpeed(maxSpeed), m_accelerationTime(accelerationTime) {}

Truck::Truck(int maxSpeed, double accelerationTime, double weight)
    : m_maxSpeed(maxSpeed), m_accelerationTime(accelerationTime), m_weight(weight){}

Truck::~Truck() {
    std::cout << "Truck уничтожен\n";
}

// Реализация чистой виртуальной функции
int Truck::getMaxSpeed() const {
    return m_maxSpeed;
}

// Геттер времени разгона
double Truck::getAccelerationTime() const {
    return m_accelerationTime;
}

// Сеттер времени разгона
void Truck::setAccelerationTime(double accelerationTime) {
    m_accelerationTime = accelerationTime;
}

// Сеттер веса
void Truck::setWeigth(double weight) {
    m_weight = weight;
}

// Геттер времени разгона
double Truck::getWeigth() const {
    return m_weight;
}