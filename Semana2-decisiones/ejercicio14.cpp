#include <iostream>
using namespace std;



/*
Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona,
ingresando día, mes y año como 3 datos individuales. Luego ingresar la fecha actual ingresando día,
mes y año como 3 datos individuales. Calcular luego la edad en años de esa persona y listar por pantalla.
Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y
la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que los 19 recién los cumple en diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y
la fecha actual es 26/2/2019 la edad de esa persona es 19.
Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y
la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 días para cumplir los 19 años.
 */


int main() {


  int birthday_day{0}, birthday_month{0}, birthday_year{0}, actual_day{0}, actual_month{0},
      actual_year{0}, age_in_years{0}, age_in_months{0}, age_in_days{0};


  cout << "Ingrese dia de nacimiento: " << endl;
  cin >> birthday_day;
  cout << "Ingrese mes de nacimiento: " << endl;
  cin >> birthday_month;
  cout << "Ingrese ano de nacimiento: " << endl;
  cin >> birthday_year;

  cout << "Ingrese dia actual: " << endl;
  cin >> actual_day;
  cout << "Ingrese mes actual: " << endl;
  cin >> actual_month;
  cout << "Ingrese ano actual: " << endl;
  cin >> actual_year;


    age_in_years = actual_year - birthday_year;

    if(actual_month < birthday_month){
        age_in_years--;
    }
    else if(actual_day < birthday_day){
      age_in_years--;
    }

    cout << "La edad en anos actual es: "<< age_in_years << endl;

  return 0;
}