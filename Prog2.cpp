#include <iostream>
#include <cmath>

int main() {
    double inputValue;

    // Зчитуємо значення з рухомою крапкою від користувача
    std::cout << "Enter float: ";
    std::cin >> inputValue;

    // Округлюємо значення до найближчого цілого
    int roundedValue = static_cast<int>(std::round(inputValue));

    // Виводимо округлене значення
    std::cout << "Round: " << roundedValue << std::endl;

    return 0;
