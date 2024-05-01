#include <iostream>

using namespace std;

int main(void) {
    int N1, N2, temp;

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

    temp = N1;
    N1 = N2;
    N2 = temp;

    cout << "Voici le premier nombre que vous avez choisi : " << N1 << endl;
    cout << "Voici le second nombre que vous avez choisi : " << N2 << endl;
    cout << "Vous avez remarque quelque chose ?" << endl;

    return 0;
}
