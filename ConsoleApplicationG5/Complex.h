#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex {
private:
    double real; // �������������� �����
    double imag; // ������ �����

public:
    // ������������
    Complex(double r = 0, double i = 0);

    // ���������� ����������
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator-() const; // ������� �����
    bool operator==(const Complex& other) const;
    double operator[](int index) const;

    // ����� ������
    void display() const;
};

#endif // COMPLEX_H