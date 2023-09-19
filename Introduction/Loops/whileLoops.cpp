#include <iostream>

int main() {

    std::string name;

    /*
    
    The while Loop:

    This loop keeps iterating for as long as the passed condition is true.
    The syntax for a while loop is as follows:

    while (<condition>) {
        // code block
    }
    
    NOTE: You must have some internal updates for the loop condition or you
    will end up with an infinite loop.
    */

    while (name.empty()) {
        std::cout << "Enter your name: ";
        std::cin  >> name;
    }

    return 0;

}