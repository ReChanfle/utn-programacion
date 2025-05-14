#include <iostream>
using namespace std;

/*
Hacer una función llamada contarDigitos que reciba por valor un número entero y determine
y devuelva la cantidad de dígitos del número. Por ejemplo, si se recibe el número 840 debe devolver 3.
Hacer un programa que, a partir de un número que ingresa el usuario, informe por pantalla la cantidad de
dígitos del número ingresado.
 */

int ContarDigitos(int number) {

      int qnt_digits{1};
      int base = 10;

    while (number >= base) {
        qnt_digits++;
        base *= 10;
    }

    return qnt_digits;

}


int main() {
    int number{0};
     int digits{0};

    cout << "Ingrese un numero:" << endl;
    cin >> number;
    digits = ContarDigitos(number);


    cout << "Cantidad de digitos: " << digits << endl;


    return 0;
}
