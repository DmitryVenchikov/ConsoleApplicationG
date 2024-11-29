#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <stdexcept>
#include <string>

// ����� Array � ���������� ����������
class Array {
private:
    int* data;
    size_t size;

public:
    // �����������
    Array(size_t size);

    // ����������
    ~Array();

    // ������ � �������� �� ������� � ���������� ����������
    int& operator[](size_t index);

    // �������� ������ �������
    size_t getSize() const;

    // ����������
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
