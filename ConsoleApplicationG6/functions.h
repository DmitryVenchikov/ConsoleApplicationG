#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "Card.h"

// Шаблон функции для обработки транзакции
template <typename T>
void processTransaction(Card<T>& card, T amount) {
    std::cout << "Processing transaction for " << card.getOwnerName() << "...\n";

    // Если карта бонусная, используем бонусы
    if (card.getBonusPoints() >= amount) {
        card.deductBonus(amount);
        std::cout << "Transaction successful! Bonus points used.\n";
    }
    // Если кредитная карта, проверяем лимит
    else if (card.getBalance() + card.getCreditLimit() >= amount) {
        card.deductBalance(amount);
        std::cout << "Transaction successful! Balance or credit limit used.\n";
    }
    // Для дебетовой карты — только баланс
    else if (card.getBalance() >= amount) {
        card.deductBalance(amount);
        std::cout << "Transaction successful! Balance used.\n";
    }
    else {
        std::cout << "Transaction failed! Insufficient funds or bonuses.\n";
    }
}

#endif // FUNCTIONS_H
