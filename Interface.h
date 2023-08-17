#pragma once
#include "Wallet.h"
#include "Disease.h"
#include "ExpenseCategory.h"
#include "Expense.h"
#include <string>

// ������� ��� ����� ����
std::string enterDate();

// ������� ��� �������� �����
void depositMoney(Wallet& wallet);

// ������� ��� ���������� �������
void addExpense(Wallet& wallet, const Disease& someDisease);