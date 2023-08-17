#pragma once
#include <string>

class Wallet
{
private:
    double balance;

public:
    Wallet(const std::string& walletType);

    void deposit(double amount);
    bool withdraw(double amount);
    double getBalance() const;
};

