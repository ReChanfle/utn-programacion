#include <iostream>
using namespace std;


/*
El costo de un desarrollo de un proyecto de software se calcula en base al lenguaje que se necesita:
Nombre:            Tipo            Valor hora
C/CC++                C            7500
C#                    #            6100
Python                P            5400
Go                    G            5000


Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más al costo del proyecto.
Le solicitan un programa que permita calcular el costo total de un proyecto basado en la cantidad
de horas (int), el tipo de lenguaje (char) y si es urgente o no (bool)
 */

int main() {

  char type;
  int hours{0}, total_cost{0};
  bool urgent{false};

  cout << "Ingrese un tipo:" << endl;
  cin >> type;
  cout << "Ingrese cantidad de horas:" << endl;
  cin >> hours;
  cout << "Ingrese si es urgente 1- Para urgente 0- para normal:" << endl;
  cin >> urgent;


  switch (toupper(type)) {
    case 'C':
      if(urgent) {
        total_cost = (7500 * hours) * 1.2;
        cout << "Costo total con urgencia:"<< total_cost << endl;
      }
      else {
        total_cost = (7500 * hours);
        cout << "Costo total:"<< total_cost << endl;
      }
      break;
    case '#':
      if(urgent) {
        total_cost = (6100 * hours) * 1.2;
        cout << "Costo total con urgencia:"<< total_cost << endl;
      }
      else {
        total_cost = (6100 * hours);
        cout << "Costo total:"<< total_cost << endl;
      }
    break;
    case 'P':
      if(urgent) {
        total_cost = (5400 * hours) * 1.2;
        cout << "Costo total con urgencia:"<< total_cost << endl;
      }
      else {
        total_cost = (5400 * hours);
        cout << "Costo total:"<< total_cost << endl;
      }
    break;
    case 'G':
      if(urgent) {
        total_cost = (5000 * hours) * 1.2;
        cout << "Costo total con urgencia:"<< total_cost << endl;
      }
      else {
        total_cost = (5000 * hours);
        cout << "Costo total:"<< total_cost << endl;
      }
    break;
      default:
        cout << "Error al procesar." << endl;

  }

  return 0;
}