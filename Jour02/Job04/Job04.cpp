#include <iostream>

using namespace std;

int main(void) {
    char operation;
    double nombre1, nombre2, resultat;

    cout << "Entrez le premier nombre : ";
    cin >> nombre1;

    cout << "Entrez l'operation (+, -, *, /) : ";
    cin >> operation;

    cout << "Entrez le deuxieme nombre : ";
    cin >> nombre2;

    switch(operation) {
        case '+':
            resultat = nombre1 + nombre2;
            cout << "Le resultat de l'addition est : " << resultat;
            break;
        case '-':
            resultat = nombre1 - nombre2;
            cout << "Le resultat de la soustraction est : " << resultat;
            break;
        case '*':
            resultat = nombre1 * nombre2;
            cout << "Le resultat de la multiplication est : " << resultat;
            break;
        case '/':
            if(nombre2 != 0) {
                resultat = nombre1 / nombre2;
                cout << "Le resultat de la division est : " << resultat;
            } else {
                cout << "Erreur : division par zero";
            }
            break;
        default:
            cout << "Operation non valide";
    }

    return 0;
}
