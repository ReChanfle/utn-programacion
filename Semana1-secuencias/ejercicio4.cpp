#include <iostream>

using namespace std;

// Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avión
// y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación
// y el porcentaje de no ocupación del mismo.
// Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes,
// el porcentaje de ocupación que se informará será de un 40% y el porcentaje de no ocupación será de un 60%.



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