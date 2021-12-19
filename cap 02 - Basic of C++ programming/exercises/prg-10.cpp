/**********************************************************
 * Write a program that, given street number, street name,*
 * city name, state name, and zip code, prints the        *
 * address in the following format.                       *
 **********************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string streetNumber;
    string streetCity;
    string city;
    string stateName;
    string zipCode;

    cout << "Street number: ";
    cin >> streetNumber;

    cout << "Street city: ";
    cin >> streetCity;

    cout << "City: ";
    cin >> city;

    cout << "State Name: ";
    cin >> stateName;

    cout << "Zip Code: ";
    cin >> zipCode;

    string formato;
    formato = streetNumber + ", " + streetCity + " " + city + ", " + stateName + " " + zipCode;
    cout << formato;

    return 0;
}