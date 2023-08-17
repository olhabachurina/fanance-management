#pragma once
#include <string>
#include <vector>
#include "Expense.h"

class FileManager {
public:
    static void saveExpensesToFile(const std::string& filename, const std::vector<Expense>& expenses);
    static void saveReportsToFile(const std::string& filename, const std::string& reportData);
};
