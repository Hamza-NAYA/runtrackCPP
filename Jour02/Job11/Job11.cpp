#include <iostream>

using namespace std;

unsigned long long factorielle(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorielle(n - 1);
    }
}

int main(void) {
    int nombre;

    cout << "Ce programme calcule la factorielle d'un nombre entier" << endl;
    cout << "Entrez un nombre entier : ";
    cin >> nombre;

    if (nombre < 0) {
        cout << "Erreur : Le nombre doit etre un entier positif ou zero" << endl;
    } else {
        cout << nombre << "! = " << factorielle(nombre) << endl;
    }

    return 0;
}
