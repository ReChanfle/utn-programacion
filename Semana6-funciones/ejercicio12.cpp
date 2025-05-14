#include <iostream>
using namespace std;

/*
Escribir una función de nombre validarFecha que reciba 3 valores correspondientes al día, mes y año,
y devuelva 1 si los valores recibidos corresponden a una fecha correcta o 0 si no es correcta.
Por ejemplo, si la función recibe 30, 2, 2000 deberá devolver 0; y si recibe 12, 2, 1990, deberá devolver 1.
 */

int ValidarFecha(int day, int month, int year) {

   if(day<=31 && month<=12 && year>=1900)
     return 1;

   return 0;

}


int main() {

    int day{0}, month{0}, year{0};


    cout << "Ingrese un dia:" << endl;
    cin >> day;
    cout << "Ingrese un mes:" << endl;
    cin >> month;
    cout << "Ingrese un anio:" << endl;
    cin >> year;

    if(ValidarFecha(day, month, year) == 1)
         cout << "Fecha valida" << endl;
    else
      cout << "Fecha invalida" << endl;

    return 0;
}