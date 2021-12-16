/***************************************************
 * Using some stand alone literal values           *
 ***************************************************/

#include <iostream>
using namespace std;


int main() {
    // Variable definition
    int x;
    unsigned long int y;

    // Assignments
    x = 1456;
    y = -1456;

    // Salidas
    cout << x << endl; // Ok
    cout << y << endl; // Wrong value. The variable is unsigned; the value is signed.
    cout << 1234 << endl; // Ok
    cout << 143267L; // Ok

    return 0;
}