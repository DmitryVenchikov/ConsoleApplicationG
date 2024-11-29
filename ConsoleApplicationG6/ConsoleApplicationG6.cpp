#include "Card.h"
#include "functions.h"

int main() {
    // Создаем различные карты
    Card<double> debitCard("1234-5678-9101", "John Doe", 500.0);
    Card<double> creditCard("2345-6789-0123", "Jane Smith", 200.0, 1000.0);
    Card<double> bonusCard("3456-7890-1234", "Emily Brown", 100.0, 0, 300);

    // Вывод информации о картах
    debitCard.display();
    creditCard.display();
    bonusCard.display();

    std::cout << "\n";

    // Обрабатываем транзакции
    processTransaction(debitCard, 150.0);
    processTransaction(creditCard, 800.0);
    processTransaction(bonusCard, 200.0);

    std::cout << "\n";

    // Вывод обновленной информации
    debitCard.display();
    creditCard.display();
    bonusCard.display();

    return 0;
}
