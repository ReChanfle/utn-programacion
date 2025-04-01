#include <iostream>
using namespace std;


int main() {
    float discount{0}, amount{0}, total_amount{0};

    constexpr float minimum_limit_discount = 1000;

    cout << "Ingrese el monto: " << endl;
    cin >> amount;

    if (amount > minimum_limit_discount)
        discount = (amount / 100) * 10;


    total_amount = amount - discount;

    cout << "El descuento es: " << discount << endl;

    cout << "Total a pagar: " << total_amount << endl;

    return 0;
}
