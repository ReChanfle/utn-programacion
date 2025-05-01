#include <iostream>

using namespace std;

// Un comercio vende tres marcas de alfajores distintas A, B y C.
// Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas
// y luego se informe el porcentaje de ventas para cada una de ellas.

// Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas
// entonces el programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.


int main () {

    float alf_a{0}, alf_b{0}, alf_c{0}, total_sales{0};
    float prom_a{0}, prom_b{0}, prom_c{0};

    cout << "Ingrese cantidad de alfafores A:" << endl;
    cin >> alf_a;
    cout << "Ingrese cantidad de alfafores B:" << endl;
    cin >> alf_b;
    cout << "Ingrese cantidad de alfafores C:" << endl;
    cin >> alf_c;
    total_sales = alf_a + alf_b + alf_c;
    prom_a = (alf_a * 100) / total_sales;
    prom_b = (alf_b* 100) / total_sales;
    prom_c = (alf_c * 100) / total_sales;
    cout << "Porcentaje de alfajores A:" << endl;
    cout <<  prom_a << endl;
    cout << "Porcentaje de alfajores B:" << endl;
    cout <<  prom_b << endl;
    cout << "Porcentaje de alfajores C:" << endl;
    cout <<  prom_c << endl;

    return 0;

}