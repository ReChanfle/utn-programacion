#include <iostream>
using namespace std;


/*
Hacer un programa para ingresar por teclado tres números y
luego determinar e informar con una leyenda aclaratoria si los tres son iguales entre sí,
caso contrario no emitir nada.
Tener en cuenta:  Si A es igual a B y B es igual a C, entonces A y C son iguales.

*/

int main(){

  int number_1{0},number_2{0}, number_3{0};
  bool equals_numbers = false;

  cout << "Ingrese un numero:" << endl;
  cin >> number_1;
  cout << "Ingrese segundo numero:" << endl;
  cin >> number_2;
  cout << "Ingrese tercer numero:" << endl;
  cin >> number_3;

  if(number_1 == number_2 && number_2 == number_3){
    equals_numbers = true;
  }

  if(equals_numbers)
    cout << "Numeros iguales:" << endl;
  else
    cout << "Numeros desiguales:" << endl;


  return 0;
}