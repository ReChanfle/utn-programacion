#include <iostream>
using namespace std;

/*
Escribir una función que reciba el valor de un año y retorne 1 si el mismo es bisiesto y 0 si es un año no bisiesto.
Recordar que son años bisiestos los divisibles por 4, excepto los divisibles por 100,
pero dentro de este grupo se incluyen los divisibles por 400. Por ejemplo 1992 fue bisiesto por ser divisible por 4.
El año 1900 no fue bisiesto por ser divisible por 100, aun siendo divisible por 4.
Y el año 2000 fue bisiesto por ser divisible por 400, aun siendo divisible por 100.
Hacer un programa para ingresar una lista de 10 valores de años y contar cuantos son bisiestos. Utilizar la función solicitada.
 */

int CalcularBisiesto(int year) {
    const int multiple_four = 4;
    const int multiple_four_hundred = 400;

    if (year % multiple_four == 0 && year < 100)
        return 1;
    if (year % multiple_four_hundred == 0 && year >= 100)
        return 1;

    return 0;
}


int main() {

    int qnt_bisiesto{0};

    for (int i = 0; i < 10; i++) {

        int year{0};

        cout << "Ingrese anio:" << endl;
        cin >> year;

        if (CalcularBisiesto(year) == 1)
          qnt_bisiesto++;

    }

    cout << "Cantidad de bisiestos:" << qnt_bisiesto << endl;


    return 0;
}
