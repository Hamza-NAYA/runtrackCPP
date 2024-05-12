#include <iostream>
#include <cmath> 

using namespace std;

int main(void) {
    double nombre;

    cout << "Ce programme calcule la racine carree d'un nombre reel positif" << endl;
    cout << "Entrez un nombre (0 pour arreter) : ";
    cin >> nombre;

    while (nombre != 0) {
        if (nombre < 0) {
            cout << "Erreur : Le nombre doit etre positif" << endl;
        } else {
            cout << "La racine carree de " << nombre << " est : " << sqrt(nombre) << endl;
        }
        
        cout << "Entrez un autre nombre (0 pour arreter) : ";
        cin >> nombre;
    }

    cout << "Programme termine" << endl;

    return 0;
}
