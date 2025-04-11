#include <iostream>
using namespace std;


/*
Una marroquinería dispone de 45 carteras blancas,
50 carteras negras,
40 marrones y
49 grises.
Se pide hacer un programa donde se ingresen tres ventas. Cada venta está compuesta por:

Cantidad de carteras
Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)

Calcular e informar:
Cantidad total de carteras vendidas en total.
Cuántas carteras quedaron de cada tipo.
Los colores de carteras que no se vendieron.
NOTA: Ninguna venta superará las 10 carteras.



 */


int main() {

  int white_bag{45}, black_bag{50}, brown_bag{40}, grey_bag{50};
  int type_1{0}, type_2{0}, type_3{0}, type_4{0};
  int quantity_bags_1{0}, quantity_bags_2{0}, quantity_bags_3{0};
  int left_black{black_bag}, left_brown{brown_bag}, left_grey{grey_bag}, left_white{white_bag};


  cout << "Ingrese tipo de cartera:" << endl;
  cin >> type_1;
  cout << "Ingrese cantidad de carteras:" << endl;
  cin >> quantity_bags_1;

  cout << "Ingrese tipo de cartera:" << endl;
  cin >> type_2;
  cout << "Ingrese cantidad de carteras:" << endl;
  cin >> quantity_bags_2;

  cout << "Ingrese tipo de cartera:" << endl;
  cin >> type_3;
  cout << "Ingrese cantidad de carteras:" << endl;
  cin >> quantity_bags_3;


    switch (type_1) {
      case 1:
        left_white = left_white - quantity_bags_1;
      break;
      case 2:
        left_black = left_black - quantity_bags_1;
      break;
      case 3:
        left_brown = left_brown - quantity_bags_1;
      break;
      case 4:
        left_grey = left_grey - quantity_bags_1;
      break;
        break;
    }

  switch (type_2) {
    case 1:
      left_white = left_white - quantity_bags_2;
    break;
    case 2:
      left_black = left_black - quantity_bags_2;
    break;
    case 3:
      left_brown = left_brown - quantity_bags_2;
    break;
    case 4:
      left_grey = left_grey - quantity_bags_2;
    break;

  }

  switch (type_3) {
    case 1:
      left_white = left_white - quantity_bags_3;
    break;
    case 2:
      left_black = left_black - quantity_bags_3;
    break;
    case 3:
      left_brown = left_brown - quantity_bags_3;
    break;
    case 4:
      left_grey = left_grey - quantity_bags_3;
    break;

  }


  cout << "Total vendidas:" << endl;
  cout << quantity_bags_1 + quantity_bags_2 + quantity_bags_3 << endl;
  cout << "Stocks carteras blancas: " << left_white << endl;
  cout << "Stocks carteras negras: " << left_black << endl;
  cout << "Stocks carteras marrones: " << left_brown << endl;
  cout << "Stocks carteras grises: " << left_grey << endl;

  if(type_1== 0)
    cout << "no se vendieron carteras blancas" << endl;

  if(type_2== 0)
    cout << "no se vendieron carteras negras" << endl;

  if(type_3== 0)
    cout << "no se vendieron carteras marrones" << endl;

  if(type_4== 0)
    cout << "no se vendieron carteras grises" << endl;

  return 0;
}
