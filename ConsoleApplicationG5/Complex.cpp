#include "Complex.h"

// Конструктор
Complex::Complex(double r, double i) : real(r), imag(i) {}

// Перегрузка оператора сложения
Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

// Перегрузка оператора вычитания
Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imag - other.imag);
}

// Перегрузка унарного минуса
Complex Complex::operator-() const {
    return Complex(-real, -imag);
}

// Перегрузка оператора сравнения
bool Complex::operator==(const Complex& other) const {
    return real == other.real && imag == other.imag;
}

// Перегрузка оператора индексирования
double Complex::operator[](int index) const {
    if (index == 0) return real;
    if (index == 1) return imag;
    throw out_of_range("Index must be 0 or 1");
}

// Метод вывода
void Complex::display() const {
    cout << real << " + " << imag << "i" << endl;
}