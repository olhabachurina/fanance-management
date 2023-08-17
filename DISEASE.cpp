#include "DISEASE.h"
Disease::Disease(const std::string& diseaseName) : name(diseaseName) {}//Этот код представляет реализацию конструктора класса Disease
//Он принимает строку diseaseName в качестве аргумента и инициализирует приватное поле name этой строкой
std::string Disease::getName() const {//Этот код реализует метод getName() класса Disease
    return name;
}