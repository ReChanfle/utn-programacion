#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar cinco números y listar el máximo y el mínimo de ellos.
 */

int main(){

    int number_1{0}, number_2{0}, number_3{0}, number_4{0}, number_5{0};
    int aux_max{0},aux_min{0};

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

    if(number_1 > number_2) {
        aux_max = number_1;
        aux_min = number_2;
    }
    else {
      aux_max = number_2;
        aux_min = number_1;
    }
    if(aux_max < number_3) {
      aux_max = number_3;
      if(aux_min > number_3)
         aux_min = number_3;
    }

    if(aux_max < number_4) {
      aux_max = number_4;
      if(aux_min > number_4)
        aux_min = number_4;
    }

    if(aux_max < number_5) {
      aux_max = number_5;
      if(aux_min > number_5)
        aux_min = number_5;
    }

    cout << "El numero mayor es:" << aux_max << endl;
    cout << "El numero menor es:" << aux_min << endl;


  return 0;
}