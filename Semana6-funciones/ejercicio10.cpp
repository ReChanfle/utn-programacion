#include <iostream>
using namespace std;

/*
Hacer una función que reciba un código de naipe (del 1 al 40) y
determine el número y el palo de la baraja española de 40 cartas (sin los 8, 9 y comodines del mazo).
La función debe recibir por referencia el número de naipe y el nombre del palo (para ser completados por la función)
y por valor el código de naipe.

Tener en cuenta que:
Los códigos de naipes de espada van del 1 al 10, basto del 11 al 20,
copa del 21 al 30 y oro del 31 al 40.
Por ejemplo, naipe con ID #10 es el 12 de espadas.

 */

void CalcularCodigoNaipe(int &number, string &palo, int codigo) {

    if (codigo < 1 || codigo > 40) {
        palo = "Desconocido";
        number = -1;
        return;
    }

    string palos[] = {"Espada","Basto", "Copa", "Oro"};
    int indicePalo = (codigo - 1) / 10;
    int posicion = (codigo - 1) % 10;


    int valores[] = {1, 2, 3, 4, 5, 6, 7, 10, 11, 12};

    palo = palos[indicePalo];
    number = valores[posicion];
}


int main() {
    int number{0};
    int codigo{0};
    string palo;

    cout << "Ingrese un codigo:" << endl;
    cin >> codigo;
    CalcularCodigoNaipe(number, palo, codigo);


    cout << "La carta es el: " << number << " de " << palo << endl;


    return 0;
}
