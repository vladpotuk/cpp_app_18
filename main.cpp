#include <iostream>
#include <Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    int maxNumber;
    int number;

    
    std::cout << "Введіть число 1: ";
    std::cin >> maxNumber;

    
    for (int i = 2; i <= 7; i++) {
        std::cout << "Введіть число " << i << ": ";
        std::cin >> number;

        if (number > maxNumber) {
            maxNumber = number; 
        }
    }

    std::cout << "Максимальне число: " << maxNumber << std::endl;

    return 0;
}
