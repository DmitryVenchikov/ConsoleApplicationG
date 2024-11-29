#include "Complex.h"

// �����������
Complex::Complex(double r, double i) : real(r), imag(i) {}

// ���������� ��������� ��������
Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

// ���������� ��������� ���������
Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imag - other.imag);
}

// ���������� �������� ������
Complex Complex::operator-() const {
    return Complex(-real, -imag);
}

// ���������� ��������� ���������
bool Complex::operator==(const Complex& other) const {
    return real == other.real && imag == other.imag;
}

// ���������� ��������� ��������������
double Complex::operator[](int index) const {
    if (index == 0) return real;
    if (index == 1) return imag;
    throw out_of_range("Index must be 0 or 1");
}

// ����� ������
void Complex::display() const {
    cout << real << " + " << imag << "i" << endl;
}