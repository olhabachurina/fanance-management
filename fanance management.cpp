// fanance management.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Wallet.h"
#include "Disease.h"
#include "ExpenseCategory.h"
#include "Expense.h"
#include "ReportGenerator.h"
#include "FileManager.h"
#include <fstream> 
#include "Interface.h"
#include"InputUtils.h"



int main() {
    // Создание объектов кошельков и карт
    Wallet myWallet("Personal Wallet");//личный кошелек
    Wallet debitWallet("Debit");//дебетовая карта
    Wallet creditWallet("Credit");// кредитная карта

    // Внесение денег на кошельки и карты
    double depositAmountWallet = 100.0;
    double depositAmountDebitWallet = 1000.0;
    double depositAmountCreditWallet = 1500.0;

    myWallet.deposit(depositAmountWallet);
    debitWallet.deposit(depositAmountDebitWallet);
    creditWallet.deposit(depositAmountCreditWallet);

    std::cout << "Deposited " << depositAmountWallet << " into Personal Wallet." << std::endl;
    std::cout << "Deposited " << depositAmountDebitWallet << " into Debit Wallet." << std::endl;
    std::cout << "Deposited " << depositAmountCreditWallet << " into Credit Wallet." << std::endl;

    // Создание категорий расходов
    ExpenseCategory groceries(1, "Groceries");//расходы на продукты
    ExpenseCategory entertainment(2, "Entertainment");// расходы на развлечения
    std::vector<Expense> expenses; // Объявление вектора для хранения расходов
    time_t sessionStartTime = time(0);
    auto depositMoney = [&](Wallet& wallet) {
        double amount;
        std::cout << "Enter the amount to deposit: ";
        std::cin >> amount;
        wallet.deposit(amount);
        std::cout << "Deposit successful." << std::endl;
    };
    Disease someDisease("Some Disease Name");
    auto addExpense = [&](ExpenseCategory category) {
        double amount;
        std::cout << "Enter the amount of the expense: ";
        std::cin >> amount;

        std::string date;
        Expense expense(amount, category, date, someDisease);
        if (category.getId() == groceries.getId()) {
            std::cout << "Enter the name of the grocery item: ";
            std::string itemName;
            std::cin.ignore();
            std::getline(std::cin, itemName);
            expense.setItemName(itemName);
        }

        if (myWallet.withdraw(amount)) {
            std::cout << "Expense added successfully." << std::endl;
        }
        else {
            std::cout << "Insufficient balance for the expense." << std::endl;
        }
    };

    while (true) {
        std::cout << "1. Deposit money" << std::endl;
        std::cout << "2. Add expense" << std::endl;
        std::cout << "3. Save expenses to file" << std::endl; // Новая опция
        std::cout << "4. Exit" << std::endl;
        std::cout << "Select an option: ";

        int choice = InputUtils::inputInteger(); // Используем функцию из InputUtils
        std::cin >> choice;
        
        if (choice == 1) {
            int walletChoice;
            std::cout << "Select a wallet to deposit into:" << std::endl;
            std::cout << "1. Personal Wallet" << std::endl;
            std::cout << "2. Debit Wallet" << std::endl;
            std::cout << "3. Credit Wallet" << std::endl;
            std::cin >> walletChoice;

            if (walletChoice == 1) {
                depositMoney(myWallet);
            }
            else if (walletChoice == 2) {
                depositMoney(debitWallet);
            }
            else if (walletChoice == 3) {
                depositMoney(creditWallet);
            }
            else {
                std::cout << "Invalid wallet choice." << std::endl;
            }
        }
        else if (choice == 2) {
            int categoryChoice;
            std::cout << "Select a category for the expense:" << std::endl;
            std::cout << "1. Groceries" << std::endl;
            std::cout << "2. Entertainment" << std::endl;
            std::cin >> categoryChoice;

            if (categoryChoice == 1) {
                addExpense(groceries);
            }
            else if (categoryChoice == 2) {
                addExpense(entertainment);
            }
            else {
                std::cout << "Invalid category choice." << std::endl;
            }
        }
        else if (choice == 3) {
            std::string fileName;
            std::cout << "Enter the filename to save expenses to: ";
            std::cin >> fileName;
           
            /*FileManager::saveExpensesToFile(fileName, expenses); // expenses - ваш вектор с расходами
            std::cout << "Expenses saved to file." << std::endl;*/

        }


        else if (choice == 4) {
            std::cout << "Exiting the program." << std::endl;
            break;
        }


        else {
            std::cout << "Invalid choice. Please select a valid option." << std::endl;
        }

    }

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
