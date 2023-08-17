#include "Expense.h"
Expense::Expense(double expAmount, const ExpenseCategory& expCategory, const std::string& expDate, const Disease& expDisease)
    : amount(expAmount), category(expCategory), date(expDate), disease(expDisease) {}

double Expense::getAmount() const {//Метод позволяет получить сумму расхода, хранящуюся в приватном поле amount.
    return amount;
}

ExpenseCategory Expense::getCategory() const {//Метод позволяет получить категорию расхода, хранящуюся в приватном поле category.
    return category;
}

std::string Expense::getDate() const {//Метод позволяет получить дату расхода, хранящуюся в приватном поле date.
    return date;
}

Disease Expense::getDisease() const {//Метод позволяет получить информацию о затратах, хранящуюся в приватном поле disease.
    return disease;
}
void Expense::setItemName(const std::string& name) {
    itemName = name;
}