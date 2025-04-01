#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar por teclado dos números y
luego informar por pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo.
*/



int main() {

  int number_1{0}, number_2{0};

  cout << "Ingrese el primer numero:" << endl;
  cin >> number_1;
  cout << "Ingrese el segundo numero:" << endl;
  cin >> number_2;

  if(number_1 % number_2 == 0) {
    cout << "El primer numero es multiplo del segundo" << endl;
  }
  else
    cout << "El primer numero no es multiplo del segundo" << endl;


  return 0;
}
