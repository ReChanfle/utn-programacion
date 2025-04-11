#include <iostream>
using namespace std;

/*
Hacer un programa en el que se ingrese la edad y altura de 5 personas. Luego, calcular e informar:
La cantidad de personas mayores a 30 años que midan más de 1.8 metros.
El promedio de altura de las personas mayores a 30 años.
La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
La cantidad de personas cuya edad sea de 20, 30 o 40 años.
 */


int main() {

     int age_1{0},age_2{0},age_3{0},age_4{0},age_5{0};
     float height_1{0},height_2{0},height_3{0},height_4{0},height_5{0};
     int quantity_older_and_tall{0};
     int quantity_tallest{0};
     int quantity_specific_height{0};
     int quantity_specific_age{0};

    cout << "Ingrese edad:" << endl;
    cin >> age_1;
    cout << "Ingrese altura:" << endl;
    cin >> height_1;

    cout << "Ingrese edad:" << endl;
    cin >> age_2;
    cout << "Ingrese altura:" << endl;
    cin >> height_2;

    cout << "Ingrese edad:" << endl;
    cin >> age_3;
    cout << "Ingrese altura:" << endl;
    cin >> height_3;

    cout << "Ingrese edad:" << endl;
    cin >> age_4;
    cout << "Ingrese altura:" << endl;
    cin >> height_4;

    cout << "Ingrese edad:" << endl;
    cin >> age_5;
    cout << "Ingrese altura:" << endl;
    cin >> height_5;


    if(age_1>30 && height_1>1.8){
      quantity_older_and_tall++;
      quantity_tallest++;
    }

    if(height_1<=1.8 && height_1>=1.7){
        quantity_specific_height++;
    }

    if(age_1 == 20 || age_1 == 30 || age_1 == 40){
      quantity_specific_age++;
    }

  if(age_2>30 && height_2>1.8){
    quantity_older_and_tall++;
    quantity_tallest++;
  }

  if(height_2<=1.8 && height_2>=1.7){
    quantity_specific_height++;
  }

  if(age_2 == 20 || age_2 == 30 || age_2 == 40){
    quantity_specific_age++;
  }


  if(age_3>30 && height_3>1.8){
    quantity_older_and_tall++;
    quantity_tallest++;
  }

  if(height_3<=1.8 && height_3>=1.7){
    quantity_specific_height++;
  }

  if(age_3 == 20 || age_3 == 30 || age_3 == 40){
    quantity_specific_age++;
  }



  if(age_4>30 && height_4>1.8){
    quantity_older_and_tall++;
    quantity_tallest++;
  }

  if(height_4<=1.8 && height_4>=1.7){
    quantity_specific_height++;
  }

  if(age_4 == 20 || age_4 == 30 || age_4 == 40){
    quantity_specific_age++;
  }


  if(age_5>30 && height_5>1.8){
    quantity_older_and_tall++;
    quantity_tallest++;
  }

  if(height_5<=1.8 && height_5>=1.7){
    quantity_specific_height++;
  }

  if(age_5 == 20 || age_5 == 30 || age_5 == 40){
    quantity_specific_age++;
  }


  cout << "Cantidad mayores a 30 y 1.8 de altura:" << endl;
  cout << quantity_older_and_tall << endl;
  cout << "Promedio altura mayores a 30:" << endl;
  cout << quantity_tallest / 5 << endl;
  cout << "Cantidad altura entre 1.7 y 1.8:" << endl;
  cout << quantity_specific_height << endl;
  cout << "Cantidad de 20, 30, 40:" << endl;
  cout << quantity_specific_age << endl;



  return 0;
}
