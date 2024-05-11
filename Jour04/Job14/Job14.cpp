#include <iostream>

using namespace std;

int main(void) {
    int x = 12;

    cout << "Valeur initiale de x : " << x << endl;

    int& ref_x = x;

    ref_x = 24;

    cout << "Nouvelle valeur de x : " << x << endl;

    return 0;
}
