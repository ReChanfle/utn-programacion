#include <iostream>
using namespace std;

/*
Dada una lista de 7 números enteros informar cual es el primer, el segundo,
el anteúltimo y el último número impar ingresado.
Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa: Primer impar: -5, Segundo impar: 7,
Anteúltimo impar: 9 y Último impar: 5.
 */


int main(){

    int aux{0}, first_odd{0}, second_odd{0}, third_odd{0}, last_odd{0};
    bool first_min = false;
    bool first_max = false;

    for (int i = 1; i <= 7; i++) {
        int number_input{0};
        cout << "Ingrese un numero: " << endl;
        cin >> number_input;

       if(number_input % 2 != 0) {
         if(first_odd == 0) {
           first_odd = number_input;
         }
           else if(second_odd == 0) {
               second_odd = number_input;
           }
           else if(third_odd == 0) {
               third_odd = number_input;
           }
           else if(last_odd == 0) {
               last_odd = number_input;
           }
       }

    }

    cout << "Primer impar: " << first_odd << endl;
    cout << "Segundo impar: " << second_odd << endl;
    cout << "Tercer impar: " << third_odd << endl;
    cout << "Cuarto impar: " << last_odd << endl;

    return 0;

}
