#include "ReportGenerator.h"
#include <iostream>
#include <string>
ReportGenerator::ReportGenerator(const std::vector<Expense>& expenseList) : expenses(expenseList) {}

void ReportGenerator::generateReports() { // Реализация генерации отчетов
   
    for (const Expense& expense : expenses) {
        std::cout << "Amount: " << expense.getAmount() << "\n";
        std::cout << "Category: " << expense.getCategory().getName() << "\n";
        std::cout << "Date: " << expense.getDate() << "\n";
        std::cout << "Disease: " << expense.getDisease().getName() << "\n";
        std::cout << "\n";
    }
}

void ReportGenerator::generateDailyReport() {
    // Реализация генерации отчета за день
}

void ReportGenerator::generateWeeklyReport() {// Реализация генерации отчета за неделю
    
}

void ReportGenerator::generateMonthlyReport() { // Реализация генерации отчета за месяц
   
}

void ReportGenerator::generateTopExpenses(int count){ // Реализация генерации ТОП-N расходов
   
   
}

void ReportGenerator::generateTopCategories(int count) {// Реализация генерации ТОП-N категорий
    
}