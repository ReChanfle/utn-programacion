#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar por teclado un número y
luego informar por pantalla con un cartel aclaratorio si el mismo es par o impar.

*/

int main(){

  int number{0};

  cout << "Ingrese un numero:" << endl;
  cin >> number;

  if(number % 2 == 0)
    cout << "Numero par" << endl;
  else
    cout << "Numero impar" << endl;


  return 0;

}
