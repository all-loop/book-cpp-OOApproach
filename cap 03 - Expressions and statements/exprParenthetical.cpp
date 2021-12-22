/***********************************************************
 * The program shows the use of parenthetical expressions. *
 ***********************************************************/
#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    int x = 4;

    // Printing the first expression with and without parentheses
    cout << "Value with parentheses: " << (x + 3) * 5 << endl;
    cout << "Value without parentheses: " << x + 3 * 5 << endl;

    // Printing the second expression with and without parentheses
    cout << "Value with parentheses: " << 12 / (x+2) << endl;
    cout << "Value without parentheses: " << 12 / x+2 << endl;

    return 0;
}