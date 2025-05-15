#include <iostream>
using namespace std;

/*
Escribir una función CalcularMaximoAbsoluto que reciba dos números y retorne el máximo absoluto de ambos.
Por ejemplo el máximo absoluto de los números -40 y 20 es 40.
Hacer un programa para ingresar dos números y, utilizando CalcularMaximoAbsoluto,
emita luego el número mayor absoluto de ambos.
 */

int CalcularMaximoAbsoluto(int n1, int n2) {

    int abs_1{0};
    int abs_2{0};
    if(n1 < 0) {
        abs_1 = n1 *= -1;
    }

    if(n1 < 0) {
        abs_2 = n2 *= -1;
    }

    if(abs_1 > abs_2) {
        return abs_1;
    }
    return abs_2;

}


int main() {

    int n1{0},n2{0};
    cout << "Ingrese el primer numero:" << endl;
    cin >> n1;
    cout << "Ingrese el segundo numero:" << endl;
    cin >> n2;

    CalcularMaximoAbsoluto(n1, n2);

    cout << "El mayor absoluto: " <<  CalcularMaximoAbsoluto(n1, n2) << endl;

    return 0;
}