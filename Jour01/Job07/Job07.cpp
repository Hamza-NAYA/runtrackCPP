#include <iostream>

using namespace std;

int main(void) {
    int N;

    cout << "Entrez un nombre : ";
    if (!(cin >> N)) {
        cerr << "Veuillez entrer un entier valide" << endl;
        return 1;
    }

    if (N % 2 == 0){
        cout << N << " est un nombre pair" << endl;
    } else {
        cout << N << " est un nombre impair" << endl;
    }

    return 0;
}
