/*********************************************************
 * Write a program that calculate the sales tax of a     *
 * transaction given the sale amount. Assume that the    *
 * tax is 9 percent. Use a constant to define the tax    *
 * rate. Run your program several times, each with       *
 * different values for sale amount. Use the following   *
 * format for output.                                    *
 *                                                       *
 * sale amount...                                        * 
 * Tax amount...                                         *
 * Total amount due:...                                  *
 *********************************************************/
#include <iostream>
using namespace std;

int main() {
    const double tax = 0.09;
    double amount = 0.0;
    double total_amount;

    cout << "Precio de la venta: ";
    cin >> amount;

    total_amount = amount + amount * tax;
    cout << "Resumen: " << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Valor de la venta = " << amount << endl;
    cout << "Tasa de impuesto = " << tax * 100 << "%" << endl;
    cout << "Monto total adeudado = " << total_amount;

    return 0;
}