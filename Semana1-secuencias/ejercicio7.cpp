
#include <iostream>

using namespace std;

// Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento aplicada a la misma
// y luego informar por pantalla el importe a pagar.
// Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces el total a pagar será de $1020.
// Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el total a pagar será de $800.


int main() {

  float sale_price{0}, percentage_sale{0}, price_to_pay{0};

  cout << "Ingrese importe de venta:" << endl;
  cin >> sale_price;
  cout << "Ingrese procentaje de descuento:" << endl;
  cin >> percentage_sale;
  price_to_pay = sale_price - ((sale_price / 100) * percentage_sale);
  cout << "Total a pagar:" << endl;
  cout << price_to_pay;

  return 0;
}