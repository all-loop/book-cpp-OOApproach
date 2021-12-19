/*********************************************************
 * Write a program that calculates and prints the area   *
 * and the perimeter of a square when the size of one    *
 * side is given.                                        *
 *********************************************************/
#include <iostream>
using namespace std;

int main() {
    double side_square = 0;
    double perimeter = 0;
    double area = 0;

    cout << "Medida del lado: ";
    cin >> side_square;

    perimeter = 4 * side_square;
    cout << "Perimeter: " << perimeter << endl;

    area = side_square * side_square;
    cout << "Area: "  << area;

    return 0;
}