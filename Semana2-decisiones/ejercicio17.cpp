#include <iostream>
using namespace std;


/*
Hacer un programa para ingresar por teclado cuatro números.
Si los valores que se ingresaran están ordenados en forma creciente,
emitir el mensaje “Conjunto Ordenado”, caso contrario emitir el mensaje: “Conjunto Desordenado”.
Ejemplo A: si los números que se ingresan son 8, 10, 12 y 14, entonces están ordenados.
Ejemplo B: si los números que se ingresan son 8, 12, 12 y 14, entonces están ordenados.
Ejemplo C: si los números que se ingresan son 10, 8, 12 y 14, entonces están desordenados.
*/


int main() {


  int number_1{0}, number_2{0}, number_3{0}, number_4{0}, number_5{0};

  cout << "Ingrese un numero:" << endl;
  cin >> number_1;
  cout << "Ingrese segundo numero:" << endl;
  cin >> number_2;
  cout << "Ingrese tercer numero:" << endl;
  cin >> number_3;
  cout << "Ingrese cuarto numero:" << endl;
  cin >> number_4;

  if(number_1 < number_2 && number_2 < number_3 && number_3 < number_4){
    cout << "Conjunto Ordenado" << endl;
  }
  else
    cout << "Conjunto Desordenado" << endl;



  return 0;
}