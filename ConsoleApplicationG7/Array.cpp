#include "Array.h"

// �����������: ��������� ������ �������
Array::Array(size_t size) : size(size), data(nullptr) {
    if (size == 0 || size > 10000) { // ������� ��� ������������ �����������
        throw InvalidSize(size);
    }
    data = new int[size] {};
}

// ����������: ����������� ������
Array::~Array() {
    delete[] data;
}

// ���������� ��������� [] � ��������� ������
int& Array::operator[](size_t index) {
    if (index >= size) {
        throw IndexOutOfBounds(index);
    }
    return data[index];
}

// ���������� ������ �������
size_t Array::getSize() const {
    return size;
}

// ���������� ���������� IndexOutOfBounds
Array::IndexOutOfBounds::IndexOutOfBounds(size_t index)
    : std::out_of_range("Index out of bounds: " + std::to_string(index)) {}

// ���������� ���������� InvalidSize
Array::InvalidSize::InvalidSize(size_t size)
    : std::invalid_argument("Invalid size: " + std::to_string(size)) {}
