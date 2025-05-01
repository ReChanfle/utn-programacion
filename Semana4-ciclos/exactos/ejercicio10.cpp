#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de 10 números enteros, luego informar el máximo
y la posición del máximo en la lista. En caso de “empates” considerar la primera aparición.
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20. Listará Máximo 35 Posición 7.
Ejemplo B: 5, -10, 2, 8, 25, 13, 55, -8, 55, 9. Listará Máximo 55 Posición 7.
Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Listará Máximo -6 Posición 8.
El tercer ejemplo demuestra que NO SIEMPRE en una lista de números el máximo es un positivo.

 */


int main(){

    int aux{0}, position{0};
    bool first = false;
    bool first_equal = false;


    for (int i = 1; i <= 10; i++) {
        int number_input{0};
        cout << "Ingrese un numero: " << endl;
        cin >> number_input;

        if (number_input < 0 && !first) {
            aux = number_input;
            first = true;
        }

        if(number_input > aux)
            aux = number_input;

        if(number_input == aux && !first_equal) {
            position = i;
            first_equal = true;
        }


    }

    cout << "Numero Maximo: " << aux << endl;
    cout << "Posicion empate: " << position << endl;

    return 0;

}