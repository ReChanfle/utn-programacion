#include <iostream>

using namespace std;

// Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla a cuantos días y horas equivalen.
// Ejemplo A: si se ingresan 26 horas el programa mostrará por pantalla que equivalen a 1 día y 2 horas.
// Ejemplo B: si se ingresan 72 horas el programa mostrará por pantalla que equivalen a 3 días y 0 horas.
// Ejemplo C: si se ingresan 20 horas el programa mostrará por pantalla que equivalen a 0 días y 20 horas.


int main() {

    int hours{0}, total_days{0}, total_hours{0};

    cout << "Ingrese cantidad de horas:" << endl;
    cin >> hours;

    total_days = hours / 24;
    total_hours = hours % 24;

    cout << "Cantida de dias:" << endl;
    cout << total_days << endl;
    cout << "Cantidad de horas:" << endl;
    cout << total_hours << endl;

    return 0;
}