#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de 10 números, luego informar el máximo y el mínimo.
Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listará Máximo 42 Mínimo -15.
Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listará Máximo 42 Mínimo 5.
Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listará Máximo -5 Mínimo -42.
Observe que los tres ejemplos dejan en claro que la suposición de que el máximo
“seguramente” es un positivo y el mínimo “seguramente” es un negativo, queda totalmente descartada.
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

        if (number_input < 0 && !first_max) {
            aux_max = number_input;
            first_max = true;
        }

        if(number_input > aux_max)
             aux_max = number_input;

        if(number_input < aux)
            aux = number_input;


    }

    cout << "Numero Minimo: " << aux << endl;
    cout << "Numero Maximo: " << aux_max << endl;

    return 0;

}