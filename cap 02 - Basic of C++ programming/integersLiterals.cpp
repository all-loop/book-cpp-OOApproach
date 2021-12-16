/************************************************************
 * Using some literal values as variable initializers       *
 ************************************************************/
#include <iostream>
using namespace std;

int main() {
    // Declaration and initialization
    int x = -1245;
    unsigned int y = 1245;
    unsigned int z = -2367;
    unsigned int t = 14.56;

    // Outputting initialized values
    cout << x << endl; // Ok
    cout << y << endl; // Ok
    cout << z << endl; // Logical Error. A negative value is changed to positive.
    cout << t; // The value is truncated.

    return 0;
} 