#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>

template <typename T>
class Card {
private:
    std::string cardNumber;
    std::string ownerName;
    T balance;

    // ������������� ��������
    T creditLimit;    // ������ ��� ��������� ����
    T bonusPoints;    // ������ ��� �������� ����

public:
    // ����������� ��� ������� ����
    Card(const std::string& number, const std::string& owner, T bal)
        : cardNumber(number), ownerName(owner), balance(bal), creditLimit(0), bonusPoints(0) {}

    // ����������� ��� ��������� ����
    Card(const std::string& number, const std::string& owner, T bal, T credit)
        : cardNumber(number), ownerName(owner), balance(bal), creditLimit(credit), bonusPoints(0) {}

    // ����������� ��� �������� ����
    Card(const std::string& number, const std::string& owner, T bal, T credit, T bonus)
        : cardNumber(number), ownerName(owner), balance(bal), creditLimit(credit), bonusPoints(bonus) {}

    // �������
    T getBalance() const { return balance; }
    T getCreditLimit() const { return creditLimit; }
    T getBonusPoints() const { return bonusPoints; }

    std::string getOwnerName() const { return ownerName; }
    std::string getCardNumber() const { return cardNumber; }

    // ������ ��� ��������� ���������
    void deductBalance(T amount) { balance -= amount; }
    void deductBonus(T amount) { bonusPoints -= amount; }

    void display() const {
        std::cout << "Card Owner: " << ownerName
            << "\nCard Number: " << cardNumber
            << "\nBalance: " << balance
            << "\nCredit Limit: " << creditLimit
            << "\nBonus Points: " << bonusPoints
            << std::endl;
    }
};

#endif // CARD_H
