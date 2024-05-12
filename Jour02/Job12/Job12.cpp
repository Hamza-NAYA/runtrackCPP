#include <iostream>

using namespace std;

double sommeHarmonique(int n) {
    double somme = 0.0;

    for (int i = 1; i <= n; i++) {
        somme += 1.0 / i;
    }

    return somme;
}

int main(void) {
    int n;

    cout << "Ce programme calcule la somme des n premiers termes de la serie harmonique" << endl;
    cout << "Entrez la valeur de n : ";
    cin >> n;

    if (n <= 0) {
        cout << "Erreur : n doit etre un entier positif" << endl;
    } else {
        cout << "La somme des " << n << " premiers termes de la serie harmonique est : " << sommeHarmonique(n) << endl;
    }

    return 0;
}
