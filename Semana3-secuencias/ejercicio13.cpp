#include <iostream>

using namespace std;

// Hacer un programa para un cajero automático para ingresar un importe a retirar
// y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a entregar.
// Ejemplo A: Si el importe a retirar es $2500
// se mostrará por pantalla que se deberán entregar 2 billetes de $1.000, 1 billete de $500,  0 billetes de $200 y 0 billetes de $100.
// Ejemplo B: Si el importe a retirar es $3400
// se mostrará por pantalla que se deberán entregar 3 billetes de $1.000, 2 billetes de $200, 0 billetes de $500 y 0 billetes de $100.
// Ejemplo C: Si el importe a retirar es $300
// se mostrará por pantalla que se deberán entregar 1 billete de $200, 1 billete de $100, 0 billetes de $1.000 y 0 billetes de $500.
// Recordatorio. Considerar en todos los casos que el importe a retirar es en todos los casos múltiplo de $100
// ya que el cajero no cuenta con billetes de $50, $20 o $10.


int main() {

   int money{0}, qnt_bill_one_hundred{0}, qnt_bill_five_hundred{0}, qnt_bill_two_hundred{0}, qnt_bill_one_thousand{0};

   cout << "Importe a retirar:" << endl;
   cin >> money;
    qnt_bill_one_thousand = money / 1000;
    money = money - (qnt_bill_one_thousand * 1000);
    qnt_bill_five_hundred =  money / 500;
    money = money - (qnt_bill_five_hundred * 500);
    qnt_bill_two_hundred =  money / 200;
    money = money - (qnt_bill_two_hundred * 200);
    qnt_bill_one_hundred =  money / 100;

    cout << "Cantidad de billetes a entregar de 1000:" << endl;
    cout << qnt_bill_one_thousand << endl;
    cout << "Cantidad de billetes a entregar de 500:" << endl;
    cout << qnt_bill_five_hundred << endl;
    cout << "Cantidad de billetes a entregar de 200:" << endl;
    cout << qnt_bill_two_hundred << endl;
    cout << "Cantidad de billetes a entregar de 100:" << endl;
    cout << qnt_bill_one_hundred << endl;

  return 0;
}