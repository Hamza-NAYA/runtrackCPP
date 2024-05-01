#include <iostream>

using namespace std;

int main(void) {
    int N;

    cout << "Entrez le nombre de Hello World : ";
    cin >> N;

    if (N > 0) {
        while (N != 0) {
            cout << "Hello World" << endl;
            N--;
        }
    } else {
        cout << "Il faut un entier positive..." << endl;
    }

    return 0;
}
