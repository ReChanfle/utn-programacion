#include <iostream>
using namespace std;

/*
Un negocio de perfumería efectúa descuentos según el importe de la venta.
Si el importe es menor a $100 aplicar un descuento del 5%
Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
Si el importe es mayor a $500 aplicar un descuento del 15%
*/

int main(){


  int total_amount{0};
  int discount{0};
  cout << "Ingrese el monto manual:" << endl;
  cin >> total_amount;

  if(total_amount >= 500) {
    discount = (total_amount /100) * 15;
    cout << "Monto previo descuento: " <<  total_amount  << endl;
    cout << "Monto total a pagar: " <<  total_amount -  discount  << endl;
    cout << "Descuento aplicado de 15%" << endl;
  }
    else if(total_amount >= 100) {
      discount = (total_amount /100) * 10;
      cout << "Monto previo descuento: " <<  total_amount  << endl;
      cout << "Monto total a pagar: " <<  total_amount -  discount  << endl;
      cout << "Descuento aplicado de 10%" << endl;
    }
    else if(total_amount <= 100) {
      discount = (total_amount /100) * 5;
      cout << "Monto previo descuento: " <<  total_amount  << endl;
      cout << "Monto total a pagar: " <<  total_amount -  discount  << endl;
      cout << "Descuento aplicado de 5%" << endl;
    }

  return 0;

}
