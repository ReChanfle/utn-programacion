#include <iostream>
using namespace std;


/*
Hacer un programa para ingresar tres números diferentes y determinar e informar el número del medio.
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
N1=8, N2=6, N3=10. Valor del medio: 8. N1=8, N2=10, N3=6. Valor del medio: 8
N1=6, N2=8, N3=10. Valor del medio: 8. N1=10, N2=8, N3=6. Valor del medio: 8
N1=6, N2=10, N3=8. Valor del medio: 8. N1=10, N2=6, N3=8. Valor del medio: 8
 */


int main(){

    int number_1{0}, number_2{0}, number_3{0};
    int aux{0};

    cout << "Ingrese un numero:" << endl;
    cin >> number_1;
    cout << "Ingrese segundo numero:" << endl;
    cin >> number_2;
    cout << "Ingrese tercer numero:" << endl;
    cin >> number_3;

    if(number_1 > number_2 && number_1 < number_3)
      aux = number_1;

    if(number_2 > number_1 && number_2 < number_3)
        aux = number_2;

    if(number_3 > number_1 && number_3 < number_2)
        aux = number_3;

    cout << "El numero del medio es:" << aux << endl;


  return 0;
}
