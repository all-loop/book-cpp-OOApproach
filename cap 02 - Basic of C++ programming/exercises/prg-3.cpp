/*********************************************************
 * Write a program that prints a big letter H as shown below:
 * H H                                                   *
 * H H                                                   *
 * HHH                                                   *
 * H H                                                   *
 * H H                                                   *
 *                                                       *
 *********************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string first_h = "H H";
    string second_h = "HHH";

    cout << first_h << endl;
    cout << first_h << endl;
    cout << second_h << endl;
    cout << first_h << endl;
    cout << first_h;

    return 0;
}