#include <iostream>

using namespace std;

// La amplitud térmica es la diferencia entre la temperatura máxima y
// la temperatura mínima en una zona y tiempo determinado.
// Dada la temperatura máxima y la temperatura mínima de San Fernando de ayer, calcular y mostrar la amplitud térmica.
// NOTA: El usuario ingresará como temperatura máxima un valor mayor o igual al de la temperatura mínima.


int main() {

  float temp_max{0}, temp_min{0}, amplitude_temp{0};

  cout << "Ingresar la temperatura maxima:" << endl;
  cin >> temp_max;
  cout << "Ingresar la temperatura minima:" << endl;
  cin >> temp_min;

  amplitude_temp = temp_max - temp_min;

  cout << "Temperatura de amplitud: " << amplitude_temp << endl;

  return 0;
}