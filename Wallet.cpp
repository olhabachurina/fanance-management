#include "Wallet.h"
#include <iostream>

Wallet::Wallet(const std::string& walletType) : balance(0.0)
{
    // ��� ��� ������������� �������
}

void Wallet::deposit(double amount)
{
    // ��� ��� ��� �������� ����� �� �������
}

bool Wallet::withdraw(double amount) {
    // ���������� ������
    if (balance >= amount) {
        balance -= amount;
        return true; // �������� ������ �����
    }
    else {
        return false; // ������������ �������
    }
}
double Wallet::getBalance() const
{
    return balance;
}