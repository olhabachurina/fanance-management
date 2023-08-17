#include "ExpenseCategory.h"
ExpenseCategory::ExpenseCategory(int categoryId, const std::string& categoryName)
    : id(categoryId), name(categoryName) {}

int ExpenseCategory::getId() const {
    return id;
}

std::string ExpenseCategory::getName() const {
    return name;
}

bool ExpenseCategory::operator==(const ExpenseCategory& other) const {
    return id == other.id;
}