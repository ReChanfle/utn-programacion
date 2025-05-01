#include <iostream>

using namespace std;


// Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 más $700 de premio por cada auto vendido.
// Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor
// y luego informar por pantalla el sueldo total a pagar.
// Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $7800.


int main () {

    float qnt_cars{0}, total_salary{0};
    const float fixed_salary = 5000;
    const float gift_for_sale = 700;
    cout << "Ingrese cantidad de autos vendidos:" << endl;
    cin >> qnt_cars;
    total_salary = (gift_for_sale * qnt_cars) + fixed_salary;
    cout << "Salario total:" << endl;
    cout << total_salary << endl;

    return 0;

};