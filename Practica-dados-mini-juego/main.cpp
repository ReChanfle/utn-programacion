#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;


int rollDice(int dice1[], int dice2[]) {
    int random_number{0};

    for (int i = 0; i < 5; i++) {
        random_number = rand() % 6 + 1;
        dice1[i] = random_number;
        random_number = rand() % 6 + 1;
        dice2[i] = random_number;
    }

   // cout << "El numero es: " << random_number << endl;

    return 0;
}

void findMaxNumber(int dice1[], int dice2[], int &points_player1, int &points_player2) {
    int max_number_1{0};
    int max_number_2{0};

    for (int i = 0; i < 5; i++) {
        if (max_number_1 < dice1[i])
            max_number_1 = dice1[i];

        if (max_number_2 < dice2[i])
            max_number_2 = dice2[i];
    }

    points_player1 += max_number_1;
    points_player2 += max_number_2;
}

void play() {
}

void enterNickname(string player[]) {

    string nickname;
    cout << "----------------" << endl;
    cout << "Ingrese su nombre: ";
    cin >>  nickname;

    for (int i = 0; i < 10; i++) {
        if (player[i] == "")
            player[i] = nickname;
    }



}

void options(int &select, string player1[]) {

    enterNickname(player1);
    cout << "Juegos de Dados" << endl;
    cout << "----------------" << endl;
    cout << "1. Jugas" << endl;
    cout << "2. Estadistica" << endl;
    cout << "3. Salir" << endl;
    cout << "Ingrese una opcion: ";
    cin >> select;
}

void cleanPoints(int &points_player1, int &points_player2, int &cont_rounds) {
    points_player1 = 0;
    points_player2 = 0;
    cont_rounds = 0;
}

void checkMaxNumberPerDice(int dice1[], int dice2[], int wins_rounds_player1[],int wins_rounds_player2[]) {

    int max_number_1{0};
    int max_number_2{0};

    for (int i = 0; i < 5; i++) {

        if (dice1[i] > max_number_1) {
            max_number_1 = dice1[i];
            wins_rounds_player1[i] = dice1[i];
        }

        if (dice2[i] > max_number_2)
        {
            max_number_2 = dice2[i];
            wins_rounds_player2[i] = dice2[i];
        }
    }

}

void showWinnerPerRound(int wins_rounds_player1[], int wins_rounds_player2[]) {

    for(int i = 0; i <= 5; i++) {
        //cout << wins_rounds_player1[i] << endl;
        if(wins_rounds_player1[i] > wins_rounds_player2[i])
            cout << "El jugador gana la ronda: " << i+1 << endl;
        else if(wins_rounds_player2[i] > wins_rounds_player1[i])
            cout << "El CPU gana la ronda: " << i+1 << endl;
        else
            cout << "Empate en la ronda: " << i+1 << endl;
    }

}


int main() {


    srand(time(0));

    int select{0};
    string player1[10];
    int dice1[5], dice2[5];
    int cont_rounds{0};
    int points_player1{0}, points_player2{0};
    int wins_rounds_player1[6]{0}, wins_rounds_player2[6]{0};

    options(select,player1);

    do {
        switch (select) {
            case 1:
                do {
                    cont_rounds++;
                    for (int i = 0; i < 5; i++) {
                        rollDice(dice1, dice2);
                    }

                    findMaxNumber(dice1, dice2, points_player1, points_player2);
                   checkMaxNumberPerDice(dice1, dice2, wins_rounds_player1, wins_rounds_player2);
                } while (points_player1 <= 25 && points_player2 <= 25);
                cout << "El jugador tiene: " << points_player1 << endl;
                cout << "El CPU tiene: " << points_player2 << endl;
                cout << "El numero de rondas es: " << cont_rounds << endl;
                options(select,player1);
                cleanPoints(points_player1, points_player2,cont_rounds);
                break;
            case 2:
                showWinnerPerRound(wins_rounds_player1, wins_rounds_player2);
                options(select,player1);
                break;
            case 3:
                return 0;
        }
    } while (select >= 1 || select <= 2);
}
