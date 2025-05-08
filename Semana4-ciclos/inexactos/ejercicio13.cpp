#include <iostream>
using namespace std;

/*
Dada una lista de números que finaliza cuando se ingresa un cero,
informar cual es el primer y último número impar ingresado.
Ejemplo 8, 4, -5, 6, 9, 5, 18, 0 se informa -5 y 5.
*/


int main() {

    int number{0};
    int first_number_impar{0};
    int second_number_impar{0};
    bool first_number{true};

    do {
        cout << "Ingrese un numero: " << endl;
        cin >> number;

        if (number % 2 != 0 && first_number == true) {
            first_number_impar = number;
            first_number = false;
        }

        if (number % 2 != 0  && first_number_impar != number) {
            second_number_impar = number;
        }
    } while (number != 0);

    cout << "Primer impar: " << first_number_impar << endl;
    cout << "Primer impar: " << second_number_impar << endl;


    return 0;
}