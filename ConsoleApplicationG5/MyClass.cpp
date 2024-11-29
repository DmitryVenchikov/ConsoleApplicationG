#include "MyClass.h"

// �����������
MyClass::MyClass(int id, const std::string& name) : id(id), name(name) {}

// ���������� ������������� �������
std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
    os << "MyClass { id: " << obj.id << ", name: \"" << obj.name << "\" }";
    return os;
}
