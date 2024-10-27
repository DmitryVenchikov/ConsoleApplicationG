#include "FormulaOneCar.h"

// �����������
FormulaOneCar::FormulaOneCar(int maxSpeed, double accelerationTime)
    : m_maxSpeed(maxSpeed), m_accelerationTime(accelerationTime) {}

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