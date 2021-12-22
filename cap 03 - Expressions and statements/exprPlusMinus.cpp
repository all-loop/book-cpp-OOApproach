/********************************************************
 * The program shows the use of plus/minus expressions  *
 ********************************************************/
#include <iostream>
using namespace std;

int main() {
    // Declaration and initialization
    int x = 4;
    int y = -10;

    // Applying plus and minus operator on variable x
    cout << "Using plus operator on x: " << +x << endl;
    cout << "Using minus operator on x: " << -x << endl;

    // Applying plus and minus operator on variable y
    cout << "Using plus operator on y: " << +y << endl;
    cout << "Using minus operator on y: " << -y << endl;    

    return 0;
}

/*
    La expresión sizeof se puede usar de dos maneras:
    1. sizeof expression -> Encuentra el tamaño de una expresión primaria.
    2. sizeof(type) -> Encuentra el tamaño de un tipo. Este siempre depende del sistema en el que se ejecuta.
*/
