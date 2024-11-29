#include "MyClass.h"

// Конструктор
MyClass::MyClass(int id, const std::string& name) : id(id), name(name) {}

// Реализация дружественной функции
std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
    os << "MyClass { id: " << obj.id << ", name: \"" << obj.name << "\" }";
    return os;
}
