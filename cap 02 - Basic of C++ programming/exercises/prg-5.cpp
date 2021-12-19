/*********************************************************
 * Write a program that inputs four integer values and   *
 * calculates and prints the sum of them.                *
 *********************************************************/
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    long sum;

    cout << "1er entero: ";
    cin >> a;

    cout << "2do entero: ";
    cin >> b;

    cout << "3er entero: ";
    cin >> c;

    cout << "4to entero: ";
    cin >> d;

    sum = a + b + c + d;

    cout << "Los 4 enteros ingresados suman: " << sum;

    return 0;
}