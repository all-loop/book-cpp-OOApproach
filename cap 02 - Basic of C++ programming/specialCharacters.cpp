/*************************************************
 * Using some special characters in strings      *
 *************************************************/

#include <iostream>
using namespace std;

int main() {
    cout << "Hello \n"; // \n has the same effect as endl
    cout << "Hi\tFriends." << endl; // effect of tab
    cout << "Buenos días  \bamigos." << endl; // Two space after dias. \b deletes the previous character (one of the spaces)
    cout << "Hello\rBonjour mes amis." << endl; // \r moves control to beginning of line (Hello will be gone)
    cout << "This is a single quote\'." << endl; // A single quoutes is displayed
    cout << "This is a double quote\"." << endl; // A double quoutes is displayed
    cout << "This is how to print a backslash \\."; // A backslash is displayed

    return 0;
}