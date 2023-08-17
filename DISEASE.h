#pragma once
#include <string>

class Disease {
private:
    std::string name;// ѕриватное поле дл€ хранени€ названи€ затрат

public:
    Disease(const std::string& diseaseName);//  онструктор класса Disease, инициализирует название затрат
    std::string getName() const;// ћетод дл€ получени€ названи€ затрат.
};
