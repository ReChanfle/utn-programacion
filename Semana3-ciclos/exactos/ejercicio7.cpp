#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de 10 números,
luego informar cuántos son positivos, cuántos son negativos, y cuántos iguales a cero.
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 11.
 */


int main(){

    int n = 10, negative{0}, positive{0}, zero{0};

    for (int i = 0; i < n; i++) {
        int number_input{0};
        cout << "Ingrese un numero: " << endl;
        cin >> number_input;
        if(number_input > 0)
            positive++;
        else if(number_input < 0)
            negative++;
        else
          zero++;
    }

    cout << "Positivo: " << positive << endl;
    cout << "\nNegativo: " << negative << endl;
    cout << "\nCero: " << zero << endl;

    return 0;

}