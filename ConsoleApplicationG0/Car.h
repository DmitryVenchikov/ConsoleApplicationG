#pragma once
#ifndef CAR_H
#define CAR_H

class Car {
public:
    Car();                 // Конструктор по умолчанию
    Car(const char* model); // Конструктор с параметрами
    ~Car();                // Деструктор

    void setModel(const char* model);
    const char* getModel() const;

private:
    char* m_model;
};

#endif // CAR_H