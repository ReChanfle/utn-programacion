#include <iostream>
using namespace std;

/*
Hacer una función llamada CalcularMaximo que determine el máximo entre dos números.
La función debe recibir dos números enteros por valor y devolver el valor más grande.
Si los números son iguales debe devolver cualquiera de los dos. La función no debe mostrar nada por pantalla.
Hacer un programa para ingresar dos números y, utilizando CalcularMaximo, emita luego el número mayor de ambos.
 */

int CalcularMaximo(int number_1, int number_2){

   if(number_1 > number_2)
     return number_1;
   else
     return number_2;

}


int main(){

    int n1{0},n2{0};
    cout << "Ingrese el primer numero:" << endl;
    cin >> n1;
    cout << "Ingrese el segundo numero:" << endl;
    cin >> n2;

   cout << "El numero mayor es: " << CalcularMaximo(n1,n2) << endl;

    return 0;

}