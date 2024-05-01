#include <iostream>

using namespace std;

int main(void) {
    int N;

    cout << "Entrez une annee : ";
    if (!(cin >> N)) {
        cerr << "Veuillez entrer un entier valide" << endl;
        return 1;
    }

    if (N % 4 == 0 && N % 100 != 0) {
        cout << N << " est une annee bissextile" << endl;
    } else {
        cout << N << " n'est pas une annee bissextile" << endl;
    }

    return 0;
}
