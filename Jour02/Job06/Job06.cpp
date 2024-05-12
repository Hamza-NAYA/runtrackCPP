#include <iostream>

using namespace std;

int main(void) {
    int n;

    cout << "Entrez un entier n : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << " est un multiple de 3 et de 5 (FizzBuzz)" << endl;
        } else if (i % 3 == 0) {
            cout << i << " est un multiple de 3 (Fizz)" << endl;
        } else if (i % 5 == 0) {
            cout << i << " est un multiple de 5 (Buzz)" << endl;
        } else {
            cout << i << " n'est ni un multiple de 3 ni de 5 (" << i << ")" << endl ;
        }
    }

    return 0;
}
