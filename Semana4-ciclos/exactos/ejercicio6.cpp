#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista
y luego solicitar se ingresen esos N números. Se pide informar cuantos son positivos
Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se listará:
Cantidad de Positivos: 4
Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4.
Se listará: Cantidad de Positivos: 0

 */


int main(){

    int n{0}, negative{0}, positive{0};

    cout << "Ingrese cantidad de numeros: " << endl;
    cin >> n;


    for (int i = 0; i < n; i++) {
        int number_input{0};
        cout << "Ingrese un numero: " << endl;
        cin >> number_input;
          if(number_input > 0){
            positive++;
          }
          else
            negative++;
    }

    cout << "Positivo: " << positive << endl;
    cout << "\nNegativo: " << negative << endl;

    return 0;

}