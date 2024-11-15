#include "FormulaOneCar.h"
#include <iostream>

// �����������
FormulaOneCar::FormulaOneCar(int maxSpeed, double accelerationTime)
    : m_maxSpeed(maxSpeed), m_accelerationTime(accelerationTime) {}

FormulaOneCar::~FormulaOneCar() {
    std::cout << "FormulaOneCar ���������\n";
}

// ���������� ������ ����������� �������
int FormulaOneCar::getMaxSpeed() const {
    return m_maxSpeed;
}

// ������ ������� �������
double FormulaOneCar::getAccelerationTime() const {
    return m_accelerationTime;
}

// ������ ������� �������
void FormulaOneCar::setAccelerationTime(double accelerationTime) {
    m_accelerationTime = accelerationTime;
}