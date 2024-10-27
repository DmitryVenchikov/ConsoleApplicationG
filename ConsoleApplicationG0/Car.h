#pragma once
#ifndef CAR_H
#define CAR_H

class Car {
public:
    Car();                 // ����������� �� ���������
    Car(const char* model); // ����������� � �����������
    ~Car();                // ����������

    void setModel(const char* model);
    const char* getModel() const;

private:
    char* m_model;
};

#endif // CAR_H