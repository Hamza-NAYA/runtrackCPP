#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void) {
    srand(time(0));

    const int Max = 100;
    const int Tentatives = 10;

    int nombreMystere = rand() % (Max + 1);
    int tentative = 0;
    int nombreChoisi;

    cout << "Bienvenue dans le jeu Nombre Mystere !" << endl;
    cout << "Devinez le nombre mystere compris entre 0 et " << Max << endl;

    while (tentative < Tentatives) {
        cout << "Tentative " << tentative + 1 << "/" << Tentatives << " : ";
        cin >> nombreChoisi;

        if (nombreChoisi == nombreMystere) {
            cout << "Bravo ! Vous avez trouve le nombre mystere" << endl;
            break;
        } else if (nombreChoisi < nombreMystere) {
            cout << "Le nombre mystere est plus grand" << endl;
        } else {
            cout << "Le nombre mystere est plus petit" << endl;
        }
        tentative++;
    }

    if (tentative == Tentatives) {
        cout << "Dommage, vous avez epuise toutes vos tentatives. Le nombre mystere etait : " << nombreMystere << endl;
    }

    return 0;
}
