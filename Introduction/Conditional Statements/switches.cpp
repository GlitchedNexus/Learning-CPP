#include <iostream>

int main() {

    /*

    The "switch" Keyword:
    
    These are a neat alternative for multiple if-else chains
    when we are trying to check for a specific value.

    They allow us to compare one value against matching cases.

    Switches are alot more effiecient and cleaner in these
    cases. The syntax is as follows:

        switch(<variable to check>) {

            case <value>: 
                <code block>
                break;
        }

    We also have access to the "default" case which allows us
    to create safegaurds in the event we have no matching cases.

    */

    int month;

    std::cout << "Enter month number: ";
    std::cin  >> month;

    // We pass the value we would like to check in
    // the switch statement.
    switch (month) {

        case 1: 
            std::cout << "It is January" << "\n";
            break;
        
        case 2: 
            std::cout << "It is February" << "\n";
            break;
        
        case 3: 
            std::cout << "It is March" << "\n";
            break;
        
        case 4: 
            std::cout << "It is April" << "\n";
            break;
        
        case 5: 
            std::cout << "It is May" << "\n";
            break;
        
        case 6: 
            std::cout << "It is June" << "\n";
            break;
        
        case 7: 
            std::cout << "It is July" << "\n";
            break;
        
        case 8: 
            std::cout << "It is August" << "\n";
            break;
        
        case 9: 
            std::cout << "It is September" << "\n";
            break;
        
        case 10: 
            std::cout << "It is October" << "\n";
            break;
        
        case 11: 
            std::cout << "It is November" << "\n";
            break;
        
        case 12: 
            std::cout << "It is December" << "\n";
            break;

        default: 
            std::cout << "Inavlid Input!" << "\n";
            break;
            
    }

   

    return 0;
}