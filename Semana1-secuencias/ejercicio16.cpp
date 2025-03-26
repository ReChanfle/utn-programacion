#include <iostream>

using namespace std;

// El Laboratorio V&V hace frascos de píldoras para aprender a programar.
// Cada frasco contiene 75 píldoras y cada píldora contiene 45 mg de Betamol,
// 2 grs de Micilina
// y 7 mg de Ácido Sinítico.
// Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido
// y muestre la cantidad de miligramos de Betamol, Micilina y de Ácido Sinítico que son necesarios para elaborarlos.


int main() {

  float qnt_bottles{0}, total_betamol{0}, total_micilina{0}, total_acid{0};

  const int betamol = 45;
  const int micilina = 2;
  const int sinitic_acid = 7;

  cout << "Ingrese cantidad de botellas:" << endl;
  cin >> qnt_bottles;

  total_betamol = qnt_bottles * betamol;
  total_micilina = qnt_bottles * micilina;
  total_acid = qnt_bottles * sinitic_acid;

  cout << "Cantidad de betamol(mg):" << endl;
  cout << total_betamol << endl;
  cout << "Cantidad de Micilina(gr):" << endl;
  cout << total_micilina << endl;
  cout << "Cantidad de acido(mg):" << endl;
  cout << total_acid << endl;

  return 0;

}