#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Staff {
    string nom;
    string prenom;
};

int main(void) {
    Staff alicia = {"Cordial", "Alicia"};
    Staff pierre = {"Malardier", "Pierre"};

    cout << "Prenoms du staff :" << endl;
    cout << alicia.prenom << endl;
    cout << pierre.prenom << endl;

    struct Etudiant {
        string nom;
        string prenom;
    };

    int nbEtudiants;
    cout << "Entrez le nombre d'etudiants : ";
    cin >> nbEtudiants;

    vector<Etudiant> etudiants(nbEtudiants);

    for (int i = 0; i < nbEtudiants; ++i) {
        cout << "Nom de l'etudiant " << i + 1 << " : ";
        cin >> etudiants[i].nom;
        cout << "Prenom de l'etudiant " << i + 1 << " : ";
        cin >> etudiants[i].prenom;
    }

    cout << "Prenoms des etudiants :" << endl;
    for (int i = 0; i < nbEtudiants; ++i) {
        cout << etudiants[i].prenom << endl;
    }

    return 0;
}
