#include "ReportGenerator.h"
#include <iostream>
#include <string>
ReportGenerator::ReportGenerator(const std::vector<Expense>& expenseList) : expenses(expenseList) {}

void ReportGenerator::generateReports() { // ���������� ��������� �������
   
    for (const Expense& expense : expenses) {
        std::cout << "Amount: " << expense.getAmount() << "\n";
        std::cout << "Category: " << expense.getCategory().getName() << "\n";
        std::cout << "Date: " << expense.getDate() << "\n";
        std::cout << "Disease: " << expense.getDisease().getName() << "\n";
        std::cout << "\n";
    }
}

void ReportGenerator::generateDailyReport() {
    // ���������� ��������� ������ �� ����
}

void ReportGenerator::generateWeeklyReport() {// ���������� ��������� ������ �� ������
    
}

void ReportGenerator::generateMonthlyReport() { // ���������� ��������� ������ �� �����
   
}

void ReportGenerator::generateTopExpenses(int count){ // ���������� ��������� ���-N ��������
   
   
}

void ReportGenerator::generateTopCategories(int count) {// ���������� ��������� ���-N ���������
    
}