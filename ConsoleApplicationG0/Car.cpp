#include "Car.h"
#include <cstring> // ��� ������������� strcpy
#pragma warning(disable : 4996)
Car::Car() {
    m_model = nullptr;
}

Car::Car(const char* model) {
    if (model != nullptr) {
        size_t length = strlen(model) + 1; // ����� ������ ���� ������� ������
        m_model = new char[length];
        strcpy(m_model, model);
    }
}

Car::~Car() {
    delete[] m_model;
}

void Car::setModel(const char* model) {
    if (m_model != nullptr) { // ���� ������ ��� ���� �����������, ����������� ������
        delete[] m_model;
    }

    if (model == nullptr) {  // ���� ����� ������ ������, ������������� nullptr
        m_model = nullptr;
    }
    else {
        size_t length = strlen(model) + 1;  // ����� ����� ������ ���� ������� ������
        m_model = new char[length];         // �������� ����� ������
        strcpy(m_model, model);             // �������� ����� ������
    }
}

const char* Car::getModel() const {
    return m_model ? m_model : "";
}
