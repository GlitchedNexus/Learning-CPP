#include <iostream>

int main() {

    /*
        As with conditionals you may have enocuntered in 
        other languages, conditional behaviour is implemented
        using "if" statements and other related keywords.

        NOTE: The order of conditional behaviour matters!
    */

   /*
        The "if" Keyword:

        Evaluates the truth value of given condition and executes
        specified behaviour is condition evaluates to true, else
        specified code block is ignored.

        We use multiple "if" statements if we want to check for multiple
        conditions and want each of them to take effect if they are true.
        
        Although if we want only one condition to be true, we should use
        the "else if" Keyword.


        The "else if" Keyword:

        These give us the ability to check for alternate conditions.
        This is great for when we have condition chains and we want only
        are checking for only one given condition to be true.


        The "else" Keyword: 

        Placed after an "if" and "else if" block, this keyword allows
        us to specify alternate behaviour in the event that all the 
        specified conditions are false.
   */

    int age;

    std::cout << "Enter your age: ";
    std::cin  >> age;

    if (age >= 18) {
        std::cout << "Welcome to the site!" << "\n";
    } else if (age < 0) {
        std::cout << "Invalid input!" << "\n";
    } else if (age > 100) {
        std::cout << "You are too old to enter." << "\n";
    } else {
        std::cout << "You are not old enough to enter!" << "\n";
    }

    return 0;
}