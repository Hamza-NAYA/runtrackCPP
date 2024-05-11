#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Note {
    string nom;
    string prenom;
    double valeur;
};


void ajouterNote(vector<Note> &listeNotes) {
    Note nouvelleNote;
    cout << "Entrez le nom de l'etudiant: ";
    cin >> nouvelleNote.nom;
    cout << "Entrez le prenom de l'etudiant: ";
    cin >> nouvelleNote.prenom;
    cout << "Entrez la note: ";
    cin >> nouvelleNote.valeur;
    listeNotes.push_back(nouvelleNote);
    cout << "Note ajoutee avec succes" << endl;
}

void afficherListeNotes(const vector<Note> &listeNotes) {
    if (listeNotes.empty()) {
        cout << "La liste de notes est vide" << endl;
    } else {
        cout << "Liste des notes:" << endl;
        for (const Note &note : listeNotes) {
            cout << "Nom: " << note.nom << ", Prenom: " << note.prenom << ", Note: " << note.valeur << endl;
        }
    }
}

void supprimerNote(vector<Note> &listeNotes) {
    if (listeNotes.empty()) {
        cout << "La liste de notes est vide" << endl;
        return;
    }

    string nom, prenom;
    cout << "Entrez le nom de l'etudiant dont vous voulez supprimer la note: ";
    cin >> nom;
    cout << "Entrez le prenom de l'etudiant: ";
    cin >> prenom;

    bool trouve = false;
    for (auto it = listeNotes.begin(); it != listeNotes.end(); ++it) {
        if (it->nom == nom && it->prenom == prenom) {
            it = listeNotes.erase(it);
            cout << "Note de " << nom << " " << prenom << " supprimee avec succes" << endl;
            trouve = true;
            break;
        }
    }

    if (!trouve) {
        cout << "Note de " << nom << " " << prenom << " non trouvee." << endl;
    }
}

void calculerMoyenne(const vector<Note> &listeNotes) {
    if (listeNotes.empty()) {
        cout << "La liste de notes est vide" << endl;
        return;
    }

    double somme = 0.0;
    for (const Note &note : listeNotes) {
        somme += note.valeur;
    }

    double moyenne = somme / listeNotes.size();
    cout << "La moyenne des notes est: " << moyenne << endl;
}

int main(void) {
    vector<Note> listeNotes;
    int choix;

    do {
        cout << "\nBienvenue dans le NoteManager";
        cout << "\nMenu:\n";
        cout << "1. Ajouter une note\n";
        cout << "2. Afficher la liste de notes\n";
        cout << "3. Supprimer une note d'un etudiant\n";
        cout << "4. Afficher la moyenne des notes\n";
        cout << "5. Quitter\n";
        cout << "Choix : ";
        cin >> choix;

        switch (choix) {
            case 1:
                ajouterNote(listeNotes);
                break;
            case 2:
                afficherListeNotes(listeNotes);
                break;
            case 3:
                supprimerNote(listeNotes);
                break;
            case 4:
                calculerMoyenne(listeNotes);
                break;
            case 5:
                cout << "Arret du programme NoteManager" << endl;
                break;
            default:
                cout << "Choix invalide, veuillez reessayer" << endl;
        }
    } while (choix != 5);

    return 0;
}
