/**********************************************************
 * A program to test overflow and underflow in signed integers
 **********************************************************/
#include <iostream>
#include <limits>
using namespace std;

int main() {
    // Find the maximum and minimum of an integer
    int num1 = numeric_limits<int>::max();
    int num2 = numeric_limits<int>::min();

    // Print the maximum and minimum values
    cout << "Value of maximum signed int: " << num1 << endl;
    cout << "Value of minimum signed int: " << num2 << endl;

    // Cause num1 and num2 overflow and underflow respectively
    num1 += 1;
    num2 -= 1;

    // Print the overflowed values
    cout << "The value of num1 + 1 after overflow: " << num1 << endl;
    cout << "The value of num2 - 1  after underflow: " << num2; 

    return 0;
}