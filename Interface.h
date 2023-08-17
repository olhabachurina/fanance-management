#pragma once
#include "Wallet.h"
#include "Disease.h"
#include "ExpenseCategory.h"
#include "Expense.h"
#include <string>

// Функция для ввода даты
std::string enterDate();

// Функция для внесения денег
void depositMoney(Wallet& wallet);

// Функция для добавления расхода
void addExpense(Wallet& wallet, const Disease& someDisease);