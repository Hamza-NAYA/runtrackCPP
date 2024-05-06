#include <iostream>
#include <vector>

using namespace std;

int somme_pairs(const vector<int>& tableau) {
    int somme = 0;
    for (int nombre : tableau) {
        if (nombre % 2 == 0) {
            somme += nombre;
        }
    }
    return somme;
}

int main(void) {
    vector<int> tab = {6, 7, 8, 9, 10};

    int somme_totale = somme_pairs(tab);

    cout << "La somme des elements pairs de ce tableau est : " << somme_totale << endl;
    return 0;
}
