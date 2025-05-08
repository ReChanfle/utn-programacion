#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero,
luego informar el máximo y el mínimo.

Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 2, 22, -13, 0.
Se listará Máximo 42 Mínimo -15.

Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13, 0.
Se listará Máximo 42 Mínimo 5.

Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13, 0.
Se listará Máximo -5 Mínimo -42.

Observe que los ejemplos B y C dejan en claro que la suposición de que el máximo
“seguramente” es un positivo y el mínimo “seguramente” es un negativo, es incorrecta.
 */


int main() {

    int number{0};
    int max{0};
    int min{0};
    int iterator{0};
    bool first_number{true}, second_number{true};

    do {
        iterator++;
        cout << "Ingrese un numero: " << endl;
        cin >> number;

        if (first_number) {
            max = number;
            first_number = false;
        }

        if(second_number && iterator > 1) {
          min = number;
          second_number = false;
        }

        if (max <= number && number != 0) {
            max = number;

        }

        if (min >= number && number != 0) {
            min = number;


        }


    } while (number != 0);

    cout << "Maximo: " <<  max << endl;
    cout << "Minimo: " <<  min << endl;


    return 0;
}