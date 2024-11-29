#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "Card.h"

// ������ ������� ��� ��������� ����������
template <typename T>
void processTransaction(Card<T>& card, T amount) {
    std::cout << "Processing transaction for " << card.getOwnerName() << "...\n";

    // ���� ����� ��������, ���������� ������
    if (card.getBonusPoints() >= amount) {
        card.deductBonus(amount);
        std::cout << "Transaction successful! Bonus points used.\n";
    }
    // ���� ��������� �����, ��������� �����
    else if (card.getBalance() + card.getCreditLimit() >= amount) {
        card.deductBalance(amount);
        std::cout << "Transaction successful! Balance or credit limit used.\n";
    }
    // ��� ��������� ����� � ������ ������
    else if (card.getBalance() >= amount) {
        card.deductBalance(amount);
        std::cout << "Transaction successful! Balance used.\n";
    }
    else {
        std::cout << "Transaction failed! Insufficient funds or bonuses.\n";
    }
}

#endif // FUNCTIONS_H
