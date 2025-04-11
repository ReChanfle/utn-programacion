#include <iostream>
using namespace std;

/*
Una fábrica de caramelos dispone de un presupuesto inicial para inaugurar su sucursal en Villa Brian Lara.
Se sabe que para producir caramelos tienen los siguientes costos:

Costo de alquiler de $10000
Costo por caramelo producido de $2.50
Costo por mantenimiento cada 100 caramelos de $5000

Dados el presupuesto inicial y la cantidad de caramelos a producir el primer mes, informar:
"El presupuesto es suficiente para cubrir los costos de $XXXX"
"El presupuesto no es suficiente, necesita un crédito de $XXXX"
 */

int main(){

  const int rent = 1000;
  const float candy_cost = 2.5;
  const int repair_cost = 5000;
  int quantity_candy{0};
  int initial_cash{0};
  float total_cost{0};

  cout << "Ingrese presupuesto inicial: " << endl;
  cin >> initial_cash;
  cout << "Ingrese cantidad de caramelos: " << endl;
  cin >> quantity_candy;

  total_cost = rent + (quantity_candy * candy_cost) + quantity_candy * 50;

  if(initial_cash < total_cost)
    cout << "El presupuesto no es suficiente, necesita un credito de $ " << total_cost - initial_cash << endl;
  else
      cout << "El presupuesto es suficiente para cubrir los costos de $ " << total_cost << endl;



  return 0;
}
