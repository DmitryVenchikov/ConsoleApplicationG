#ifndef CAR_H
#define CAR_H

class Car {
public:
    virtual ~Car() {} // ����������� ���������� ��� ���������� ������� ������

    virtual int getMaxSpeed() const = 0; // ������ ����������� �������
};

#endif // CAR_H