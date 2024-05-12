#include <iostream>

using namespace std;

void fibonacciJusquaLimite(int limite) {
    int a = 0, b = 1, c;
    cout << "Suite de Fibonacci jusqu'a la limite " << limite << " :" << endl;
    cout << a << " " << b << " ";

    c = a + b;
    while (c <= limite) {
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }
    cout << endl;
}

int main(void) {
    int limite;
    cout << "Entrez la limite pour la suite de Fibonacci : ";
    cin >> limite;

    fibonacciJusquaLimite(limite);

    return 0;
}