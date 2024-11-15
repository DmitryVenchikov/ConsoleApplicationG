 
#pragma once
#ifndef CAR_H
#define CAR_H

class Car {
public:
    virtual ~Car() = default; // ����������� ����������

    virtual int getMaxSpeed() const = 0; // ������ ����������� �������
    virtual void drive() = 0;            // ������ ����������� �������
};

#endif // CAR_H