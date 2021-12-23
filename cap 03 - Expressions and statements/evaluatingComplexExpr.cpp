/********************************************************
 * Evaluating an expression with three leves of         *
 * precedence.                                          *
 ********************************************************/
#include <iostream>
using namespace std;

int main() {
    // Declare variable
    int result;

    // Evaluate the expression and store the result in the variable
    result = 5 - 15 % 4;

    // Output the result stored in the variable
    cout << "The value stored in result: " << result;

    return 0;
}