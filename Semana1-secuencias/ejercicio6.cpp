#include <iostream>

using namespace std;

// Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos
// para cada una de las cuatro semanas del mes. El programa debe listar la recaudación promedio por semana
// y el porcentaje de recaudación por semana.
// Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación promedio $2000
// y como porcentajes por semana: 20%, 15%, 60% y 5%.


int main () {

    float week_1{0}, week_2 {0}, week_3{0}, week_4{0};
    float prom_month{0}, total_month{0}, per_week_1{0}, per_week_2{0}, per_week_3{0}, per_week_4{0};

    cout << "Ingrese recaudacion semana 1:" << endl;
    cin >> week_1;
    cout << "Ingrese recaudacion semana 2:" << endl;
    cin >> week_2;
    cout << "Ingrese recaudacion semana 3:" << endl;
    cin >> week_3;
    cout << "Ingrese recaudacion semana 4:" << endl;
    cin >> week_4;

    total_month = week_1 + week_2 + week_3 + week_4;
    prom_month = (week_1 + week_2 + week_3 + week_4) / 4;
    per_week_1 = (week_1 * 100) / total_month;
    per_week_2 = (week_2 * 100) / total_month;
    per_week_3 = (week_3 * 100) / total_month;
    per_week_4 = (week_4 * 100) / total_month;

    cout << "Recaudacion promedio:" << endl;
    cout <<  prom_month << endl;
    cout << "Porcentaje semana 1:" << endl;
    cout <<  per_week_1 << endl;
    cout << "Porcentaje semana 2:" << endl;
    cout <<  per_week_2 << endl;
    cout << "Porcentaje semana 3:" << endl;
    cout <<  per_week_3 << endl;
    cout << "Porcentaje semana 4:" << endl;
    cout <<  per_week_4 << endl;

    return 0;

}