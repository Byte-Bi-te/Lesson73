#include <iostream>
#include <cmath>

int main() {
    double inputValue;

    // ������� �������� � ������� ������� �� �����������
    std::cout << "Enter float: ";
    std::cin >> inputValue;

    // ���������� �������� �� ����������� ������
    int roundedValue = static_cast<int>(std::round(inputValue));

    // �������� ��������� ��������
    std::cout << "Round: " << roundedValue << std::endl;

    return 0;
