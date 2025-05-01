#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero,
luego informar el máximo.
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listará Máximo 55.
Ejemplo C: -15, -10, -20, -8, -55, -13, -55, -8, -5, -20, 0. Se listará Máximo -5.
 */


int main() {

    int number{0};
    int max{0};

    do {
        cout << "Ingrese un numero: " << endl;
        cin >> number;

        if (max < number)
            max = number;

    } while (number != 0);

    cout << "Maximo: " <<  max << endl;


    return 0;
}
