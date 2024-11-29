#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <stdexcept>
#include <string>

// Класс Array с обработкой исключений
class Array {
private:
    int* data;
    size_t size;

public:
    // Конструктор
    Array(size_t size);

    // Деструктор
    ~Array();

    // Доступ к элементу по индексу с обработкой исключений
    int& operator[](size_t index);

    // Получить размер массива
    size_t getSize() const;

    // Исключения
    class IndexOutOfBounds : public std::out_of_range {
    public:
        explicit IndexOutOfBounds(size_t index);
    };

    class InvalidSize : public std::invalid_argument {
    public:
        explicit InvalidSize(size_t size);
    };
};

#endif // ARRAY_H
