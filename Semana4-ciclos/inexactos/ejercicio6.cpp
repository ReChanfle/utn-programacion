#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero,
luego informar cuántos son positivos y cuántos son negativos.
Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listará Positivos: 4 Negativos: 2.
Para resolver este ejercicio sugerimos resolver antes el TP3 EJ 7.
 */


int main(){

    int positives{0}, negatives{0};
    int number{0};

    do {
      cout << "Ingrese un numero: " << endl;
      cin >> number;

      if(number > 0 )
        positives++;
      if(number < 0 )
        negatives++;

    }
    while (number != 0);


    cout << "Positivos: " << positives << endl;
    cout << "Negativos: " << negatives << endl;


    return 0;

}

