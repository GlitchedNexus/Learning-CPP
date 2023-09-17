#include <iostream>
#include <cmath>

int main() {

    int op;
    double num1;
    double num2;
    double result;

    std::cout << "******* Calculator *******" << "\n";
    std::cout << "1. Sum" << "\n";
    std::cout << "2. Subtraction" << "\n";
    std::cout << "3. Multiplaction" << "\n";
    std::cout << "4. Division" << "\n";

    std::cout << "Choose Operation Number: " << "\n";
    std::cin  >> op;

    std::cout << "Enter Number 1: " << "\n";
    std::cin  >> num1;

    std::cout << "Enter Number 2: " << "\n";
    std::cin  >> num2;


    switch (op) {
        case 1:
            result = num1 + num2;
            std::cout << num1 << " + " << num2 << " = " << result;
            break;

        case 2:
            result = num1 - num2;
            std::cout << num1 << " - " << num2 << " = " << result;
            break;

        case 3:
            result = num1 * num2;
            std::cout << num1 << " * " << num2 << " = " << result;
            break;

        case 4:
            result = num1 / num2;
            std::cout << num1 << " / " << num2 << " = " << result;
            break;
        
        default:
            std::cout << "Invalid Input" << "\n";
            break;
    }


    return 0;
}