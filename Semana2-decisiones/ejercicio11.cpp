#include <iostream>
using namespace std;


/*
Hacer un programa para ingresar cinco números y
listar cuantos de esos cinco números son positivos,
cuantos son negativos y cuantos son iguales a 0.
 */


int main(){


    int number_1{0}, number_2{0}, number_3{0}, number_4{0}, number_5{0};
    int quantity_positives{0},quantity_negatives{0}, quantity_equals_zero{0};

  cout << "Ingrese un numero:" << endl;
  cin >> number_1;
  cout << "Ingrese segundo numero:" << endl;
  cin >> number_2;
  cout << "Ingrese tercer numero:" << endl;
  cin >> number_3;
  cout << "Ingrese cuarto numero:" << endl;
  cin >> number_4;
  cout << "Ingrese quinto numero:" << endl;
  cin >> number_5;

    if(number_1 > 0)
      quantity_positives++;
    else if(number_1 == 0)
      quantity_equals_zero++;
    else
      quantity_negatives++;

  if(number_2 > 0)
    quantity_positives++;
  else if(number_2 == 0)
    quantity_equals_zero++;
  else
    quantity_negatives++;

  if(number_3 > 0)
    quantity_positives++;
  else if(number_3 == 0)
    quantity_equals_zero++;
  else
    quantity_negatives++;


  if(number_4 > 0)
    quantity_positives++;
  else if(number_4 == 0)
    quantity_equals_zero++;
  else
    quantity_negatives++;

  if(number_5 > 0)
    quantity_positives++;
  else if(number_5 == 0)
    quantity_equals_zero++;
  else
    quantity_negatives++;


  cout << "Cantidad positivos: " << quantity_positives << endl;
  cout << "Cantidad negativos: " << quantity_negatives << endl;
  cout << "Cantidad iguales a cero: " << quantity_equals_zero << endl;



  return 0;
}