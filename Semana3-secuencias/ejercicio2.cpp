#include <iostream>

using namespace std;


// Hacer un programa que solicite por teclado que se ingresen dos números y luego guardarlos en dos variables distintas.
// A continuación se deben intercambiar mutuamente los valores en ambas variables y mostrarlos por pantalla.
// Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B, entonces A=3 y B=8,
// pero luego debe quedar A=8 y B=3.


int main () {

  int aux{0}, n1{0}, n2{0};
  cout << "Ingrese primer numero:" << endl;
  cin >> n1;
  cout << "Ingrese segundo numero:" << endl;
  cin >> n2;
  aux = n1;
  n1 = n2;
  n2 = aux;
  cout  << "Numeros invertidos:" <<  endl;
  cout << "Numero uno:" << endl;
  cout << n1 << endl;
  cout << "Numero dos:" << endl;
  cout << n2 << endl;

  return 0;

};
