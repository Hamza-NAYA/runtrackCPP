#include <iostream>

using namespace std;

int main(void) {
    const int size = 10;
    int T[size];
    int count = 0;

    cout << "Entrez 10 entiers :\n";
    for (int i = 0; i < size; ++i) {
        cout << "Entier " << i + 1 << " : ";
        cin >> T[i];
    }

    for (int i = 0; i < size; ++i) {
        if (T[i] >= 5) {
            count++;
        }
    }

    cout << "Nombre d'entiers >= 5 : " << count << endl;

    return 0;
}
