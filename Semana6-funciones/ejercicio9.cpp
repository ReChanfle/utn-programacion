#include <iostream>
using namespace std;

/*
Escribir una función que reciba un número y retorne 1 si el número recibido es perfecto y 0 si no es perfecto.
Hacer un programa para que, dada una lista de números que finaliza con cero, informe cuántos de ellos eran perfectos.
Utilizar la función solicitada.
 */

int CalcularPerfecto(int number) {
    int suma{0};

    for (int i = number - 1; i > 0; i--) {
        if (number % i == 0)
            suma += i;
    }

    if (suma == number)
        return 1;

    return 0;
}


int main() {
    int number{0};
    cout << "Ingrese un numero:" << endl;
    cin >> number;

    if (number == 0 || number < 0) {
        cout << "No es Perfecto:" << endl;
        return 0;
    }

    if (CalcularPerfecto(number) == 1) {
        cout << "Es Perfecto:" << endl;
        return 0;
    }

    cout << "No es Perfecto:" << endl;


    return 0;
}
