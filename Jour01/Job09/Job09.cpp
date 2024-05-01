#include <iostream>

using namespace std;

int main(void) {
    int N1, N2, N3;

    cout << "Entrez trois nombres, vous verrez..." << endl;

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

    if (N1 > N2 && N1 > N3) {
        cout << N1 << " est le plus grand nombre des trois" << endl;
    } else if (N2 > N1 && N2 > N3 ) {
        cout << N2 << " est le plus grand nombre des trois" << endl;
    } else {
        cout << N3 << " est le plus grand nombre des trois" << endl;
    }

    return 0;
}
