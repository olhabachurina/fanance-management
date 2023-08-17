#pragma once
#include "ExpenseCategory.h"
#include "Disease.h"
#include <string>

class Expense {
private:
    double amount;// ��������� ���� ��� �������� ����� �������.
    ExpenseCategory category;// ��������� ���� ��� �������� ��������� �������.
    std::string date;// ��������� ���� ��� �������� ���� �������.
    Disease disease;// ��������� ���� ��� �������� ���������� � ��������.
    std::string itemName; //  ��������� ���� ��� �������� ����� ������.
public:
   
    Expense(double expAmount, const ExpenseCategory& expCategory, const std::string& expDate, const Disease& expDisease);
    // ����������� ������ Expense.
    double getAmount() const;// ����� ��� ��������� ����� �������.
    ExpenseCategory getCategory() const;// ����� ��� ��������� ��������� �������.
    std::string getDate() const;// ����� ��� ��������� ���� �������.
    Disease getDisease() const;// ����� ��� ��������� ���������� � ��������.
    void setItemName(const std::string& name); // ����� ����� ��� ��������� ����� ������.
};
