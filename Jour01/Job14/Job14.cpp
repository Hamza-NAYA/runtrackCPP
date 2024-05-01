#include <iostream>
using namespace std;

int main() {
    int N,  N_inverse = 0, reste;

    cout << "Entrez un nombre : ";
    cin >> N;

    while (N != 0) {
        reste = N % 10;
        N_inverse = N_inverse * 10 + reste;
        N /= 10;
    }

    cout << "Le nombre inverse est : " << N_inverse << endl;

    return 0;
}
