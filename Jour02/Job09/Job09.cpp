#include <iostream>

using namespace std;

int main(void) {
    int a, b, entier;

    cout << "Entrez la borne inferieure a : ";
    cin >> a;

    cout << "Entrez la borne superieure b : ";
    cin >> b;

    if (a < b) {

        cout << "Entrez un entier : ";
        cin >> entier;

        if (cin.fail()) {
            cout << "Erreur : Vous devez entrer un entier valide" << endl;
            return 1;
        }

        if (entier >= a && entier <= b) {
            cout << "GAGNE" << endl;
        } else {
            cout << "PERDU" << endl;
        }
    } else {
        cout << "La borne inferieure doit etre strictement inferieure a la borne superieure" << endl;
    }

    return 0;
}
