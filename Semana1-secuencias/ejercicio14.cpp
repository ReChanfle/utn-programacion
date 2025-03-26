#include <iostream>

using namespace std;

// Hacer un programa para ingresar el importe de una compra y
// el descuento a aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el importe total a cobrar.
// Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar
// Importe: 4500, Descuento: 1800, total: 2700.


int main() {

  float sale_amount{0}, sale_discount{0}, total_sale{0}, total_discount{0};

  cout << "Ingrese precio de venta:" << endl;
  cin >> sale_amount;
  cout << "Ingrese descuento en %:" << endl;
  cin >> sale_discount;

  total_discount = (sale_amount / 100) * sale_discount;
  total_sale = sale_amount - total_discount;

  cout << "Ingrese precio de venta:" << endl;
  cout << sale_amount << endl;
  cout << "Total a pagar:" << endl;
  cout << total_sale << endl;
  cout << "Descuento:" << endl;
  cout << total_discount << endl;


  return 0;
}

