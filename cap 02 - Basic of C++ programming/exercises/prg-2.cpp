/**********************************************************
 * Write a program that prints the following triangle of  *
 * asteriks:                                              *
 *  *                                                     *
 *  **                                                    *
 *  ***                                                   *
 *  **                                                    *
 *  *                                                     *
 *                                                        *
 **********************************************************/
#include <iostream>
using namespace std;

int main() {
    char asterik = '*';

    cout << asterik << endl;
    cout << asterik << asterik << endl;
    cout << asterik << asterik << asterik << endl;
    cout << asterik << asterik << endl;
    cout << asterik;

    return 0;
}