#include <iostream>

// Gives us access to alot of math functions
#include <cmath>

int main() {

    /*
        This guide will cover some commonly used functions,
        information on additional functions can be found at
        https://cplusplus.com/reference/cmath/
    */


    /*
        The max Function:

        Returns the greater of the two values.

        Can be accessed without cmath header file.
    */

    std::cout << "Max Value: " << std::max(3, 4) << "\n";


    /*
        The min Function:

        Returns the smaller of the two values.

        Can be accessed without cmath header file.
    */

    std::cout << "Max Value: " << std::min(3, 4) << "\n";

    /*
        The pow Function:

        Used for exponenetiation and follows the syntax:

        power(<value>, <expoent>);
    */

    std::cout << "Two cubed is: " <<pow(2, 3) << "\n";


    /*
        The sqrt Function:

        Returns the square root of the passed argument.
    */

    std::cout << "Square root of 4: " << sqrt(4) << "\n";


    /*
        The abs Function:

        Returns the absolute value of the passed argument.
    */

    std::cout << "Absolute value of -4: " << abs(-4) << "\n";


    /*
        The round Function:

        Returns the rounded value of the passed argument.
        Returns an integer by default.
    */

    std::cout << "Rounded value of 3.14: " << round(3.14) << "\n";

    
    /*
        The ceil Function:

        Returns the ceiling value of the passed argument.
    */

    std::cout << "Ceiling value of 3.14: " << ceil(3.14) << "\n";


    /*
        The floor Function:

        Returns the floor value of the passed argument.
    */

    std::cout << "Floor value of 3.14: " << floor(3.14) << "\n";

    return 0;
}