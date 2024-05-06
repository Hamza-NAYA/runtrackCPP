#include <iostream>

using namespace std;

int main(void) {
    int tableau[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int longueur = sizeof(tableau) / sizeof(tableau[0]);

    for (int i = 0; i < longueur ; ++i) {
        cout << "Adresse de tableau[" << i << "] : " << &tableau[i] << ", Valeur : " << tableau[i] << endl;
    }

    return 0;
}
