#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar por teclado tres números
e informar con una leyenda aclaratoria si los tres son todos distintos entre sí,
caso contrario no emitir nada.
Tener en cuenta: Si A es distinto de B y B es distinto de C,
eso no significa que A y C sean distintos. Ejemplo: A=8, B=6 y C=8.


 */


int main(){

    int number_1{0},number_2{0}, number_3{0};
    bool not_equals_numbers = false;

    cout << "Ingrese un numero:" << endl;
    cin >> number_1;
    cout << "Ingrese segundo numero:" << endl;
    cin >> number_2;
    cout << "Ingrese tercer numero:" << endl;
    cin >> number_3;


    if(number_1 != number_2 && number_2 != number_3 && number_1 != number_3){
      not_equals_numbers = true;
    }

    if(not_equals_numbers)
        cout << "Numeros desiguales:" << endl;

  return 0;
}