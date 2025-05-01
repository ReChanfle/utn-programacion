#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero,
luego informar el máximo y la posición del máximo en la lista.
En caso de “empates” considerar la primera aparición.
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35 Posición 7.
Ejemplo B: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listará Máximo 55 Posición 7.
Ejemplo C: -9, -10, -20, -3, -9, -13, -55, -18, -55, 0. Se listará Máximo -3 Posición 4.

 */


int main() {

    int number{0};
    int max{0};
    int iterator{0};
    int iterator_point_max{0};
    bool first_number{true};

    do {

        cout << "Ingrese un numero: " << endl;
        cin >> number;

        if (first_number) {
            max = number;
            first_number = false;
        }

        iterator++;
        if (max < number) {
            max = number;
            iterator_point_max = iterator;
        }


    } while (number != 0);

    cout << "Maximo: " <<  max << endl;
    cout << "Posicion: " << iterator_point_max << endl;

    return 0;
}

