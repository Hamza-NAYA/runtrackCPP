#include <iostream>

using namespace std;

int nombreDeChiffres(int nombre) {
    int count = 0;
    int temp = nombre;

    while (temp != 0) {
        temp /= 10;
        ++count;
    }
    return count;
}

bool estNarcissique(int nombre) {
    int original = nombre;
    int puissance = nombreDeChiffres(original);
    int somme = 0;

    while (nombre != 0) {
        int chiffre = nombre % 10;
        int puissanceChiffre = 1;
        for (int i = 0; i < puissance; ++i) {
            puissanceChiffre *= chiffre;
        }
        somme += puissanceChiffre;
        nombre /= 10;
    }

    return somme == original;
}


int main(void) {
    int nombre;
    cout << "Entrez un nombre : ";
    cin >> nombre;

    if (estNarcissique(nombre)) {
        cout << nombre << " est un nombre narcissique" << endl;
    } else {
        cout << nombre << " n'est pas un nombre narcissique" << endl;
    }

    return 0;
}
