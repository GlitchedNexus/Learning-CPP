#include <iostream>

int main() {

    int number;

    /*
    
    The do while Loop:

    This loop executes a piece of code and then keeps iterating for as
    long as the passed condition is true. The syntax for a while loop is as follows:

    do {
        // code block
    } while (<condition>)
    
    NOTE: You must have some internal updates for the loop condition or you
    will end up with an infinite loop.
    */

    do {
        std::cout << "Enter a positive number: ";
        std::cin  >> number;
    } while (number < 0);

    std::cout << "The number is: " << number << "\n";

    return 0;

}