#include <iostream>
using namespace std;


/*
Basado en los 2 ejercicios anteriores,
hacer un programa para ingresar por teclado la longitud de los tres lados de un triángulo
y luego listar qué tipo de triángulo es:
- Equilátero: si los tres lados son iguales.
- Isósceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre sí.
 */

int main(){

  int lado_a{0}, lado_b{0}, lado_c{0};

  cout << "Ingrese lado:" << endl;
  cin >> lado_a;
  cout << "Ingrese lado:" << endl;
  cin >> lado_b;
  cout << "Ingrese lado:" << endl;
  cin >> lado_c;

  if(lado_a == lado_b && lado_b == lado_c){
      cout << "Triangulo Equilatero" << endl;
  }
  else if(lado_a == lado_b || lado_b == lado_c){
    cout << "Triangulo Isosceles" << endl;
  }
  else if(lado_a != lado_b && lado_b != lado_c && lado_c != lado_a){
    cout << "Triangulo Escaleno" << endl;
  }



  return 0;
}