#include <iostream>

int main() {

    int temperature;

    std::cout << "Enter temperature: ";
    std::cin  >> temperature;

    if (temperature < 25 || temperature > 35) {

        /*
            The "||" Operator:

            Called the OR operator allows to check if either
            atleast one of the specified conditions is true. 
        */

        std::cout << "The temperature is bad!" << "\n";

    } else if (temperature >= 25 && temperature <= 35) {

        /*
            The "&&" Operator:

            Called the AND operator allows to check if two
            conditions are simultaneously true.
        */

        std::cout << "The temperature is great!" << "\n";

    } else if (!(temperature > 0)) {

        /*
            The "!" Operator:

            Called the NOT operator returns the negated result
            of a specfied condition. 
        */

        std::cout << "The temperature is freezing!" << "\n";

    } else {

        std::cout << "The temperature is okay." << "\n";
        
    }


    return 0;
}