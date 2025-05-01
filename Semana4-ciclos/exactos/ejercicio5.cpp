#include <iostream>
using namespace std;

/*
Hacer un programa para que el usuario ingrese dos números
y luego el programa muestre por pantalla los números entre el menor y el mayor de ambos.
Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15 y si
el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.
 */


int main(){

    int n{0},n1{0};

    cout << "Ingrese un numero: " << endl;
    cin >> n;
    cout << "Ingrese un numero: " << endl;
    cin >> n1;

    for (int i = n; i < n1; i++) {
        cout << i << endl;
    }

    return 0;

}