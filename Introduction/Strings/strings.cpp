#include <iostream>

int main() {

    /*
    
    This tutorial covers the commonly used functions for string
    manipulation. If you would like to know more please visit:
    https://cplusplus.com/reference/string/string/

    */

    std::string name;
    std::string id;

    std::cout << "Enter Full Name: ";
    std::getline(std::cin >> std::ws, name);


    // The empty() method checks if the string is empty or not.
    if (name.empty()) {
        std::cout << "You didn't enter your name!" << "\n"; 
    }

    std::cout << "Welcome " << name << "!" << "\n"; 


    // The length() method returns the length of the string.
    id = name.length();
    std::cout << "Your name is " << name.length() << " characters long!" << "\n"; 


    // The insert() method lets us insert a character at a given index.
    // C++ follows zero-based indexing.
    name.insert(0, "@");
    std::cout << "Your id is: " << name << "\n";


    // The append() method allows us to add another string to the end od a string.
    name.append(" The Legendary Coder!");
    std::cout << "You are " << name << "\n";


    // The at() method allows us to get the character at a given index of a string.
    // C++ follows zero-based indexing.
    std::cout << "The initial of your first name is: " << name.at(1) << "\n";


    // The find() method lets us returns the first occurence of a given substring
    // inside the parent string. Returns -1 if not found.
    std::cout << "@ sign found at index " << name.find('@') << "\n";


    // The erase() method allows us to erase part of a string from the start index to 
    // the end index - 1. Not specifying the end idex, erases everyhting till the 
    // end of the string.
    std::cout << "Your ID is: " << name.erase((id.length() + 1), name.length()) << "\n";


    // The clear() method clears the string.
    name.clear();
    std::cout << "Hello " << name << "\n"; 


    return 0;
}