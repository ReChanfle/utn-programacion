#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar cinco números y listar el máximo y el mínimo de ellos.
 */

int main(){

    int number_1{0}, number_2{0}, number_3{0}, number_4{0}, number_5{0};
    int aux{0};

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

    if(number_1 > number_2)
        aux = number_1;
    else
        aux = number_2;
    if(aux < number_3)
        aux = number_3;
    if(aux < number_4)
      aux = number_4;
    if(aux < number_5)
      aux = number_5;


    cout << "El numero mayor es:" << aux << endl;


  return 0;
}