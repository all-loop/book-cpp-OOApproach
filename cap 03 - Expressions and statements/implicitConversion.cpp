/*********************************************************
 * Checking type conversion in an expression of          *
 * mixed types.                                          *
 *********************************************************/
#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    // Declaration
    int x;
    double y;

    // Assginment
    x = 23.67;
    y = 130;

    // Checking type and value of x
    cout << "Type of x = 23.67: " << typeid(x = 23.67).name() << endl;
    cout << "Value of x after assignment: " << x  << endl;

    // Checking type and value of y
    cout << "Type of y = 130: " << typeid(y = 130).name() << endl;
    cout << "Value of y after assignment: " << y;

    return 0;
}