#include <iostream>

using namespace std;

// Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuantas horas y minutos equivalen.
// Ejemplo A: si se ingresan 380 minutos el programa mostrará por pantalla que equivalen a 6 horas y 20 minutos.
// Ejemplo B: si se ingresan 720 minutos el programa mostrará por pantalla que equivalen a 12 horas y 0 minutos.
// Ejemplo C: si se ingresan 50 minutos el programa mostrará por pantalla que equivalen a 0 horas y 50 minutos


int main() {

  int minutes{0}, total_hours{0}, total_minutes{0};

  cout << "Ingrese cantidad de minutos:" << endl;
  cin >> minutes;

  total_hours = minutes / 60;
  total_minutes = minutes % 60;

  cout << "Ingrese cantidad de horas:" << endl;
  cout << total_hours << endl;
  cout << "Cantidad de minutos:" << endl;
  cout << total_minutes << endl;

  return 0;
}