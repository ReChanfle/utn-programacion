#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de 10 números e informar el máximo de los negativos
y el mínimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. Máximo Negativo -3. Mínimo Positivo 2.

 */


int main(){

    int aux{0}, aux_max{0};
    bool first_min = false;
    bool first_max = false;

    for (int i = 1; i <= 10; i++) {
        int number_input{0};
        cout << "Ingrese un numero: " << endl;
        cin >> number_input;

        if (number_input < 0 && !first_min) {
            aux = number_input;
            first_min = true;
        }

        if (number_input > 0 && !first_max) {
            aux_max = number_input;
            first_max = true;
        }

        if(number_input > 0 ) {
            if ( number_input < aux_max)
            aux_max = number_input;
        }

        if(number_input < 0 ) {
          if(number_input > aux)
            aux = number_input;
        }


    }

    cout << "Máximo Negativo: " << aux << endl;
    cout << "Mínimo Positivo: " << aux_max << endl;

    return 0;

}