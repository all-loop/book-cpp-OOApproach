/**********************************************************
 * Write a program that, using a C++ string, prints your  *
 * name in the format shown below after being prompted to *
 * input your first and the last name. Note that the last *
 * name should come before the first name as shown.       *
 *                                                        *
 * "your full name is: last, first"                       *
 **********************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string first;
    string last;
    string formato;

    cout << "Tu nombre es: ";
    cin >> first;

    cout << "Tu apellido es: ";
    cin >> last;

    formato = "Your full name is: " + last + ", " + first;
    cout << formato;

    return 0;
}