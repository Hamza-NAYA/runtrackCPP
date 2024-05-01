#include <iostream>

using namespace std;

int main(void) {
    int N1, N2, N3, N4, N5;
    float moy;

    cout << "Entrez un nombre : ";
    if (!(cin >> N1)) {
        cerr << "Veuillez entrer un entier valide" << endl;
        return 1;
    }

    cout << "Entrez un nombre : ";
    if (!(cin >> N2)) {
        cerr << "Veuillez entrer un entier valide" << endl;
        return 1;
    }

    cout << "Entrez un nombre : ";
    if (!(cin >> N3)) {
        cerr << "Veuillez entrer un entier valide" << endl;
        return 1;
    }
    cout << "Entrez un nombre : ";
    if (!(cin >> N4)) {
        cerr << "Veuillez entrer un entier valide" << endl;
        return 1;
    }
    cout << "Entrez un nombre : ";
    if (!(cin >> N5)) {
        cerr << "Veuillez entrer un entier valide" << endl;
        return 1;
    }

    int total = 5;
    moy = (N1 + N2 + N3 + N4 + N5)/total;

    cout << "La moyenne de vos nombres est : " << moy << endl;

    return 0;
}
