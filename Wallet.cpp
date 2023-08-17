#include "Wallet.h"
#include <iostream>

Wallet::Wallet(const std::string& walletType) : balance(0.0)
{
    // Ваш код инициализации баланса
}

void Wallet::deposit(double amount)
{
    // Ваш код для внесения денег на кошелек
}

bool Wallet::withdraw(double amount) {
    // Реализация метода
    if (balance >= amount) {
        balance -= amount;
        return true; // Успешное снятие денег
    }
    else {
        return false; // Недостаточно средств
    }
}
double Wallet::getBalance() const
{
    return balance;
}