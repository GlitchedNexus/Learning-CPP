#include <iostream>
#include <vector>

/*
    The using Keyword:
    
    This reserved keyword like 'typedef' helps us to create
    alternate names / aliases for another data type, i.e.,
    create a new identifier for an existing type.

    By convention the new identifier that is create with the 
    keyword usually ends with _t to indicate type.

    This keyword is more suitable for templates and therefore
    is more popularly used.
*/

using text_t = std::string;
using number_t = int;

int main() {

    text_t fullName = "Glitched Nexus";
    number_t age = 19;

    std::cout << fullName << "\n";
    std::cout <<   age    << "\n";

    return 0;
}