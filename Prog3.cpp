#include <iostream>

int main() {
    double x, y;

    // ������� ����� �������� x �� �����������
    std::cout << "Enter *x*: ";
    std::cin >> x;

    // ���������� y �� ��������� ������ �������� (���������� ���������)
    y = (x > 0) ? 1 : ((x < 0) ? -1 : 0);

    // �������� ���������
    std::cout << "The result for *x* = " << x << " equals: " << y << std::endl;

    return 0;
}