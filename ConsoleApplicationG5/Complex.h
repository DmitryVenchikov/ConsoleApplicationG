#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex {
private:
    double real; // Действительная часть
    double imag; // Мнимая часть

public:
    // Конструкторы
    Complex(double r = 0, double i = 0);

    // Перегрузка операторов
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator-() const; // Унарный минус
    bool operator==(const Complex& other) const;
    double operator[](int index) const;

    // Метод вывода
    void display() const;
};

#endif // COMPLEX_H