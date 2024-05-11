#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string fruit[] = {"pomme", "banane", "orange", "fraise", "kiwi"};

    cout << "Voici le contenu du tableau fruit :" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << fruit[i] << endl;
    }

    int nombreFavoris;
    bool Valide = false;
    while (!Valide) {
        cout << "\nEntrez le nombre de vos fruits preferes : ";
        cin >> nombreFavoris;

        if (cin.fail() || nombreFavoris <= 0) {
            cout << "Veuillez entrer un nombre valide superieur a zero" << endl;
            cin.clear();
        } else {
            Valide = true;
        }
    }

    string *favoris = new string[nombreFavoris];

    cout << "Entrez vos (" << nombreFavoris << ") fruits preferes :" << endl;
    for (int i = 0; i < nombreFavoris; ++i) {
        cout << "Fruit (" << i + 1 << ") : ";
        cin >> favoris[i];
    }

    cout << "Voici le contenu du tableau favoris :" << endl;
    for (int i = 0; i < nombreFavoris; ++i) {
        cout << favoris[i] << endl;
    }
    delete[] favoris;

    return 0;
}
