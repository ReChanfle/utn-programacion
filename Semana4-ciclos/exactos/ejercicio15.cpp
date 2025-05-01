#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de 8 números y
luego informar si todos están ordenados en forma creciente.
En caso de haber dos números “empatados” considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo A: -10, 1, 5, 7, 15, 18, 20, 23
se emitirá un cartel: “Conjunto Ordenado”
Ejemplo B: 10, 10, 15, 20, 25, 25, 28, 33
se emitirá un cartel: “Conjunto Ordenado”
Ejemplo C: 10, 1, 15, 7, -15, 18, 20, 23
se emitirá un cartel: “Conjunto No Ordenado”
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 17.
 */


int main(){

     bool asc{true}, first_number{true};
     int number_actual_pos{0};

  for(int i = 0; i < 8; i++) {
    int number{0};

    cout << "Ingrese un numero: "<<  endl;
    cin >> number;
    if(first_number){
      first_number = false;
      number_actual_pos = number;
    }

    if(number < number_actual_pos){
      asc = false;
    }
  }


  if(asc)
    cout << "Conjunto Ordenado" << endl;
  else
    cout << "Conjunto No Ordenado" << endl;


  return 0;

}