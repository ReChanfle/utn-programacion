#include <iostream>
using namespace std;

/*
Escribir una función llamada calcularPotencia para que, dados dos números enteros,
calcule y devuelva la potencia del primero a la del segundo.
Tener en cuenta las siguientes posibilidades:
 calcularPotencia(2, 3)  → 8
 calcularPotencia(2, 0)  → 1
 calcularPotencia(2, -3)  → 0,125

 */

double CalcularPotencia(int base, int exponente) {

    double resultado = 1.0;

    if (exponente > 0) {
        for (int i = 0; i < exponente; i++) {
            resultado *= base;
        }
    } else if (exponente < 0) {
        for (int i = 0; i < -exponente; i++) {
            resultado *= base;
        }
        resultado = 1.0 / resultado;
    } else {
        resultado = 1.0;
    }

    return resultado;
}


int main() {

    int base{0}, exponente{0};


    cout << "Ingrese un numero:" << endl;
    cin >> number;
    cout << "Ingrese potencia:" << endl;
    cin >> power;



        cout << "Resultado: " << CalcularPotencia(number, power) << endl;


    return 0;
}