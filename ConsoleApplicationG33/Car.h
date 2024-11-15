 
#pragma once
#ifndef CAR_H
#define CAR_H

class Car {
public:
    virtual ~Car() = default; // Виртуальный деструктор

    virtual int getMaxSpeed() const = 0; // Чистая виртуальная функция
    virtual void drive() = 0;            // Чистая виртуальная функция
};

#endif // CAR_H