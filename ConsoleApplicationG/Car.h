#ifndef CAR_H
#define CAR_H

class Car {
public:
    virtual ~Car() {} // Виртуальный деструктор для корректной очистки памяти

    virtual int getMaxSpeed() const = 0; // Чистая виртуальная функция
};

#endif // CAR_H