/*********************************************************
 * Write a program that, given the time duration of a    *
 * task in the number of hours, minutes, and seconds,    *
 * calculates the duration in seconds.                   *
 *********************************************************/
#include <iostream>
using namespace std;

int main() {

    int hours, minutes, seconds;
    long total_seconds;

    cout << "Dame las horas: ";
    cin >> hours;

    cout << "Dame los minutos: ";
    cin >> minutes;

    cout << "Dame los segundos: ";
    cin >> seconds;

    total_seconds = 3600 * hours + 60 * minutes + seconds;
    cout << "Segundos totales (horas + minutos + segundos): " << total_seconds << "s";

    return 0;
}