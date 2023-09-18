#include <iostream>

int main() {

    /*
    
    The "?" operator:

    Called the ternary operator, it is a convinient
    replacement for a simple "if else" statements. You may 
    have encountered in other alnguages like Java, C and 
    JavaScript.

    The syntax of ternary operators is as follows.

        <condition> ? <true expression> : <false expression>;

    */

    // Example 1:
    int grade = 75;

    (grade >= 50) ? 
        std::cout << "You Pass!" << "\n" :
        std::cout << "You Fail!" << "\n" ;


    // Example 2:
    int number = 9;

    (number % 2 == 0) ?
        std::cout << "Even!" << "\n" :
        std::cout << "Odd!"  << "\n" ;


    return 0;
}