#include <iostream>

int main() {

    /*
        Type Conversion:
        
        Refers to conversion of a value of one data type to another
        different data type.

        Type conversions can be classified into 2 types:
        1. Implicit -> automatic
        2. Explicit -> Precede value with new data type (int)
    */


    /*
        Implicit Conversions:
    */
        
    // In this example since int can't store decimal values,
    // 3.14 get truncated to 3
    int pi = 3.14;

    std::cout << pi << "\n";

    // In this example the number 100 gets converted to its
    // corresponding ASCII symbol giving us the letter 'd'

    char x = 100;

    std::cout << x << "\n";

    // We can get the same result with the following:

    std::cout << (char) 100 << "\n";


    /*
        Explicit Conversions:
    */

    // In this example we cast the type int to the double value
    // as a result we get an output value fo 2.
    double e = (int)  2.71;

    std::cout << e << "\n";
    

    return 0;
}