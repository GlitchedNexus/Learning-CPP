#include <iostream>
#include <vector>

/*
    The typedef Keyword:
    
    This reserved keyword helps us to create alternate names / aliases 
    for another data type, i.e., create a new identifier for an existing type.
    
    These are especially useful for helping reduce typos and increase
    code readability.

    By convention the new identifier that is create with the keyword usually
    ends with _t to indicate type.

    That said, typedefs are now replaced with the 'using' keyword as it 
    works better with templates.
*/

typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string text_t;

typedef int number_t;

int main() {

    /*
        Using our typedef we can re-write the declaration 
        std::vector<std::pair<std::string, int>> pairlist
        as shown below:
    */

    pairlist_t pairlist;

    // Similarly

    text_t fullName = "Glitched Nexus";
    number_t age = 19;

    std::cout << fullName << "\n";
    std::cout <<   age    << "\n";

    return 0;
}