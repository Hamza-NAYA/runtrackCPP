#include <iostream>
using namespace std;

int main(void) {
    int N;
    int somme = 0;

    cout << "Entrez un entier N : ";
    cin >> N;

    if (N < 5) {
        cout << "N doit etre superieur ou egal a 5" << endl;
        return 1;
    }

    for (int i = 5; i <= N; ++i) {
        somme += i * i * i;
    }

    cout << "La somme des cubes des nombres de 5^3 a " << N << "^3 est : " << somme << endl;

    return 0;
}
