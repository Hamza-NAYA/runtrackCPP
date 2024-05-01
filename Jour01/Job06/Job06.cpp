#include <iostream>

using namespace std;

int main(void) {
    int N;

    cout << "Entrez un nombre : ";
    if (!(cin >> N)) {
        cerr << "Veuillez entrer un entier valide" << endl;
        return 1;
    }

    cout << "Table de multiplication de " << N << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << N << " x " << i << " = " << (N * i) << endl;
    }

    return 0;
}
