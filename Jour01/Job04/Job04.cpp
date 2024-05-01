#include <iostream>

using namespace std;

int main(void) {
    int R, N1, N2;

    cout << "Entrez le premier nombre : ";
    if (!(cin >> N1)) {
        cerr << "Veuillez entrer un entier valide" << endl;
        return 1;
    }

    cout << "Entrez le second nombre : ";
    if (!(cin >> N2)) {
        cerr << "Veuillez entrer un entier valide" << endl;
        return 1;
    }

    R = N1 + N2;

    cout << "Le resultat de votre addition est : " << R << endl;
    return 0;
}
