#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero,
informar los 2 mayores valores ingresados, aclarando cual es el máximo y cuál el que le sigue.
Ejemplo: 10, 8, 12, 14, 3, 0 el resultado será 14 y 12.
Ejemplo: 14, 8, 12, 14, 3, 0 el resultado será 14 y 14.
Ejemplo: -4, -8, -12, -20, -2, 0 el resultado será -2 y -4
*/


int main() {

    bool asc{true}, first_number{true};
    int number_actual_pos{0};
    int number{0};
    do {

        cout << "Ingrese un numero: "<<  endl;
        cin >> number;
        if(first_number){
            first_number = false;
            number_actual_pos = number;
        }

        if(number < number_actual_pos && number !=0){
            asc = false;
        }
    } while (number != 0);

    if(asc)
        cout << "Conjunto Ordenado" << endl;
    else
        cout << "Conjunto No Ordenado" << endl;


    return 0;
}