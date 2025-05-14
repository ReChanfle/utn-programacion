#include <iostream>
using namespace std;

/*
Hacer una función llamada EsPrimoSophieGermain que reciba un número entero
y determine si el mismo es un número primo de Sophie Germain.
Debe devolver verdadero si lo es y falso si no lo es.
NOTA: En teoría de números, se dice que un número natural es un número primo de Sophie Germain,
si el número n es primo y 2*n+1 también lo es.
 */

bool EsPrimo(int number) {

    if (number <= 1)
        return false;

    for (int i = 2; i < number; i++) {

        if (number % i == 0)
            return false;

    }

    return true;
}


int main() {
    int n{0};
    cout << "Ingrese numero:" << endl;
    cin >> n;

    if (EsPrimo(n) && EsPrimo(2 * n + 1))
        cout << "Es primo" << endl;
    else
        cout << "No es primo" << endl;

    return 0;
}