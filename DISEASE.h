#pragma once
#include <string>

class Disease {
private:
    std::string name;// ��������� ���� ��� �������� �������� ������

public:
    Disease(const std::string& diseaseName);// ����������� ������ Disease, �������������� �������� ������
    std::string getName() const;// ����� ��� ��������� �������� ������.
};
