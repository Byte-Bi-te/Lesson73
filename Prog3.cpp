#include <iostream>

int main() {
    double x, y;

    // Зчитуємо дійсне значення x від користувача
    std::cout << "Enter *x*: ";
    std::cin >> x;

    // Обчислюємо y за допомогою умовної операції (тернарного оператора)
    y = (x > 0) ? 1 : ((x < 0) ? -1 : 0);

    // Виводимо результат
    std::cout << "The result for *x* = " << x << " equals: " << y << std::endl;

    return 0;
}