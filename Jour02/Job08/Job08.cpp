#include <iostream>

using namespace std;

int main(void) {
    int a, b;

    cout << "Entrez la borne inferieure a : ";
    cin >> a;

    cout << "Entrez la borne superieure b : ";
    cin >> b;

    if (a <= b) {
        int i = a; 

        while (i <= b) {
            cout << i << " ";
            i++; 
        }
        cout << endl;
    } else {
        cout << "La borne inferieure doit etre inferieure ou egale a la borne superieure" << endl;
    }

    return 0;
}
