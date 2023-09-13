#include <iostream>

int main() {

    int students = 20;

    // students = students + 1;
    students += 1;

    // students = students + 3;
    students += 3;

    // Increment Operator
    // students = students + 1;
    students++;

    // students = students - 1;
    students -= 1;

    // students = students - 3;
    students -= 3;

    // Decrement Operator
    // students = students - 1;
    students--;  

    // students = students * 2;
    students *= 2;

    // Note that in division, since we are using an int variable,
    // our variable cannot have a decimal value and hence we will get only 
    // integer answers.
    // We will have a decimal number if we changed int to double in students.
    // students = students / 2;
    students /= 2;

    // The % operator gives us the reaminder for division.
    int remainder = students % 2;

    int remainder = students % 3;


    /* 
        Like in maths, we have order of precedence of operations.

        1. parentheses
        2. multiplication & division
        3. addition & subtraction
    */

    int students = 6 - 5 + 3 * 4 / 2;

    return 0;
}