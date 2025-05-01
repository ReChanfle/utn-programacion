#include <iostream>

using namespace std;

//Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuántos días, horas y minutos equivalen.
//Ejemplo A: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1 día, 1 hora y 20 minutos.
//Ejemplo B: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0 día, 8 horas y 0 minutos.


int main() {

    int  minutes{0}, total_days{0}, total_hours{0}, total_minutes{0};

    cout << "Ingrese cantidad de minutos:" << endl;
    cin >> minutes;

    total_days = minutes / 1440;
    total_hours = minutes / 60;
    total_minutes = minutes % 60;

    cout << "Cantidad de dias:" << endl;
    cout << total_days << endl;
    cout << "Cantidad de horas:" << endl;
    cout << total_hours << endl;
    cout << "Cantidad de minutos:" << endl;
    cout << total_minutes << endl;

    return 0;
}