#include "Expense.h"
Expense::Expense(double expAmount, const ExpenseCategory& expCategory, const std::string& expDate, const Disease& expDisease)
    : amount(expAmount), category(expCategory), date(expDate), disease(expDisease) {}

double Expense::getAmount() const {//����� ��������� �������� ����� �������, ���������� � ��������� ���� amount.
    return amount;
}

ExpenseCategory Expense::getCategory() const {//����� ��������� �������� ��������� �������, ���������� � ��������� ���� category.
    return category;
}

std::string Expense::getDate() const {//����� ��������� �������� ���� �������, ���������� � ��������� ���� date.
    return date;
}

Disease Expense::getDisease() const {//����� ��������� �������� ���������� � ��������, ���������� � ��������� ���� disease.
    return disease;
}
void Expense::setItemName(const std::string& name) {
    itemName = name;
}