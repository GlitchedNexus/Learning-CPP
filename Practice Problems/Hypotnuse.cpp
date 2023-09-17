#include <iostream>
#include <cmath>

/*

Write a program to calculate the hypotnuse of a right triangle.

*/

int main() {
    double x;
    double y;

    std::cout << "Enter Base: ";
    std::cin  >> x;

    std::cout << "Enter Height: ";
    std::cin  >> y;

    std::cout << "Hypotnuse: " << sqrt(pow(x,2) + pow(y,2)) << "\n";

    return 0;
}