#include <iostream>
using namespace std;


/*
Hacer un programa para ingresar tres números distintos y listarlos ordenados de menor a mayor.
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
Si N1=8, N2=6, N3=10 ó  N1=8, N2=10, N3=6. Se muestra: 6, 8, 10.
Si N1=6, N2=8, N3=10 ó  N1=10, N2=8, N3=6. Se muestra: 6, 8, 10.
Si N1=6, N2=10, N3=8 ó  N1=10, N2=6, N3=8. Se muestra: 6, 8, 10.
 */


int main(){

 int number_1{0}, number_2{0}, number_3{0};
 int minimum{0},middle{0},maximum{0};

 cout << "Ingrese un numero:" << endl;
 cin >> number_1;
 cout << "Ingrese segundo numero:" << endl;
 cin >> number_2;
 cout << "Ingrese tercer numero:" << endl;
 cin >> number_3;

    if(number_1 < number_2 && number_1 < number_3)
        minimum = number_1;
    else if (number_2 < number_1 && number_2 < number_3)
        minimum = number_2;
    else if (number_3 < number_1 && number_3 < number_2)
        minimum = number_3;

    if(number_1 > number_2 && number_1 > number_3)
        maximum = number_1;
    else if (number_2 > number_1 && number_2 > number_3)
        maximum = number_2;
    else if (number_3 > number_1 && number_3 > number_2)
        maximum = number_3;

    if (number_1 < maximum && number_1 > minimum)
        middle = number_1;
    else if (number_2 < maximum && number_2 > minimum)
        middle = number_2;
    else if (number_3 < maximum && number_3 > minimum)
        middle = number_3;

    cout << "Ordenados " << minimum << "," << middle << "," << maximum  << endl;


return 0;

}