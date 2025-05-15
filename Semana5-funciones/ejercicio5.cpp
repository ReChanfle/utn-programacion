#include <iostream>
using namespace std;

/*
Hacer una función llamada Redondear que reciba como parámetro un número float y
devuelva un número entero con el redondeo del mismo.
Por ejemplo:
Si recibe 7.78, debe devolver 8.
Si recibe 7.48, debe devolver 7.
Si recibe 7.5, debe devolver 8.

 */

int Redondear(float number) {
    float decimal = number - (int) number;

    if (decimal >= 0.5)
        return (int) number + 1;

    return (int) number;
}


int main() {
    float n{0};
    cout << "Ingrese numero:" << endl;
    cin >> n;

    cout << "Numero redondeado: " << Redondear(n) << endl;

    return 0;
}
