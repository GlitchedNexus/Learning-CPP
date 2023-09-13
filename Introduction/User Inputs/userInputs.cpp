#include <iostream>

int main() {

    /*
        << is the insertion operator
        >> is the extraction operator

        std::cout << is used to output data
        std::cin  >> is used to input data
    */

    std::string name;
    int age;

    std::cout << "Enter Age: ";
    std::cin  >> age;

    // Display Prompt
    std::cout << "Enter Name: ";

    // Input and ssignemnt of input to variable
    /*
        NOTE: When reading strings containing spaces
              it is better to use the getline() function.
        
        Note that when we use cin >> our input also includes
        a newline character that is not taken up by cin.

        Therefore when we use getline, we must include the 
        std::ws to ensure that we account for it else the getline
        will take the newline character as input and continue
        program execution without taking input from the user.
    */
    // std::cin  >> name;

    std::getline(std::cin >> std::ws, name);



    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old!" << "\n";


    return 0;
}