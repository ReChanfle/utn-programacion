#include <iostream>
using namespace std;

/*
Hacer una función llamada EsPar que determine si un número es par o no.
La función debe recibir un número entero por valor y devolver true si es par o false si no lo es.
La función no debe mostrar nada por pantalla.
Hacer un programa para ingresar un número y, utilizando EsPar,
emita luego un cartel indicando si el número ingresado es par o no es par.
 */

bool EsPar(int number){

  if(number % 2 == 0){
    return true;
  }
  else
    return false;

}


int main(){

  int number{0};
  cout << "Ingrese un numero:" << endl;
  cin >> number;

  if(EsPar(number))
    cout << "Es par" << endl;
  else
    cout << "No es par" << endl;



    return 0;

}
