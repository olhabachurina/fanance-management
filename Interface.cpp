#include "Interface.h"
#include <iostream>
std::string enterDate() {
    std::string date;
    std::cout << "Enter the date (YYYY-MM-DD): ";
    std::cin >> date;
    return date;
}

void depositMoney(Wallet& wallet) {
    double amount;
    std::cout << "Enter the amount to deposit: ";
    std::cin >> amount;
    wallet.deposit(amount);
    std::cout << "Deposit successful." << std::endl;
}
void addExpense(Wallet& wallet, const Disease& someDisease) {
    // Создание категорий расходов
    ExpenseCategory groceries(1, "Groceries");
    ExpenseCategory entertainment(2, "Entertainment");

    double amount;
    std::cout << "Enter the amount of the expense: ";
    std::cin >> amount;

    std::string date = enterDate(); // Получение даты с помощью функции enterDate()

    int categoryChoice;
    std::cout << "Select a category for the expense:" << std::endl;
    std::cout << "1. Groceries" << std::endl;
    std::cout << "2. Entertainment" << std::endl;
    std::cin >> categoryChoice;

    ExpenseCategory category = (categoryChoice == 1) ? groceries : entertainment;

    Expense expense(amount, category, date, someDisease);
    if (category.getId() == groceries.getId()) {
        std::cout << "Enter the name of the grocery item: ";
        std::string itemName;
        std::cin.ignore();
        std::getline(std::cin, itemName);
        expense.setItemName(itemName);
    }

    if (wallet.withdraw(amount)) {
        std::cout << "Expense added successfully." << std::endl;
    }
    else {
        std::cout << "Insufficient balance for the expense." << std::endl;
    }
}