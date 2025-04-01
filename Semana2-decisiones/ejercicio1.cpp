#include <iostream>
using namespace std;

/*Hacer un programa para ingresar por teclado un número y
luego emitir por pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
Importante: Verifique que el programa emita UN SOLO CARTEL.*/



int main() {

  int number{0};

    cout << "Ingrese un numero:" << endl;
    cin >> number;

    if(number>0) {
        cout << "====================\n";
        cout << "|    Numero        |\n";
        cout << "|   Positivo!      |\n";
        cout << "====================\n";
    }
    else if(number == 0) {
        cout << "====================\n";
        cout << "|    Numero        |\n";
        cout << "|      0           |\n";
        cout << "====================\n";
    }
    else {
        cout << "====================\n";
        cout << "|    Numero        |\n";
        cout << "|   Negativo!      |\n";
        cout << "====================\n";
    }



    return 0;

}