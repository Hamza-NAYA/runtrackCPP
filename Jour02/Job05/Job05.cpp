#include <iostream>

using namespace std;

int main(void) {
    double note;

    cout << "Entrez votre note (entre 0 et 20) : ";
    cin >> note;

    if (note >= 0 && note <= 20) {
      
        if (note > 10) {
            cout << "Valide" << endl;
        } else {
            cout << "Non valide" << endl;
        }
    } else {
        cout << "La note doit etre comprise entre 0 et 20" << endl;
    }

    return 0;
}
