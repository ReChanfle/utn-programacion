#include <iostream>
using namespace std;

/*
Hacer una función llamada EsPrimo que determine si un número es primo o no.
La función debe recibir el número y devolver true si es primo o false si no lo es.
La función no debe mostrar nada por pantalla.
Hacer un programa para ingresar un número y, utilizando EsPrimo,
emita luego un cartel indicando si el número ingresado es primo o no es primo.
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

    if (EsPrimo(n))
        cout << "Es primo" << endl;
    else
        cout << "No es primo" << endl;

    return 0;
}
