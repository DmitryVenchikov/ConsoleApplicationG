#include "Truck.h"
#include <iostream>

// �����������
Truck::Truck(int maxSpeed, double accelerationTime)
    : m_maxSpeed(maxSpeed), m_accelerationTime(accelerationTime) {}

Truck::Truck(int maxSpeed, double accelerationTime, double weight)
    : m_maxSpeed(maxSpeed), m_accelerationTime(accelerationTime), m_weight(weight){}

Truck::~Truck() {
    std::cout << "Truck ���������\n";
}

// ���������� ������ ����������� �������
int Truck::getMaxSpeed() const {
    return m_maxSpeed;
}

// ������ ������� �������
double Truck::getAccelerationTime() const {
    return m_accelerationTime;
}

// ������ ������� �������
void Truck::setAccelerationTime(double accelerationTime) {
    m_accelerationTime = accelerationTime;
}

// ������ ����
void Truck::setWeigth(double weight) {
    m_weight = weight;
}

// ������ ������� �������
double Truck::getWeigth() const {
    return m_weight;
}