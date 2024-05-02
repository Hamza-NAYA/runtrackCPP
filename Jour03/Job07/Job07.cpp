#include <iostream>

using namespace std;

int main(void) {
    const int size = 10;
    int T[size];


    cout << "Entrez 10 entiers :\n";
    for (int i = 0; i < size; ++i) {
        cout << "Entier " << i + 1 << " : ";
        cin >> T[i];
    }

    int max = 0;
    for (int i = 1; i < size; ++i) {
        if (T[i] > T[max]) {
            max = i;
        }
    }

    cout << "L'indice du plus grand element est : " << max << endl;

    return 0;
}
