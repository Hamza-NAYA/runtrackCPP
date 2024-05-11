#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Destination {
    string nom;
    string tempsDeVol;
};

void afficherMenu();
void entrerDestination(vector<Destination*>& destinations);
void modifierDestination(vector<Destination*>& destinations);
void afficherDestinations(const vector<Destination*>& destinations);

int main(void) {
    vector<Destination*> destinations;

    char choix;
    do {
        afficherMenu();
        cout << "Entrez votre choix : ";
        cin >> choix;
        cin.ignore();

        switch (choix) {
            case '1':
                entrerDestination(destinations);
                break;
            case '2':
                modifierDestination(destinations);
                break;
            case '3':
                afficherDestinations(destinations);
                break;
            case '4':
                cout << "Arret du programme VolManager" << endl;
                break;
            default:
                cout << "Choix invalide, veuillez entrer un choix valide" << endl;
                break;
        }
    } while (choix != '4');

    for (Destination* destPtr : destinations) {
        delete destPtr;
    }

    return 0;
}

void afficherMenu() {
    cout << "\nBienvenue dans le VolManager";
    cout << "\nMenu :\n"
         << "1. Entrer une destination\n"
         << "2. Modifier une destination\n"
         << "3. Afficher les destinations\n"
         << "4. Quitter\n";
}

void entrerDestination(vector<Destination*>& destinations) {
    string nomDestination;
    string tempsDeVol;

    cout << "Entrez le nom de la destination depuis Marseille : ";
    getline(cin, nomDestination);

    cout << "Entrez le temps de vol depuis Marseille (format XXhXX) : ";
    getline(cin, tempsDeVol);

    Destination* nouvelleDestination = new Destination;
    nouvelleDestination->nom = nomDestination;
    nouvelleDestination->tempsDeVol = tempsDeVol;

    destinations.push_back(nouvelleDestination);

    cout << "Destination ajoutee avec succes " << endl;
}

void modifierDestination(vector<Destination*>& destinations) {
    if (destinations.empty()) {
        cout << "Aucune destination a modifier" << endl;
        return;
    }

    cout << "Voici les destinations disponibles : " << endl;
    for (size_t i = 0; i < destinations.size(); ++i) {
        cout << i + 1 << ". " << destinations[i]->nom << " (Temps de vol : " << destinations[i]->tempsDeVol << ")" << endl;
    }

    size_t choix;
    cout << "Entrez le numero de la destination que vous souhaitez modifier : ";
    cin >> choix;
    cin.ignore();

    if (choix >= 1 && choix <= destinations.size()) {
        cout << "Que voulez-vous modifier pour la destination " << destinations[choix - 1]->nom << " ?" << endl;
        cout << "1. Nom de la destination" << endl;
        cout << "2. Temps de vol" << endl;

        char option;
        cout << "Entrez votre choix : ";
        cin >> option;
        cin.ignore();

        switch (option) {
            case '1':
                cout << "Entrez le nouveau nom pour " << destinations[choix - 1]->nom << " : ";
                getline(cin, destinations[choix - 1]->nom);
                break;
            case '2':
                cout << "Entrez le nouveau temps de vol (format XXhXX) pour " << destinations[choix - 1]->nom << " : ";
                getline(cin, destinations[choix - 1]->tempsDeVol);
                break;
            default:
                cout << "Option invalide. La destination reste inchangée." << endl;
                break;
        }
    } else {
        cout << "Numero de destination invalide" << endl;
    }
}

void afficherDestinations(const vector<Destination*>& destinations) {
    if (destinations.empty()) {
        cout << "Aucune destination a afficher" << endl;
        return;
    }

    cout << "Liste des destinations :" << endl;
    for (const Destination* destPtr : destinations) {
        cout << "Destination : " << destPtr->nom << ", Temps de vol : " << destPtr->tempsDeVol << endl;
    }
}
