#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de 10 números,
luego informar el porcentaje de positivos, negativos, y  ceros.

 */


int main(){

    int n = 10, negative{0}, positive{0}, zero{0};

    for (int i = 0; i < n; i++) {
        int number_input{0};
        cout << "Ingrese un numero: " << endl;
        cin >> number_input;
        if(number_input > 0)
            positive++;
        else if(number_input < 0)
            negative++;
        else
            zero++;
    }

    cout << "Porcentaje Positivo: " <<(positive * 100) / 10 << " %" << endl;
    cout << "Porcentaje Negativo: " <<(negative * 100) / 10 << " %" << endl;
    cout << "Porcentaje Cero: " << (zero * 100) /  10 << " %" << endl;

    return 0;

}