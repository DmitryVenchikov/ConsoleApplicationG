#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>
#include <string>

// Класс для демонстрации
class MyClass {
private:
    int id;
    std::string name;

public:
    // Конструктор
    MyClass(int id, const std::string& name);

    // Дружественная функция для перегрузки оператора <<
    friend std::ostream& operator<<(std::ostream& os, const MyClass& obj);
};

#endif // MYCLASS_H
