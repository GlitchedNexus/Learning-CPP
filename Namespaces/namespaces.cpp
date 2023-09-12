#include <iostream>

/*
Namespaces:

In large projects each entity need a unique name so that we can use it.
But this creates the issue where different entities may have the4 same name.
To prevent naming conflicts a namespace allows for identically named entities 
as long as the namespaces are different.

*/

namespace first {
    int x = 10;
}

namespace second {
    int x = 3;
}

int main() {

    /*
    NOTE: We can change the name space by telling by using the commented command below.
    */
    // using namespace <name of namespace>;

    int x = 5;

    // Displays local version of x
    std::cout << x << "\n";

    // Displays first namespace version of x
    std::cout << first::x << "\n";

    // Displays second namespace version of x
    std::cout << second::x << "\n";

}