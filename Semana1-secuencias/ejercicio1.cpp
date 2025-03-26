#include <iostream>
using namespace std;


// Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario
// y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.


int main() {


    float workload{0}, hour_value{0}, salary{0};
    cout << "Ingrese cantidad de horas trabajadas:" << endl;
    cin >> workload;
    cout << "Ingrese valor de la hora:" << endl;
    cin >> hour_value;
    salary = hour_value * workload;
    cout << "El salario es: " << salary;

    cout << endl;

    return 0;

    }

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.