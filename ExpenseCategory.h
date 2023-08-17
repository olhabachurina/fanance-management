#pragma once
#include <string>

class ExpenseCategory {
private:
    int id;
    std::string name;

public:
    ExpenseCategory(int categoryId, const std::string& categoryName);

    int getId() const;
    std::string getName() const;

    bool operator==(const ExpenseCategory& other) const;
};