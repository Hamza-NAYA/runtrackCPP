#include <iostream>

using namespace std;

int main(void) {
    int taille;

    cout << "Entrez la taille du tableau : ";
    cin >> taille;

    int* tableau = new int[taille];

    cout << "Entrez " << taille << " entiers :\n";
    for (int i = 0; i < taille; ++i) {
        cin >> tableau[i];
    }

    cout << "Contenu du tableau :\n";
    for (int i = 0; i < taille; ++i) {
        cout << tableau[i] << " ";
    }

    return 0;
}
