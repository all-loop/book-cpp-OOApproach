/*********************************************************
 * Comparing implicit and explicit conversion in an      *
 * expression.                                           *
 *********************************************************/
#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    // Declaration
    double x = 23.56;
    int y = 30;

    // Allowing implicit conversion
    cout << "Type of x + y: " << typeid(x + y ).name() << endl;
    cout << "Without casting: " << x + y << endl;

    // Forcing explicit conversion
    cout << "Type of static_cast<int> (x) + y: " << typeid(static_cast<int> (x) + y).name() << endl;
    cout << "With casting: " << static_cast<int> (x) + y;

    return 0;
}