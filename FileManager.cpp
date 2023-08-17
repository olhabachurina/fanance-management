#include "FileManager.h"
#include <fstream>

void FileManager::saveExpensesToFile(const std::string& filename, const std::vector<Expense>& expenses) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        for (const Expense& expense : expenses) {
            outFile << "Amount: " << expense.getAmount() << "\n";
            outFile << "Category: " << expense.getCategory().getName() << "\n";
            outFile << "Date: " << expense.getDate() << "\n";
            outFile << "Disease: " << expense.getDisease().getName() << "\n";
            outFile << "\n";
        }
        outFile.close();
    }
}
void FileManager::saveReportsToFile(const std::string& filename, const std::string& reportData) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << reportData;
        outFile.close();
    }
}