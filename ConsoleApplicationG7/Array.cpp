#include "Array.h"

// Конструктор: проверяет размер массива
Array::Array(size_t size) : size(size), data(nullptr) {
    if (size == 0 || size > 10000) { // Условие для демонстрации ограничения
        throw InvalidSize(size);
    }
    data = new int[size] {};
}

// Деструктор: освобождает память
Array::~Array() {
    delete[] data;
}

// Перегрузка оператора [] с проверкой границ
int& Array::operator[](size_t index) {
    if (index >= size) {
        throw IndexOutOfBounds(index);
    }
    return data[index];
}

// Возвращает размер массива
size_t Array::getSize() const {
    return size;
}

// Реализация исключения IndexOutOfBounds
Array::IndexOutOfBounds::IndexOutOfBounds(size_t index)
    : std::out_of_range("Index out of bounds: " + std::to_string(index)) {}

// Реализация исключения InvalidSize
Array::InvalidSize::InvalidSize(size_t size)
    : std::invalid_argument("Invalid size: " + std::to_string(size)) {}
