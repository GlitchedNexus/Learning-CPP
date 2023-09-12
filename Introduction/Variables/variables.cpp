#include <iostream>

int main() {

    /*
        Like with any other programming language, variables in C++ have 
        4 essential properties:

        1. Type
        2. Value
        3. Identifier
        4. Location (Automatically assigned by the computer)
    */

    // Variable Declaration
    int x;

    // Variable Assignment
    x = 5;

    // Variable Initialization
    int y = 10;

    int sum = x + y;

    std::cout <<  x  << "\n";
    std::cout <<  y  << "\n";
    std::cout << sum << "\n";


    /*
        Data types in C++ can be classified into 3 types:
        - Primitive Data Types
        - Derived Data Types
        - User Defined Data Types

        Primitive Data Types Include:
        - Integer
        - Double
        - Boolean
        - Character
    */

    std::cout << "Integers Start Here:" << "\n";

    /*
        Integers:

        Note that if we try to assign a decimal value to a variable of 
        type int the decimal point will be truncated.
    */
    int b = 2;
    int age = 1;

    // Special Case
    int d = 7.3;


    std::cout <<  b << "\n";
    std::cout <<  d << "\n";
    std::cout << age << "\n";



    std::cout << "Doubles Start Here:" << "\n";

    /*
        Doubles:

        Used to store real numbers (i.e., numbers with decimal points).
    */

    double price = 1.43;
    double  gpa  = 8.2;

    std::cout << price << "\n";
    std::cout <<  gpa  << "\n";


    std::cout << "Characters Start Here:" << "\n";

   /*
        Characters:

        Used to store single characters. 

        NOTE: To store a single character use single quotes.

        If we try to assign more than one character to a variable of
        type char, it will result in an overflow error and only the 
        last character will be displayed.
   */
  
    char  grade  = 'A';
    char initial = 'B';

    std::cout <<  grade  << "\n";
    std::cout << initial << "\n";


    std::cout << "Booleans Start Here:" << "\n";

    /*
        Booleans:

        Use to store boolean values, i.e., true and false.
    */

    bool student = true;
    bool powered = false;

    std::cout << student << "\n";
    std::cout << powered << "\n";


    std::cout << "Strings Start Here:" << "\n";

    /* 
        Strings:

        Strings are objects that represent a sequence of characters and
        are provided by the std namespace.

        Store your text in a set of double quotes.
    */

    std::string day  = "Monday";
    std::string name = "Glitched";
    std::string food = "Pizza";

    std::cout << day  << "\n";
    std::cout << name << "\n";
    std::cout << food << "\n";

    

    std::cout << "Demonstration Of const Keyword:" << "\n";

    /*
        The const Keyword:

        This keyword helps us specify that a variable's value is constant
        and cannot not be modified anywhere else in the program,
        i.e., it is read-only.

        By convention all const varaible names are declared in uppercase.

        Any attempts to change the value of the constant variable will
        result in an error.
    */

    // Assume  we are calculating the circumference of a circle
    const double PI = 3.14159;
    int radius = 3;

    int circumference = 2 * PI * radius;

    std::cout << "Circumference: " << circumference << " cm";


    std::cout << "Demonstration Of Complex Outputs With Variables:" << "\n";

    /*
        Displaying Variable With Text
    */

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old!" << "\n";

    return 0;

}