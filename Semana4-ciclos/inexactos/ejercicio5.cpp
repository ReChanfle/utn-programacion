#include <iostream>
using namespace std;

/*
Hacer un programa para que el usuario ingrese dos números y
luego el programa muestre por pantalla los números entre el menor y el mayor de ambos.
Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15;
y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.

 */


int main(){

    int one{0}, two{0};

    cout << "Ingrese el primer numero: " << endl;
    cin >> one;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> two;

    if(one > two){
        while (one > two) {
            cout << one << endl;
            one--;
        }
    }
    while (two > one) {
        cout << two << endl;
        two--;
    }


    return 0;

}
