#pragma once
#include "Expense.h"
#include <vector>
class ReportGenerator {
private:
    std::vector<Expense> expenses;

public:
    ReportGenerator(const std::vector<Expense>& expenseList);
    void generateReports(); // Генерация отчетов
    void generateDailyReport();
    void generateWeeklyReport();
    void generateMonthlyReport();
    //void generateDailyReport(const std::string& date);
    //void generateWeeklyReport(const std::string& startDate, const std::string& endDate);
   // void generateMonthlyReport(const std::string& month);//
    void generateTopExpenses(int count);
    void generateTopCategories(int count);
    // Добавьте методы для подсчета рейтингов
};

