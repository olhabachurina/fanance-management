#pragma once
#include "ExpenseCategory.h"
#include "Disease.h"
#include <string>

class Expense {
private:
    double amount;// Приватное поле для хранения суммы расхода.
    ExpenseCategory category;// Приватное поле для хранения категории расхода.
    std::string date;// Приватное поле для хранения даты расхода.
    Disease disease;// Приватное поле для хранения информации о затратах.
    std::string itemName; //  приватное поле для хранения имени затрат.
public:
   
    Expense(double expAmount, const ExpenseCategory& expCategory, const std::string& expDate, const Disease& expDisease);
    // Конструктор класса Expense.
    double getAmount() const;// Метод для получения суммы расхода.
    ExpenseCategory getCategory() const;// Метод для получения категории расхода.
    std::string getDate() const;// Метод для получения даты расхода.
    Disease getDisease() const;// Метод для получения информации о затратах.
    void setItemName(const std::string& name); // Новый метод для установки имени затрат.
};
