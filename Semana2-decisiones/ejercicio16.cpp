#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas por un alumno y
luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:
- “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más.
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes.
- “Recursa la materia”, si no aprobó ningún examen parcial.
 */

int main() {

    int exam_1{0}, exam_2{0}, exam_3{0}, exam_4{0};
    int prom_points = 27;
    int final_points = 16;
    int recuperatory_points = 4;
    int recall_points = 0;
    int sum{0};

    cout << "Ingrese nota 1:" << endl;
    cin >> exam_1;
    cout << "Ingrese nota 2:" << endl;
    cin >> exam_2;
    cout << "Ingrese nota 3:" << endl;
    cin >> exam_3;
    cout << "Ingrese nota 4:" << endl;
    cin >> exam_4;

    sum = exam_1 + exam_2 + exam_3 + exam_4;

   if(sum >= prom_points) {
       cout << "Promociona" << endl;
   }
   else if(sum >= final_points) {
       cout << "Rinde examen final" << endl;
   }
   else if(sum >= recuperatory_points) {
       cout << "Recupera Parciales" << endl;
   }
   else if(sum >= recall_points) {
       cout << "Recursa la materia" << endl;
   }

  return 0;
}