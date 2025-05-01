#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar 5 números,
luego informar los 2 mayores valores ingresados,
aclarando cual es el máximo y cuál el que le sigue.
Ejemplo A: 10, 8, 12, 14, 3 el resultado será 14 y 12.
Ejemplo B: 14, 8, 12, 14 ,3 el resultado será 14 y 14.
Ejemplo C: -4, -8, -12, -20, -10 el resultado será -4 y -8
Ejemplo D: 100, 20, 5, -15, 70, el resultado será 100 y 70.
Ejemplo E: -100, -20, -5, 15, -70, el resultado será 15 y -5.
 */


int main(){

    bool first_number{true}, second_number{true};
    int number_1{0}, number_2{0};

    for(int i = 0; i < 5; i++) {
        int number{0};

        cout << "Ingrese un numero: "<<  endl;
        cin >> number;

        if(first_number){
            number_1 = number;
            number_2 = number;
            first_number = false;
        }

        if(second_number && i > 0){
            number_2 = number;
            second_number = false;
        }

        if(number > number_1)
            number_1 = number;

        if (number < number_1 && number > number_2)
            number_2 = number;


    }
        cout << "Mayor 1 " << number_1 << endl;
        cout << "Mayor 2 " << number_2 << endl;


    return 0;

}