/**********************************************************
 * Write a program that prompts the user to enter two     *
 * integers. It then prints their sum. Run your program   *
 * several times, each with different values for          *
 * variables.                                             *
 **********************************************************/
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    long suma;

    cout << "Ingrese numero 1: ";
    cin >> num1;

    cout << "Ingrese numero 2: ";
    cin >> num2;

    suma = num1 + num2;
    cout << num1 << " + " << num2 << " = " << suma;

    return 0;
}