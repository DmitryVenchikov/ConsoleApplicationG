#include "FormulaOneCar.h"

// Конструктор
FormulaOneCar::FormulaOneCar(int maxSpeed, double accelerationTime)
    : m_maxSpeed(maxSpeed), m_accelerationTime(accelerationTime) {}

// Реализация чистой виртуальной функции
int FormulaOneCar::getMaxSpeed() const {
    return m_maxSpeed;
}

// Геттер времени разгона
double FormulaOneCar::getAccelerationTime() const {
    return m_accelerationTime;
}

// Сеттер времени разгона
void FormulaOneCar::setAccelerationTime(double accelerationTime) {
    m_accelerationTime = accelerationTime;
}