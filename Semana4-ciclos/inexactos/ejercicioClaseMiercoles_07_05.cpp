#include <iostream>
using namespace std;

/*
Hacer un programa donde tengan 4 productos con codigos 0, 1, 2, 3
   Se debe procesar 5 ventas donde cada venta esta compuesta por:
      - codigo producto
      - precio final

Mostrar la cantidad de productos vendidos para cada producto.
 */


int main() {


    int products[4] = {0, 0, 0, 0};

    for (int i = 0; i < 4; i++) {

        int code{0};
        int qny_prod{0};
        cout << "Ingrese  codigo producto 1 (1-4)" << endl;
        cin >> code;
        if (code < 1 || code > 4) {
            cout << "codigo invalido" << endl;
            return 0;
        }
        cout << "Cantidad de productos" << endl;
        cin >> qny_prod;
        products[code - 1] = qny_prod;

    }

    for (int i = 0; i < 4; i++) {
        cout << "Cantidad de productos vendidos con codigo: " << i + 1 << " -> " << products[i] << " productos" << endl;
    }

    return 0;
}
