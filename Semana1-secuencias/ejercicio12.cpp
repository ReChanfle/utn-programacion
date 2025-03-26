#include <iostream>

using namespace std;

// Una granja vende la caja de 12 unidades a $1000 y cada huevo suelto a $120.
// Hacer un programa para ingresar la cantidad de huevos que compra un cliente y mostrar por pantalla el importe total a pagar.
// Recordatorio. Por cada 12 huevos se debe calcular una caja y el excedente se calcula como suelto.
// Ejemplo A. Si la cantidad ingresada son 15 huevos,
// el programa calculará 1 caja y 3 sueltos, es decir $1000 + $120 x 3 = $1360.
// Ejemplo B. Si la cantidad ingresada son 28 huevos
// el programa calculará 2 cajas y 4 sueltos, es decir $1000 x 2 + $120 x 4 = $2480.
// Ejemplo C. Si la cantidad ingresada son 8 huevos,
// el programa calculará: 0 cajas y 8 sueltos, es decir $120 x 8 = $960.
// Ejemplo D. Si la cantidad ingresada son 200 huevos,
// el programa calculará: 16 cajas y 8 sueltos, es decir $1000 x 16 + $120 x 8 = $16960.


int main() {

      int qnt_eggs{0}, qnt_boxes{0}, qnt_eggs_left{0}, total_to_pay{0};

      constexpr int price_box = 1000;
      constexpr int price_eggs = 120;

      cout << "Ingrese cantidad de huevos:" << endl;
      cin >> qnt_eggs;
      qnt_boxes = qnt_eggs / 12;
      qnt_eggs_left = qnt_eggs % 12;
      total_to_pay = (qnt_boxes * price_box) + (price_eggs * qnt_eggs_left);

      cout << "Total a pagar:" << endl;
      cout << total_to_pay << endl;

      return 0;
}
