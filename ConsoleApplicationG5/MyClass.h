#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>
#include <string>

// ����� ��� ������������
class MyClass {
private:
    int id;
    std::string name;

public:
    // �����������
    MyClass(int id, const std::string& name);

    // ������������� ������� ��� ���������� ��������� <<
    friend std::ostream& operator<<(std::ostream& os, const MyClass& obj);
};

#endif // MYCLASS_H
