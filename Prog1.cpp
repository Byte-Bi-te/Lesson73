#include <iostream>
#include <iomanip>

int main() {
    char symbol;

    // ������� ������ �� �����������
    std::cout << "Symbol: ";
    std::cin >> symbol;

    // �������� ��������������� ��� �������
    std::cout << "Hex code '" << symbol << "': ";
    std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(symbol) << std::endl;

    return 0;
}