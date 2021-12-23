/***********************************************************
 * Evaluating expression with right-to-left associativity. *
 ***********************************************************/
#include <iostream>
using namespace std;

int main() {
    // Declaration and initialization
    int x = 10;
    int y = 20;

    // Assignment
    y += x *= 40;

    // Printing values of x and y
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y;

    return 0;
}