#include <iostream>
using namespace std;

/*
Hacer una función que reciba un número entero por valor llamado día y un string llamado nombre por referencia
y le asigne el nombre correspondiente según el número de día. Siendo 0 → Domingo y 6 → Sábado.

 */

void IdentificarDia(int day, string &name) {

  switch(day){
      case 0: name = "Domingo"; break;
      case 1: name = "Lunes"; break;
      case 2: name = "Martes"; break;
      case 3: name = "Miércoles"; break;
      case 4: name = "Jueves"; break;
      case 5: name = "Viernes"; break;
      case 6: name = "Sábado"; break;
      default: name = "Día inválido"; break;
  }

}


int main() {

    int day{0};
    string name;
    cout << "Ingrese dia:" << endl;
    cin >> day;

    IdentificarDia(day, name);

    cout << "Nombre del dia: " << name << endl;

    return 0;
}