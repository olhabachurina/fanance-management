#include "DISEASE.h"
Disease::Disease(const std::string& diseaseName) : name(diseaseName) {}//���� ��� ������������ ���������� ������������ ������ Disease
//�� ��������� ������ diseaseName � �������� ��������� � �������������� ��������� ���� name ���� �������
std::string Disease::getName() const {//���� ��� ��������� ����� getName() ������ Disease
    return name;
}