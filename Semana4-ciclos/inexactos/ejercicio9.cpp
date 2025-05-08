#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero,
luego informar el máximo de los pares.

Ejemplo A: 2, 10, 20, 8, 25, 13, 36, -8, -5, 20, 0. Se listará Máximo 36.
Ejemplo B: 5, -13, 23, 81, -55, -13, 55, 4, 15, -20, 0. Se listará Máximo 4.
Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20, 0. Se listará Máximo -8.

 */


int main() {

    int number{0};
    int max{0};
    bool first_number{true};

    do {

        cout << "Ingrese un numero: " << endl;
        cin >> number;

        if (first_number) {
            max = number;
            first_number = false;
        }

        if (max <= number && number != 0 && number % 2 == 0) {
            max = number;
            cout << max << endl;

        }


    } while (number != 0);

    cout << "Maximo: " <<  max << endl;


    return 0;
}
