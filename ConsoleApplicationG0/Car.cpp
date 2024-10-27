#include "Car.h"
#include <cstring> // Для использования strcpy
#pragma warning(disable : 4996)
Car::Car() {
    m_model = nullptr;
}

Car::Car(const char* model) {
    if (model != nullptr) {
        size_t length = strlen(model) + 1; // Длина строки плюс нулевой символ
        m_model = new char[length];
        strcpy(m_model, model);
    }
}

Car::~Car() {
    delete[] m_model;
}

void Car::setModel(const char* model) {
    if (m_model != nullptr) { // Если модель уже была установлена, освобождаем память
        delete[] m_model;
    }

    if (model == nullptr) {  // Если новая модель пустая, устанавливаем nullptr
        m_model = nullptr;
    }
    else {
        size_t length = strlen(model) + 1;  // Длина новой модели плюс нулевой символ
        m_model = new char[length];         // Выделяем новую память
        strcpy(m_model, model);             // Копируем новую модель
    }
}

const char* Car::getModel() const {
    return m_model ? m_model : "";
}
