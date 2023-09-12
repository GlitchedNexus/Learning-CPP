/*
    This header file gives us access to alot of useful
    input output functions.
*/
#include <iostream>

int main() {

    /*
        std -> refers to standard
        cout -> refers to character output
        endl -> indicates end line and moves cursor to new line
        In a manner similar to Java, we add semi-colons to indicate end of line.
    */
    std::cout << "Hello World!" << std::endl; 
    
    /*
        Alternatively, we can add a "\n" instead of endl for better performance.
    */
    std::cout << "Hello World!" << "\n";
    
    /*
        Helps us check if code execution was successful.
        We get 1 if there were errors during the program run.
    */
    return 0;
}